#pragma once
#include "CV_Action_CloneAble.h"

namespace core{
	class CV_Action_EqHist : public CV_Action_CloneAble<CV_Action_Base, CV_Action_EqHist>
	{
	public:
		CV_Action_EqHist(){}
		void operator()(cv::InputArray input, cv::OutputArray output) const;
		std::string description() const;
	private:
		void eqHistColor(const cv::Mat& src, cv::Mat& dst) const;
		void eqHistGray(const cv::Mat& src, cv::Mat& dst) const;
	};
}