#include "stdafx.h"
#include "CV_Action_Threshold.h"


namespace core{
	void CV_Action_Threshold::operator()(cv::InputArray input, cv::OutputArray output) const
	{
		cv::Mat src = input.getMat();
		cv::Mat dst;
		cv::Mat gray;
		toGray(src, gray);
		cv::threshold(gray, dst, _thresh, _maxValue, _threshType);
		output.assign(dst);
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
