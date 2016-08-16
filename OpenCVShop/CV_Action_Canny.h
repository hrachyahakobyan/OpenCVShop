#pragma once
#include "CV_Action_CloneAble.h"

namespace core{
	class CV_Action_Canny : public CV_Action_CloneAble<CV_Action_Base, CV_Action_Canny>
	{
	public:
		CV_Action_Canny() : _d(3), _sigmaColor(10), _sigmaSpace(10){}
		CV_Action_Canny(int d, double sigmaColor, double sigmaSpace) :
			_d(d), _sigmaColor(sigmaColor), _sigmaSpace(sigmaSpace){}
		void operator()(cv::InputArray input, cv::OutputArray output) const;
		std::string description() const;
	public:
		int _d;
		double _sigmaColor;
		double _sigmaSpace;
	};
}