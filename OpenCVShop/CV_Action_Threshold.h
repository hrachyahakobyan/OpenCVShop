#pragma once
#include "CV_Action_CloneAble.h"

namespace core{
	class CV_Action_Threshold : public CV_Action_CloneAble<CV_Action_Base, CV_Action_Threshold>
	{
	public:
		CV_Action_Threshold() : _maxValue(0), _thresh(0), _threshType(cv::ThresholdTypes::THRESH_BINARY){}
		void operator()(const CV_Image& src, CV_Image& out) const;
		std::string description() const;
	public:
		double _maxValue;
		double _thresh;
		int _threshType;
	};
}