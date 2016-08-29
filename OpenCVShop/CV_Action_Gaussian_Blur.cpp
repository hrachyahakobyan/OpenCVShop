#include "stdafx.h"
#include "CV_Action_Gaussian_Blur.h"

namespace core{
	void CV_Action_Gaussian_Blur::operator()(const CV_Image& src, CV_Image& out) const
	{
		cv::Mat dst;
		cv::GaussianBlur(src.mat(), dst, _ksize, _sigma_x, _sigma_y, _border_type);
		out.setMat(dst, src.colorspace());
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