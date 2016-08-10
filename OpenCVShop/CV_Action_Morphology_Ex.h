#pragma once
#include "CV_Action_Morphology.h"

namespace core{

	class CV_Action_Morphology_Ex : public CV_Action_CloneAble<CV_Action_Morphology, CV_Action_Morphology_Ex>
	{
	public:
		CV_Action_Morphology_Ex() : CV_Action_Morphology(), _morphType(cv::MorphTypes::MORPH_ERODE){}
		CV_Action_Morphology_Ex(const cv::Size& ksize, int morphShape, int morphType) : CV_Action_Morphology(ksize, morphShape), _morphType(morphType){}
		void operator()(cv::InputArray input, cv::OutputArray output) const;
		std::string description() const;
	public:
		int _morphType;
	};
}

