#include "stdafx.h"
#include "CV_Action_Median_Blur.h"


namespace core{
	void CV_Action_Median_Blur::operator()(cv::InputArray input, cv::OutputArray output) const
	{
		cv::Mat src = input.getMat();
		output.create(src.size(), src.type());
		cv::Mat dst = output.getMat();
		cv::medianBlur(src, dst, _ksize);
	}

	std::string CV_Action_Median_Blur::description() const
	{
		std::string desc("Action: Median Blur.\n");
		desc.append("Paramerers: ");
		desc.append("\nKernel size = "); desc.append(std::to_string(_ksize));
		return desc;
	}
}