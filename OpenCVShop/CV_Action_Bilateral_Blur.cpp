#include "stdafx.h"
#include "CV_Action_Bilateral_Blur.h"

namespace core{
	void CV_Action_Bilateral_Blur::operator()(cv::InputArray input, cv::OutputArray output) const
	{
		cv::Mat src = input.getMat();
		output.create(src.size(), src.type());
		cv::Mat dst = output.getMat();
		cv::bilateralFilter(src, dst, _d, _sigmaColor, _sigmaSpace);
	}

	std::string CV_Action_Bilateral_Blur::description() const
	{
		std::string desc("Action: Bilateral Blur.\n");
		desc.append("Paramerers: ");
		desc.append("\n d = "); desc.append(std::to_string(_d));
		desc.append("\n Sigma color = "); desc.append(std::to_string(_sigmaColor));
		desc.append("\n Sigma space = "); desc.append(std::to_string(_sigmaSpace));
		return desc;
	}
}