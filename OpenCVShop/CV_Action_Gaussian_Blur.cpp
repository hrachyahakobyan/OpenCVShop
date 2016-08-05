#include "stdafx.h"
#include "CV_Action_Gaussian_Blur.h"

namespace core{
	void CV_Action_Gaussian_Blur::operator()(cv::InputArray input, cv::OutputArray output) const
	{
		cv::Mat src = input.getMat();
		output.create(src.size(), src.type());
		cv::Mat dst = output.getMat();
		cv::GaussianBlur(src, dst, ksize, sigma_x, sigma_y, border_type);
	}

	std::string CV_Action_Gaussian_Blur::description() const
	{
		return "I am a guassian blur";
	}
}