#include "stdafx.h"
#include "CV_Action_Erode.h"


namespace core{
	void CV_Action_Erode::operator()(const CV_Image& src, CV_Image& out) const
	{
		cv::Mat dst;
		cv::erode(src.mat(), dst, cv::getStructuringElement(_morphShape, _ksize), cv::Point(-1, -1), _iterations);
		out.setMat(dst, src.colorspace());
	}

	std::string CV_Action_Erode::description() const
	{
		std::string desc("Action: Erode.\n");
		desc.append("Paramerers: ");
		desc.append("\nKernel size = "); desc.append(std::to_string(_ksize.height));
		desc.append("\nMorph Shape = "); desc.append(std::to_string(_morphShape));
		return desc;
	}
}
