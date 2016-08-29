#include "stdafx.h"
#include "CVActionMedianBlurView.h"
#include "CV_Action_Median_Blur.h"

CVActionMedianBlurView::CVActionMedianBlurView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper) :
CVActionView(parent, std::move(wrapper))
{
	ui.setupUi(this);
	ui.graphicsView->setScene(_imageScene.get());
	_medianAction = dynamic_cast<core::CV_Action_Median_Blur*>(_actionWrapper->_action.get());
	assert(_medianAction != NULL);
	ui.kernelSizeSlider->setValue(_medianAction->_ksize);
}

CVActionMedianBlurView::~CVActionMedianBlurView()
{
}

void CVActionMedianBlurView::update()
{
	CVActionView::update();
	ui.graphicsView->setScene(_imageScene.get());
}

void CVActionMedianBlurView::on_kernelSizeSlider_valueChanged()
{
	int value = ui.kernelSizeSlider->value();
	if (value % 2 == 0) value++;
	_medianAction->_ksize = value;
}