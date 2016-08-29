#include "stdafx.h"
#include "CV_Action_Shapes.h"


namespace core{
	void CV_Action_Shapes::operator()(const CV_Image& src, CV_Image& out) const
	{
		if (src.mat().empty() || _shapeType == CVShapeType::NoShape)
			return;
		cv::Mat dst;
		if (src.colorspace() == core::CV_Colorspace::Gray)
			cv::cvtColor(src.mat(), dst, CV_GRAY2RGB);
		else
			dst = src.mat().clone();
		cv::Mat proc;
		preprocess(src.mat(), proc);
		cv::imshow("Proc", proc);
		std::vector<std::vector<cv::Point>> contours;
		extract(proc, contours);
		std::vector<std::vector<cv::Point>> shapes;
		detect(contours, shapes);
		
		drawContours(dst, shapes);
		core::CV_Colorspace dstColor = ((src.colorspace() == CV_Colorspace::Gray) ? CV_Colorspace::RGB : src.colorspace());
		out.setMat(dst, dstColor);
	}

	void CV_Action_Shapes::drawContours(cv::Mat& src, const std::vector<std::vector<cv::Point>>& contours) const
	{
		for (int i = 0; i< contours.size(); i++)
		{
			cv::drawContours(src, contours, i, _color, _width, 8);
		}
	}

	void CV_Action_Shapes::preprocess(const cv::Mat& src, cv::Mat& dst) const
	{
		if (src.empty())
			return;
		if (_procType == CVShapePreprocType::NoProc)
		{
			toGray(src, dst);
			return;
		}
		cv::Mat gray;
		toGray(src, gray);
		cv::GaussianBlur(gray, gray, cv::Size(5, 5), 0);
		if (_procType == CVShapePreprocType::Canny)
		{
			cv::Mat canny;
			cv::Canny(gray, canny, 0, 255, 5);
			cv::dilate(canny, dst, cv::getStructuringElement(cv::MORPH_RECT, cv::Size(3, 3)));
		}
		else
		{
			cv::threshold(gray, dst, 255, 255, cv::THRESH_OTSU); 
		}
	}

	void CV_Action_Shapes::extract(const cv::Mat& src, std::vector<std::vector<cv::Point>>& contours) const
	{
		contours.clear();
		if (src.empty())
			return;
		cv::findContours(src, contours, cv::RETR_LIST, cv::CHAIN_APPROX_SIMPLE);
	}

	void CV_Action_Shapes::detect(const std::vector<std::vector<cv::Point>>& contours, std::vector<std::vector<cv::Point>>& shapes) const
	{
		shapes.clear();
		for (auto it = contours.begin(); it != contours.end(); ++it)
		{
			CVShapeType shape = detect(*it);
			if ((shape != CVShapeType::NoShape) && (shape == _shapeType
				|| (_shapeType == CVShapeType::Default)))
				shapes.push_back(*it);
		}
	}

	CVShapeType CV_Action_Shapes::detect(const std::vector<cv::Point>& contour) const
	{
		core::CVShapeType shape = core::CVShapeType::NoShape;
		double peri = cv::arcLength(contour, true);
		std::vector<cv::Point> approx;
		cv::approxPolyDP(contour, approx, 0.04 * peri, true);
		if (approx.size() < 3)
			return shape;
		double area = std::fabs(cv::contourArea(approx));
		if (area - _minArea < DBL_EPSILON)
			return shape;
		if (_convex && !cv::isContourConvex(approx))
			return shape;
		if (approx.size() == 3)
			shape = CVShapeType::Triangle;
		else if (approx.size() == 4)
		{
			if (isValidSquare(approx))
				shape = CVShapeType::Square;
			else if (isValidRect(approx))
				shape = CVShapeType::Rectangle;
			else
				shape = CVShapeType::Quadrilateral;
		}
		else if (approx.size() == 5)
			shape = CVShapeType::Pentagon;
		else
			shape = CVShapeType::Default;
		return shape;
	}

	bool CV_Action_Shapes::isValidRect(const std::vector <cv::Point> &contour) const
	{
		if (contour.size() != 4)
			return false;
		double maxCos = 0.0;
		for (int j = 2; j < 5; j++)
		{
			double cosine = std::fabs(vectorCosine(contour[j % 4], contour[j - 2], contour[j - 1]));
			maxCos = std::max(maxCos, cosine);
		}
		return (maxCos <= _maxCos);
	}

	bool CV_Action_Shapes::isValidSquare(const std::vector<cv::Point>& contour) const
	{
		if (!isValidRect(contour))
			return false;
		cv::Rect box = cv::boundingRect(contour);
		double aspRatio = double(box.width) / box.height;
		return (aspRatio >= 0.90 && aspRatio <= 1.1);
	}

	double CV_Action_Shapes::vectorCosine(cv::Point pt1, cv::Point pt2, cv::Point pt0) const
	{
		double dx1 = pt1.x - pt0.x;
		double dy1 = pt1.y - pt0.y;
		double dx2 = pt2.x - pt0.x;
		double dy2 = pt2.y - pt0.y;
		return (dx1*dx2 + dy1*dy2) / sqrt((dx1*dx1 + dy1*dy1)*(dx2*dx2 + dy2*dy2) + 1e-10);
	}

	std::string CV_Action_Shapes::description() const
	{
		std::string desc("Action: Shapes.\n");
		desc.append("Paramerers: ");
		desc.append("\n Shape = "); desc.append(std::to_string(_shapeType));
		desc.append("\n Preprocessing = "); desc.append(std::to_string(_procType));
		return desc;
	}
}