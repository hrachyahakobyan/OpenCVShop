#pragma once
#include "CV_Action_Morphology.h"

namespace core{
	class CV_Action_Dilate : public CV_Action_CloneAble<CV_Action_Morphology, CV_Action_Dilate>
	{
	public:
		using CV_Action_Morphology::CV_Action_Morphology;
		void operator()(const CV_Image& src, CV_Image& out) const;
		std::string description() const;
	};
}
