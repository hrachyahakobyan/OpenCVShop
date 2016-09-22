#include "stdafx.h"
#include "CV_Action_CvtColor.h"

namespace core{
	void CV_Action_CvtColor::operator()(const CV_Image& src, CV_Image& out) const
	{
		CV_Colorspace srcColor, dstColor;
		colorspacesForConversionCode(cv::ColorConversionCodes(_code), srcColor, dstColor);
		if (srcColor != src.colorspace())
			CV_Error(cv::Error::Code::StsUnmatchedFormats, "Incompatible source while converting formats");
		int dstChannels = channelsForColorspace(dstColor);
		cv::Mat dst;
		cv::cvtColor(src.mat(), dst, _code, dstChannels);
		out.setMat(dst, dstColor);
	}
	
	std::string CV_Action_CvtColor::description() const
	{
		std::string desc("Action: Convert color.\n");
		desc.append("Paramerers: ");
		desc.append("\n Code = "); desc.append(std::to_string(_code));
		return desc;
	}
}