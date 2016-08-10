#include "stdafx.h"
#include "CV_Action_Dilate.h"


namespace core{
	void CV_Action_Dilate::operator()(cv::InputArray input, cv::OutputArray output) const
	{
		cv::Mat src = input.getMat();
		output.create(src.size(), src.type());
		cv::Mat dst = output.getMat();
		cv::dilate(src, dst, cv::getStructuringElement(_morphShape, _ksize));
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
