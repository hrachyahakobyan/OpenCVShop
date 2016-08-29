#include "stdafx.h"
#include "CV_Action_EqHist.h"

namespace core{
	void CV_Action_EqHist::operator()(const CV_Image& src, CV_Image& out) const
	{
		if (src.mat().channels() == 4)
			CV_Error(cv::Error::Code::StsUnmatchedFormats, "Incompatible format eqHist");
		cv::Mat dst;
		if (src.colorspace() == CV_Colorspace::Gray)
			eqHistGray(src.mat(), dst);
		else
			eqHistColor(src.mat(), dst);
		out.setMat(dst, src.colorspace());
	}


	void CV_Action_EqHist::eqHistColor(const cv::Mat& src, cv::Mat& dst) const
	{
		cv::Mat ycrcb;
		cv::cvtColor(src, ycrcb, CV_RGB2YCrCb);

		std::vector<cv::Mat> channels;
		cv::split(ycrcb, channels);

		cv::equalizeHist(channels[0], channels[0]);
		cv::merge(channels, ycrcb);

		cv::cvtColor(ycrcb, dst, CV_YCrCb2RGB);
	}

	void CV_Action_EqHist::eqHistGray(const cv::Mat& src, cv::Mat& dst) const
	{
		cv::equalizeHist(src, dst);
	}

	std::string CV_Action_EqHist::description() const
	{
		std::string desc("Action: Equalize histogram.\n");
		return desc;
	}
}