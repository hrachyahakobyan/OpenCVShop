#include "stdafx.h"
#include "CV_Action_Dilate.h"


namespace core{
	void CV_Action_Dilate::operator()(const CV_Image& src, CV_Image& out) const
	{
		cv::Mat dst;
		cv::dilate(src.mat(), dst, cv::getStructuringElement(_morphShape, _ksize), cv::Point(-1, -1), _iterations);
		out.setMat(dst, src.colorspace());
	}

	std::string CV_Action_Dilate::description() const
	{
		std::string desc("Action: Dilate.\n");
		desc.append("Paramerers: ");
		desc.append("\nKernel size = "); desc.append(std::to_string(_ksize.height));
		desc.append("\nMorph Shape = "); desc.append(std::to_string(_morphShape));
		return desc;
	}
}
