#include "stdafx.h"
#include "CV_Action_Base.h"

namespace core{
	void CV_Action_Base::toGray(const cv::Mat& src, cv::Mat& dst, bool shared) const
	{
		if (src.empty())
			return;
		if (src.channels() == 3)
			cv::cvtColor(src, dst, CV_BGR2GRAY);
		else if (src.channels() == 4)
			cv::cvtColor(src, dst, CV_BGRA2GRAY);
		else
			dst = shared ? src : src.clone();
	}
}