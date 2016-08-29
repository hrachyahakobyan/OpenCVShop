#include "stdafx.h"
#include "CV_Action_Factory.h"
#include "CV_Action_Gaussian_Blur.h"
#include "CV_Action_Morphology_Ex.h"
#include "CV_Action_Median_Blur.h"
#include "CV_Action_Bilateral_Blur.h"
#include "CV_Action_Dilate.h"
#include "CV_Action_Erode.h"
#include "CV_Action_Resize.h"
#include "CV_Action_Adaptive_Threshold.h"
#include "CV_Action_Threshold.h"
#include "CV_Action_CvtColor.h"
#include "CV_Action_Grid.h"
#include "CV_Action_EqHist.h"
#include "CV_Action_HoughCircles.h"
#include "CV_Action_Rotate.h"

namespace core{
	CV_Action_Factory::CV_Action_Factory()
	{
		Register<CV_Action_Gaussian_Blur>(CV_Action_Type::GaussianBlur);
		Register<CV_Action_Morphology_Ex>(CV_Action_Type::ExMorphology);
		Register<CV_Action_Dilate>(CV_Action_Type::Dilate);
		Register<CV_Action_Erode>(CV_Action_Type::Erode);
		Register<CV_Action_Median_Blur>(CV_Action_Type::MedianBlur);
		Register<CV_Action_Bilateral_Blur>(CV_Action_Type::BilateralBlur);
		Register<CV_Action_Resize>(CV_Action_Type::Resize);
		Register<CV_Action_Adaptive_Threshold>(CV_Action_Type::AdaptiveThreshold);
		Register<CV_Action_Threshold>(CV_Action_Type::Threshold);
		Register<CV_Action_CvtColor>(CV_Action_Type::CvtColor);
		Register<CV_Action_Grid>(CV_Action_Type::Grid);
		Register<CV_Action_EqHist>(CV_Action_Type::EqHist);
		Register<CV_Action_HoughCircles>(CV_Action_Type::HoughCicles);
		Register<CV_Action_Rotate>(CV_Action_Type::Rotate);
	}

	std::unique_ptr<CV_Action_Base> CV_Action_Factory::cv_action(CV_Action_Type type)
	{
		std::unordered_map<CV_Action_Type, PCreateFunc>::iterator it = _func_map.find(type);
		return std::unique_ptr<CV_Action_Base>(it->second());
	}
}