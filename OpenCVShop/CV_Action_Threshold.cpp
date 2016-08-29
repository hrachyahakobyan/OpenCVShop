#include "stdafx.h"
#include "CV_Action_Threshold.h"


namespace core{
	void CV_Action_Threshold::operator()(const CV_Image& src, CV_Image& out) const
	{
		cv::Mat dst;
		cv::Mat gray;
		toGray(src.mat(), gray);
		cv::threshold(gray, dst, _thresh, _maxValue, _threshType);
		out.setMat(dst, CV_Colorspace::Gray);
	}

	std::string CV_Action_Threshold::description() const
	{
		std::string desc("Action: Adaptive Threshold.\n");
		desc.append("Paramerers: ");
		desc.append("\nThreshold = "); desc.append(std::to_string(_thresh));
		desc.append("\nMax value = "); desc.append(std::to_string(_maxValue));
		desc.append("\nThreshold type "); desc.append(std::to_string(_threshType));
		return desc;
	}
}
