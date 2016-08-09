#include "stdafx.h"
#include "CV_Action_Gaussian_Blur.h"

namespace core{
	void CV_Action_Gaussian_Blur::operator()(cv::InputArray input, cv::OutputArray output) const
	{
		cv::Mat src = input.getMat();
		output.create(src.size(), src.type());
		cv::Mat dst = output.getMat();
		cv::GaussianBlur(src, dst, _ksize, _sigma_x, _sigma_y, _border_type);
	}

	std::string CV_Action_Gaussian_Blur::description() const
	{
		std::string desc("Action: Gaussian Blur.\n");
		desc.append("Paramerers: ");
		desc.append("\nKernel size = "); desc.append(std::to_string(_ksize.height));
		desc.append("\nSigmaX = "); desc.append(std::to_string(_sigma_x));
		return desc;
	}
}