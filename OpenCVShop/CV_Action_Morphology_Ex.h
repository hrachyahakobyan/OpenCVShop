#pragma once
#include "CV_Action_CloneAble.h"

namespace core{

	class CV_Action_Morphology_Ex : public CV_Action_CloneAble<CV_Action_Base, CV_Action_Morphology_Ex>
	{
	public:
		CV_Action_Morphology_Ex() : op(cv::MorphTypes::MORPH_OPEN), kernel(cv::getStructuringElement(cv::MORPH_RECT, cv::Size(1, 1))),
			anchor(cv::Point(-1, -1)), iterations(1), borderType(cv::BORDER_CONSTANT), borderValue(cv::morphologyDefaultBorderValue()){}
		CV_Action_Morphology_Ex(int op, const cv::Mat& kernel, cv::Point anchor = cv::Point(-1, -1), 
			                    int iterations = 1, int borderType = cv::BORDER_CONSTANT, const cv::Scalar& borderValue = cv::morphologyDefaultBorderValue()) :
		    op(op), kernel(kernel.clone()), anchor(anchor), iterations(iterations), borderType(borderType), borderValue(borderValue){}
		void operator()(cv::InputArray input, cv::OutputArray output) const;
		std::string description() const;
	public:
	    int op;
	    cv::Mat kernel;
	    cv::Point anchor;
	    int iterations;
	    int borderType;
	    cv::Scalar borderValue;
	};
}

