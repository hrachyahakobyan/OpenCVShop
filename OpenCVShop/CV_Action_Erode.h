#pragma once
#include "CV_Action_Morphology.h"

namespace core{
	class CV_Action_Erode : public CV_Action_CloneAble<CV_Action_Morphology, CV_Action_Erode>
	{
	public:
		using CV_Action_Morphology::CV_Action_Morphology;
		void operator()(cv::InputArray input, cv::OutputArray output) const;
		std::string description() const;
	};
}