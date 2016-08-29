#pragma once
#include "CV_Action_CloneAble.h"

namespace core{
	class CV_Action_Morphology : public CV_Action_Base
	{
	public:
		virtual ~CV_Action_Morphology(){}
		CV_Action_Morphology() : _ksize(cv::Size(3, 3)), _morphShape(cv::MORPH_RECT){}
		CV_Action_Morphology(const cv::Size& ksize,
			int morphShape) : _ksize(ksize), _morphShape(morphShape){}
	public:
		cv::Size _ksize;
		int _morphShape;
		int _iterations;
	};
}