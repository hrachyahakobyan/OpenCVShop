#pragma once
#include "CV_Action_CloneAble.h"

namespace core{
	class CV_Action_Median_Blur : public CV_Action_CloneAble<CV_Action_Base, CV_Action_Median_Blur>
	{
	public:
		CV_Action_Median_Blur() : _ksize(1){}
		CV_Action_Median_Blur(int ksize) : _ksize(ksize){}
		void operator()(const CV_Image& src, CV_Image& out) const;
		std::string description() const;
	public:
		int _ksize;
	};
}