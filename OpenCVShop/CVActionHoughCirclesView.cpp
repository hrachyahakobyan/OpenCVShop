#include "stdafx.h"
#include "CVActionHoughCirclesView.h"
#include "CV_Action_HoughCircles.h"

CVActionHoughCirclesView::CVActionHoughCirclesView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src) :
CVActionView(parent, std::move(action), src)
{
	ui.setupUi(this);
	ui.graphicsView->setScene(_imageScene.get());
	houghAction = dynamic_cast<core::CV_Action_HoughCircles*>(_action.get());
	assert(houghAction != NULL);
	ui.dpComboBox->setCurrentIndex(houghAction->_dp - 1);
	ui.minDistSpinBox->setValue(houghAction->_minDist);
	ui.param1SpinBox->setValue(houghAction->_param1);
	ui.param2SpinBox->setValue(houghAction->_param2);
	ui.minRadSpinBox->setValue(houghAction->_minRad);
	ui.maxRadSpinBox->setValue(houghAction->_maxRad);
}

CVActionHoughCirclesView::~CVActionHoughCirclesView()
{

}

void CVActionHoughCirclesView::on_dpComboBox_currentIndexChanged(int)
{
	houghAction->_dp = ui.dpComboBox->currentIndex() + 1;
}

void CVActionHoughCirclesView::on_minDistSpinBox_valueChanged(QString)
{
	houghAction->_minDist = ui.minDistSpinBox->value();
}

void CVActionHoughCirclesView::on_param1SpinBox_valueChanged(QString)
{
	houghAction->_param1 = ui.param1SpinBox->value();
}

void CVActionHoughCirclesView::on_param2SpinBox_valueChanged(QString)
{
	houghAction->_param2 = ui.param2SpinBox->value();
}

void CVActionHoughCirclesView::on_minRadSpinBox_valueChanged(QString)
{
	houghAction->_minRad = ui.minRadSpinBox->value();
}

void CVActionHoughCirclesView::on_maxRadSpinBox_valueChanged(QString)
{
	houghAction->_maxRad = ui.maxRadSpinBox->value();
}

void CVActionHoughCirclesView::update()
{
	CVActionView::update();
	ui.graphicsView->setScene(_imageScene.get());
}