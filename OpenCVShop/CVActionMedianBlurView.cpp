#include "stdafx.h"
#include "CVActionMedianBlurView.h"
#include "CV_Action_Median_Blur.h"

CVActionMedianBlurView::CVActionMedianBlurView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src) :
CVActionView(parent, std::move(action), src)
{
	ui.setupUi(this);
	ui.graphicsView->setScene(_imageScene.get());
	core::CV_Action_Median_Blur* blurAction = dynamic_cast<core::CV_Action_Median_Blur*>(_action.get());
	ui.kernelSizeSlider->setValue(blurAction->_ksize);
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
	dynamic_cast<core::CV_Action_Median_Blur*>(_action.get())->_ksize = value;
	update();
}