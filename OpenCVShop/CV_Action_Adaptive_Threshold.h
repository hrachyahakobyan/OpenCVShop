#pragma once
#include "CV_Action_CloneAble.h"

namespace core{
	class CV_Action_Adaptive_Threshold : public CV_Action_CloneAble<CV_Action_Base, CV_Action_Adaptive_Threshold>
	{
	public:
		CV_Action_Adaptive_Threshold() : _maxValue(0), _adaptiveMethod(cv::AdaptiveThresholdTypes::ADAPTIVE_THRESH_GAUSSIAN_C),
			_threshType(cv::ThresholdTypes::THRESH_BINARY), _blockSize(3), _c(0){}
		void operator()(const CV_Image& src, CV_Image& out) const;
		std::string description() const;
	public:
		double _maxValue;
		int _adaptiveMethod;
		int _threshType;
		int _blockSize;
		double _c;
	};
}

