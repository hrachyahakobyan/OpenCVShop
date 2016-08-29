#include "stdafx.h"
#include "CV_Action_Resize.h"

namespace core{
	void CV_Action_Resize::operator()(const CV_Image& src, CV_Image& out) const
	{
		cv::Mat dst;
		cv::resize(src.mat(), dst, _size, 0, 0, _interFlag);
		out.setMat(dst, src.colorspace());
	}

	std::string CV_Action_Resize::description() const
	{
		std::string desc("Action: Resize.\n");
		desc.append("Paramerers: ");
		desc.append("\nHeight = "); desc.append(std::to_string(_size.height));
		desc.append("\nWidth = "); desc.append(std::to_string(_size.width));
		desc.append("\nInterpolation method = "); desc.append(std::to_string(_interFlag));
		return desc;
	}
}