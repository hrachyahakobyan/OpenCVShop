#include "stdafx.h"
#include "CV_Action_Adaptive_Threshold.h"


namespace core{
	void CV_Action_Adaptive_Threshold::operator()(cv::InputArray input, cv::OutputArray output) const
	{
		cv::Mat src = input.getMat();
		output.create(src.size(), src.type());
		cv::Mat dst = output.getMat();
		cv::adaptiveThreshold(src, dst, _maxValue, _adaptiveMethod, _threshType, _blockSize, _c);
	}

	std::string CV_Action_Adaptive_Threshold::description() const
	{
		std::string desc("Action: Adaptive Threshold.\n");
		desc.append("Paramerers: ");
		desc.append("\nMax value = "); desc.append(std::to_string(_maxValue));
		desc.append("\nAdaptive method "); desc.append(std::to_string(_adaptiveMethod));
		desc.append("\nThreshold type "); desc.append(std::to_string(_threshType));
		desc.append("\nBlock size "); desc.append(std::to_string(_blockSize));
		desc.append("\nC =  "); desc.append(std::to_string(_c));
		return desc;
	}
}
