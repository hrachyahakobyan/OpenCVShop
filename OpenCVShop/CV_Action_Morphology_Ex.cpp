#include "stdafx.h"
#include "CV_Action_Morphology_Ex.h"

namespace core{

	void CV_Action_Morphology_Ex::operator()(cv::InputArray input, cv::OutputArray output) const
	{
		cv::Mat src = input.getMat();
		output.create(src.size(), src.type());
		cv::Mat dst = output.getMat();
		cv::morphologyEx(src, dst, _morphType, cv::getStructuringElement(_morphShape, _ksize));
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