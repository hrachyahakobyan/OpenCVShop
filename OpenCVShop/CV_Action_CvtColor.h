#pragma once
#include "CV_Action_CloneAble.h"

namespace core{
	class CV_Action_CvtColor : public CV_Action_CloneAble<CV_Action_Base, CV_Action_CvtColor>
	{
	public:
		CV_Action_CvtColor() : _code(cv::COLOR_BGR2RGB){}
		void operator()(const CV_Image& src, CV_Image& out) const;
		std::string description() const;
	public:
		int _code;
	};
}