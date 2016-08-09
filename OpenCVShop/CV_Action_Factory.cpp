#include "stdafx.h"
#include "CV_Action_Factory.h"
#include "CV_Action_Gaussian_Blur.h"
#include "CV_Action_Morphology_Ex.h"

namespace core{
	CV_Action_Factory::CV_Action_Factory()
	{
		Register<CV_Action_Gaussian_Blur>(CV_Action_Type::GaussianBlur);
		Register<CV_Action_Morphology_Ex>(CV_Action_Type::ExMorphology);
	}

	std::unique_ptr<CV_Action_Base> CV_Action_Factory::cv_action(CV_Action_Type type)
	{
		std::unordered_map<CV_Action_Type, PCreateFunc>::iterator it = _func_map.find(type);
		return std::unique_ptr<CV_Action_Base>(it->second());
	}
}