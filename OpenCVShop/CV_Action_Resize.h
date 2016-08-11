#pragma once
#include "CV_Action_CloneAble.h"

namespace core{
	class CV_Action_Resize : public CV_Action_CloneAble<CV_Action_Base, CV_Action_Resize>
	{
	public:
		CV_Action_Resize() : _size(cv::Size(50, 50)), _interFlag(cv::InterpolationFlags::INTER_LINEAR) {}
		CV_Action_Resize(const cv::Size& size, int interFlag) : _size(size), _interFlag(interFlag){}
		void operator()(cv::InputArray input, cv::OutputArray output) const;
		std::string description() const;
	public:
		cv::Size _size;
		int _interFlag;
	};
}

