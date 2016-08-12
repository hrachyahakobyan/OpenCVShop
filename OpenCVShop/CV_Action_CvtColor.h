#pragma once
#include "CV_Action_CloneAble.h"

namespace core{
	class CV_Action_CvtColor : public CV_Action_CloneAble<CV_Action_Base, CV_Action_CvtColor>
	{
	public:
		CV_Action_CvtColor() : _code(cv::COLOR_BGR2RGB), _dstCn(0){}
		void operator()(cv::InputArray input, cv::OutputArray output) const;
		std::string description() const;
	public:
		int _code;
		int _dstCn;
	};
}