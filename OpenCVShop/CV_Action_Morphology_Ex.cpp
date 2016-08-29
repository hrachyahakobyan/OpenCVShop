#include "stdafx.h"
#include "CV_Action_Morphology_Ex.h"

namespace core{

	void CV_Action_Morphology_Ex::operator()(const CV_Image& src, CV_Image& out) const
	{
		cv::Mat dst;
		cv::morphologyEx(src.mat(), dst, _morphType, cv::getStructuringElement(_morphShape, _ksize), cv::Point(-1, -1), _iterations);
		out.setMat(dst, src.colorspace());
	}

	std::string CV_Action_Morphology_Ex::description() const
	{
		std::string desc("Action: Extended Morphology.\n");
		desc.append("Paramerers: ");
		desc.append("\nMorph Type = "); desc.append(std::to_string(_morphType));
		desc.append("\nKernel size = "); desc.append(std::to_string(_ksize.height));
		desc.append("\nMorph Shape = "); desc.append(std::to_string(_morphShape));
		return desc;
	}
}