#include "stdafx.h"
#include "CVActionBilateralBlurView.h"
#include "CV_Action_Bilateral_Blur.h"

CVActionBilateralBlurView::CVActionBilateralBlurView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper) :
CVActionView(parent, std::move(wrapper))
{
	ui.setupUi(this);
	ui.graphicsView->setScene(_imageScene.get());
	_blurAction = dynamic_cast<core::CV_Action_Bilateral_Blur*>(_actionWrapper->_action.get());
	assert(_blurAction != NULL);
	ui.dSpinBox->setValue(_blurAction->_d);
	ui.sigmaColorSpinBox->setValue(_blurAction->_sigmaColor);
	ui.sigmaSpaceSpinBox->setValue(_blurAction->_sigmaSpace);
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
	_blurAction->_d = ui.dSpinBox->value();
}

void CVActionBilateralBlurView::on_sigmaColorSpinBox_valueChanged(QString)
{
	_blurAction->_sigmaColor = ui.sigmaColorSpinBox->value();
}

void CVActionBilateralBlurView::on_sigmaSpaceSpinBox_valueChanged(QString)
{
	_blurAction->_sigmaSpace = ui.sigmaSpaceSpinBox->value();
}
