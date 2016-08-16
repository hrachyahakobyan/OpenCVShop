#include "stdafx.h"
#include "CV_Action_EqHist.h"

namespace core{
	void CV_Action_EqHist::operator()(cv::InputArray input, cv::OutputArray output) const
	{
		cv::Mat src = input.getMat();
		cv::Mat dst;
		if (src.channels() == 1)
			eqHistGray(src, dst);
		else
			eqHistColor(src, dst);
		output.assign(dst);
	}


	void CV_Action_EqHist::eqHistColor(const cv::Mat& src, cv::Mat& dst) const
	{
		if (src.empty() || src.channels() < 3)
			return;
		cv::Mat ycrcb;
		cv::cvtColor(src, ycrcb, CV_BGR2YCrCb);

		std::vector<cv::Mat> channels;
		cv::split(ycrcb, channels);

		cv::equalizeHist(channels[0], channels[0]);
		cv::merge(channels, ycrcb);

		cv::cvtColor(ycrcb, dst, CV_YCrCb2BGR);
	}

	void CV_Action_EqHist::eqHistGray(const cv::Mat& src, cv::Mat& dst) const
	{
		if (src.empty() || src.channels() > 1)
			return;
		cv::equalizeHist(src, dst);
	}

	std::string CV_Action_EqHist::description() const
	{
		std::string desc("Action: Equalize histogram.\n");
		return desc;
	}
}