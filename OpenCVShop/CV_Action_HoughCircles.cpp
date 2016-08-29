#include "stdafx.h"
#include "CV_Action_HoughCircles.h"

namespace core{
	void CV_Action_HoughCircles::operator()(const CV_Image& src, CV_Image& out) const
	{
		cv::Mat gray;
		toGray(src.mat(), gray);
		std::vector<cv::Vec3f> circles;
		cv::GaussianBlur(gray, gray, cv::Size(9, 9), 2, 2);
		cv::HoughCircles(gray, circles, cv::HOUGH_GRADIENT, _dp, _minDist, _param1, _param2, _minRad, _maxRad);
		cv::Mat dst = src.mat().clone();
		drawCircles(circles, dst);
		out.setMat(dst, src.colorspace());
	}

	std::string CV_Action_HoughCircles::description() const
	{
		std::string desc("Action: Hough circles.\n");
		desc.append("Paramerers: ");
		desc.append("\n Method = "); desc.append(std::to_string(_method));
		desc.append("\n DP = "); desc.append(std::to_string(_dp));
		desc.append("\n Min distance = "); desc.append(std::to_string(_minDist));
		desc.append("\n Param 1 = "); desc.append(std::to_string(_param1));
		desc.append("\n Param 2 = "); desc.append(std::to_string(_param2));
		desc.append("\n Min rad = "); desc.append(std::to_string(_minRad));
		desc.append("\n Max rad = "); desc.append(std::to_string(_maxRad));
		return desc;
	}

	void CV_Action_HoughCircles::drawCircles(const std::vector<cv::Vec3f>& circles, cv::Mat& img, cv::Scalar color) const
	{
		for (size_t i = 0; i < circles.size(); i++)
		{
			cv::Point center(cvRound(circles[i][0]), cvRound(circles[i][1]));
			int radius = cvRound(circles[i][2]);
			circle(img, center, 3, color, -1, 8, 0);
			circle(img, center, radius, color, 3, 8, 0);
		}
	}
}