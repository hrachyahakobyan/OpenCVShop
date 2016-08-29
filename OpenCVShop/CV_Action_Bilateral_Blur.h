#pragma once
#include "CV_Action_CloneAble.h"

namespace core{
	class CV_Action_Bilateral_Blur : public CV_Action_CloneAble<CV_Action_Base, CV_Action_Bilateral_Blur>
	{
	public:
		CV_Action_Bilateral_Blur() : _d(3), _sigmaColor(10), _sigmaSpace(10){}
		CV_Action_Bilateral_Blur(int d, double sigmaColor, double sigmaSpace) :
			_d(d), _sigmaColor(sigmaColor), _sigmaSpace(sigmaSpace){}
		void operator()(const CV_Image& src, CV_Image& out) const;
		std::string description() const;
	public:
		int _d;
		double _sigmaColor;
		double _sigmaSpace;
	};
}

