#include "stdafx.h"
#include "CVActionViewFactory.h"
#include "CVActionGaussianBlurView.h"
#include "CVActionMedianBlurView.h"
#include "CV_Action_Factory.h"
#include "CVActionBilateralBlurView.h"


CVActionViewFactory::CVActionViewFactory()
{
	Register<CVActionMedianBlurView>(core::CV_Action_Type::MedianBlur);
	Register<CVActionGaussianBlurView>(core::CV_Action_Type::GaussianBlur);
	Register<CVActionBilateralBlurView>(core::CV_Action_Type::BilateralBlur);
}

std::unique_ptr<CVActionView> CVActionViewFactory::cv_action_view(core::CV_Action_Type type, QWidget* parent, const QImage& src)
{
	auto action = core::CV_Action_Factory::sharedFactory().cv_action(type);
	auto iter = _func_map.find(type);
	auto viewptr = std::unique_ptr<CVActionView>(iter->second(parent, std::move(action), src));
	return viewptr;
}