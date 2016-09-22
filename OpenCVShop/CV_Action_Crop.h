#pragma once
#include "CV_Action_CloneAble.h"

namespace core{
	class CV_Action_Crop : public CV_Action_CloneAble<CV_Action_Base, CV_Action_Crop>
	{
	public:
		CV_Action_Crop(){}
		void operator()(const CV_Image& src, CV_Image& out) const;
		std::string description() const;
	public:
		void setContour(const std::vector<cv::Point>& contour){ if(contour.size() == 4) _contours = contour; }
		void setContour(const std::vector<std::pair<int, int>>& contour);
	private:
		std::vector<cv::Point> _contours;
	};
}

