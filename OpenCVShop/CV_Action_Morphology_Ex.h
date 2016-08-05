#pragma once
#include "CV_Action_CloneAble.h"

namespace core{

	class CV_Action_Morphology_Ex : public CV_Action_CloneAble<CV_Action_Base, CV_Action_Morphology_Ex>
	{
	public:
		CV_Action_Morphology_Ex(int op, const cv::Mat& kernel, cv::Point anchor = cv::Point(-1, -1), 
			                    int iterations = 1, int borderType = cv::BORDER_CONSTANT, const cv::Scalar& borderValue = cv::morphologyDefaultBorderValue()) :
		    op(op), kernel(kernel.clone()), anchor(anchor), iterations(iterations), borderType(borderType), borderValue(borderValue){}
		void operator()(cv::InputArray input, cv::OutputArray output) const;
		std::string description() const;
	public:
		const int op;
		const cv::Mat kernel;
		const cv::Point anchor;
		const int iterations;
		const int borderType;
		const cv::Scalar borderValue;
	};
}

