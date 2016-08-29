#include "stdafx.h"
#include "CV_Action_Bilateral_Blur.h"

namespace core{
	void CV_Action_Bilateral_Blur::operator()(const CV_Image& src, CV_Image& out) const
	{
		cv::Mat dst;
		cv::bilateralFilter(src.mat(), dst, _d, _sigmaColor, _sigmaSpace);
		out.setMat(dst, src.colorspace());
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