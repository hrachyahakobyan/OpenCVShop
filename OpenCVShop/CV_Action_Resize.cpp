#include "stdafx.h"
#include "CV_Action_Resize.h"

namespace core{ void CV_Action_Resize::operator()(cv::InputArray input, cv::OutputArray output) const
	{
		cv::Mat src = input.getMat();
		cv::Mat dst;
		cv::resize(src, dst, _size, 0, 0, _interFlag);
		output.assign(dst);
	}

	std::string CV_Action_Resize::description() const
	{
		std::string desc("Action: Resize.\n");
		desc.append("Paramerers: ");
		desc.append("\nHeight = "); desc.append(std::to_string(_size.height));
		desc.append("\nWidth = "); desc.append(std::to_string(_size.width));
		desc.append("\nInterpolation method = "); desc.append(std::to_string(_interFlag));
		return desc;
	}
}