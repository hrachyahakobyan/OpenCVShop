#include "stdafx.h"
#include "CV_Action_Morphology_Ex.h"

namespace core{

	void CV_Action_Morphology_Ex::operator()(cv::InputArray input, cv::OutputArray output) const
	{
		cv::Mat src = input.getMat();
		output.create(src.size(), src.type());
		cv::Mat dst = output.getMat();
		cv::morphologyEx(src, dst, op, kernel, anchor, iterations, borderType, borderValue);
	}

	std::string CV_Action_Morphology_Ex::description() const
	{
		return "I am a morpohlogy ex";
	}
}