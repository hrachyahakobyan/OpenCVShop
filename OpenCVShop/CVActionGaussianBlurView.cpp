#include "stdafx.h"
#include "CVActionGaussianBlurView.h"
#include "CV_Action_Gaussian_Blur.h"

CVActionGaussianBlurView::CVActionGaussianBlurView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper) :
CVActionView(parent, std::move(wrapper))
{
	ui.setupUi(this);
	ui.graphicsView->setScene(_imageScene.get());
	_blurAction = dynamic_cast<core::CV_Action_Gaussian_Blur*>(_actionWrapper->_action.get());
	assert(_blurAction != NULL);
	ui.sigmaXSpinBox->setValue(_blurAction->_sigma_x);
	ui.kernelSizeSlider->setValue(_blurAction->_ksize.height);
}

CVActionGaussianBlurView::~CVActionGaussianBlurView()
{
}

void CVActionGaussianBlurView::update()
{
	CVActionView::update();
	ui.graphicsView->setScene(_imageScene.get());
}

void CVActionGaussianBlurView::on_sigmaXSpinBox_valueChanged(QString)
{
	_blurAction->_sigma_x = ui.sigmaXSpinBox->value();
}

void CVActionGaussianBlurView::on_kernelSizeSlider_valueChanged()
{
	int value = ui.kernelSizeSlider->value();
	if (value % 2 == 0) value++;
	_blurAction->_ksize = cv::Size(value, value);
}
