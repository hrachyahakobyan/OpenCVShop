#include "stdafx.h"
#include "CVActionGaussianBlurView.h"
#include "CV_Action_Gaussian_Blur.h"

CVActionGaussianBlurView::CVActionGaussianBlurView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src) :
CVActionView(parent, std::move(action), src)
{
	ui.setupUi(this);
	ui.graphicsView->setScene(_imageScene.get());
	core::CV_Action_Gaussian_Blur* blurAction = dynamic_cast<core::CV_Action_Gaussian_Blur*>(_action.get());
	ui.sigmaXSpinBox->setValue(blurAction->_sigma_x);
	ui.kernelSizeSlider->setValue(blurAction->_ksize.height);
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
	dynamic_cast<core::CV_Action_Gaussian_Blur*>(_action.get())->_sigma_x = ui.sigmaXSpinBox->value();
}

void CVActionGaussianBlurView::on_kernelSizeSlider_valueChanged()
{
	int value = ui.kernelSizeSlider->value();
	if (value % 2 == 0) value++;
	dynamic_cast<core::CV_Action_Gaussian_Blur*>(_action.get())->_ksize = cv::Size(value, value);
}
