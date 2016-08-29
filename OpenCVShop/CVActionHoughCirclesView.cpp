#include "stdafx.h"
#include "CVActionHoughCirclesView.h"
#include "CV_Action_HoughCircles.h"

CVActionHoughCirclesView::CVActionHoughCirclesView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper) :
CVActionView(parent, std::move(wrapper))
{
	ui.setupUi(this);
	ui.graphicsView->setScene(_imageScene.get());
	_houghAction = dynamic_cast<core::CV_Action_HoughCircles*>(_actionWrapper->_action.get());
	assert(_houghAction != NULL);
	ui.dpComboBox->setCurrentIndex(_houghAction->_dp - 1);
	ui.minDistSpinBox->setValue(_houghAction->_minDist);
	ui.param1SpinBox->setValue(_houghAction->_param1);
	ui.param2SpinBox->setValue(_houghAction->_param2);
	ui.minRadSpinBox->setValue(_houghAction->_minRad);
	ui.maxRadSpinBox->setValue(_houghAction->_maxRad);
}

CVActionHoughCirclesView::~CVActionHoughCirclesView()
{

}

void CVActionHoughCirclesView::on_dpComboBox_currentIndexChanged(int)
{
	_houghAction->_dp = ui.dpComboBox->currentIndex() + 1;
}

void CVActionHoughCirclesView::on_minDistSpinBox_valueChanged(QString)
{
	_houghAction->_minDist = ui.minDistSpinBox->value();
}

void CVActionHoughCirclesView::on_param1SpinBox_valueChanged(QString)
{
	_houghAction->_param1 = ui.param1SpinBox->value();
}

void CVActionHoughCirclesView::on_param2SpinBox_valueChanged(QString)
{
	_houghAction->_param2 = ui.param2SpinBox->value();
}

void CVActionHoughCirclesView::on_minRadSpinBox_valueChanged(QString)
{
	_houghAction->_minRad = ui.minRadSpinBox->value();
}

void CVActionHoughCirclesView::on_maxRadSpinBox_valueChanged(QString)
{
	_houghAction->_maxRad = ui.maxRadSpinBox->value();
}

void CVActionHoughCirclesView::update()
{
	CVActionView::update();
	ui.graphicsView->setScene(_imageScene.get());
}