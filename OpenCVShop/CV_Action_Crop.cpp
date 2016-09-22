#include "stdafx.h"
#include "CV_Action_Crop.h"

namespace core{
	void CV_Action_Crop::operator()(const CV_Image& src, CV_Image& out) const
	{
		if (_contours.size() != 4)
			return;
		cv::Mat dst;
		cv::RotatedRect box = cv::minAreaRect(_contours);
		double angle = box.angle;
		if (angle < -45.)
			angle += 90;
		cv::Mat rot_mat = cv::getRotationMatrix2D(box.center, angle, 1);
		cv::Mat rotated;
		cv::warpAffine(src.mat(), rotated, rot_mat, src.mat().size(), cv::INTER_CUBIC);
		cv::Size box_size = box.size;
		if (box.angle < -45.)
			std::swap(box_size.height, box_size.width);
		cv::getRectSubPix(rotated, box_size, box.center, dst);
		out.setMat(dst, src.colorspace());
	}

	void CV_Action_Crop::setContour(const std::vector<std::pair<int, int>>& contour)
	{
		if (contour.size() != 4)
			return;
		_contours.clear();
		for (auto it = contour.begin(); it != contour.end(); ++it)
			_contours.push_back(cv::Point((*it).first, (*it).second));
	}

	std::string CV_Action_Crop::description() const
	{
		std::string desc("Action: Crop.\n");
		return desc;
	}
}