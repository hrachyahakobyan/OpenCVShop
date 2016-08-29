#include "stdafx.h"
#include "CV_Action_Median_Blur.h"


namespace core{
	void CV_Action_Median_Blur::operator()(const CV_Image& src, CV_Image& out) const
	{
		cv::Mat dst;
		cv::medianBlur(src.mat(), dst, _ksize);
		out.setMat(dst, src.colorspace());
	}

	std::string CV_Action_Median_Blur::description() const
	{
		std::string desc("Action: Median Blur.\n");
		desc.append("Paramerers: ");
		desc.append("\nKernel size = "); desc.append(std::to_string(_ksize));
		return desc;
	}
}