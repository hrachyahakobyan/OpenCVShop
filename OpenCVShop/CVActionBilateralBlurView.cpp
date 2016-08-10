#include "stdafx.h"
#include "CVActionBilateralBlurView.h"
#include "CV_Action_Bilateral_Blur.h"

CVActionBilateralBlurView::CVActionBilateralBlurView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src) :
CVActionView(parent, std::move(action), src)
{
	ui.setupUi(this);
	ui.graphicsView->setScene(_imageScene.get());
	core::CV_Action_Bilateral_Blur* blurAction = dynamic_cast<core::CV_Action_Bilateral_Blur*>(_action.get());
	ui.dSpinBox->setValue(blurAction->_d);
	ui.sigmaColorSpinBox->setValue(blurAction->_sigmaColor);
	ui.sigmaSpaceSpinBox->setValue(blurAction->_sigmaSpace);
}

CVActionBilateralBlurView::~CVActionBilateralBlurView()
{
}

void CVActionBilateralBlurView::update()
{
	CVActionView::update();
	ui.graphicsView->setScene(_imageScene.get());
}

void CVActionBilateralBlurView::on_dSpinBox_valueChanged(QString)
{
	dynamic_cast<core::CV_Action_Bilateral_Blur*>(_action.get())->_d = ui.dSpinBox->value();
	update();
}

void CVActionBilateralBlurView::on_sigmaColorSpinBox_valueChanged(QString)
{
	dynamic_cast<core::CV_Action_Bilateral_Blur*>(_action.get())->_sigmaColor = ui.sigmaColorSpinBox->value();
	update();
}

void CVActionBilateralBlurView::on_sigmaSpaceSpinBox_valueChanged(QString)
{
	dynamic_cast<core::CV_Action_Bilateral_Blur*>(_action.get())->_sigmaSpace = ui.sigmaSpaceSpinBox->value();
	update();
}
