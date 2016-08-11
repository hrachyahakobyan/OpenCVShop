#include "stdafx.h"
#include "CVActionAdaptiveThresholdView.h"
#include "CV_Action_Adaptive_Threshold.h"

CVActionAdaptiveThresholdView::CVActionAdaptiveThresholdView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src) :
CVActionView(parent, std::move(action), src)
{
	ui.setupUi(this);
	ui.graphicsView->setScene(_imageScene.get());
	core::CV_Action_Adaptive_Threshold* threshAction = dynamic_cast<core::CV_Action_Adaptive_Threshold*>(_action.get());
	ui.cSpinBox->setValue(threshAction->_c);
	ui.blockSizeSpinBox->setValue(threshAction->_blockSize);
	ui.maxValueSpinBox->setValue(threshAction->_maxValue);
	ui.adaptiveThresholdTypeComboBox->setCurrentIndex(threshAction->_adaptiveMethod);
	ui.thresholdTypeComboBox->setCurrentIndex(threshAction->_threshType);
}

CVActionAdaptiveThresholdView::~CVActionAdaptiveThresholdView()
{

}

void CVActionAdaptiveThresholdView::update()
{
	CVActionView::update();
	ui.graphicsView->setScene(_imageScene.get());
}

void CVActionAdaptiveThresholdView::on_maxValueSpinBox_valueChanged(QString)
{
	dynamic_cast<core::CV_Action_Adaptive_Threshold*>(_action.get())->_maxValue = ui.maxValueSpinBox->value();
}

void CVActionAdaptiveThresholdView::on_cSpinBox_valueChanged(QString)
{
	dynamic_cast<core::CV_Action_Adaptive_Threshold*>(_action.get())->_c = ui.cSpinBox->value();
}

void CVActionAdaptiveThresholdView::on_blockSizeSpinBox_valueChanged(QString)
{
	dynamic_cast<core::CV_Action_Adaptive_Threshold*>(_action.get())->_blockSize = ui.blockSizeSpinBox->value();
}

void CVActionAdaptiveThresholdView::on_thresholdTypeComboBox_currentIndexChanged(int)
{
	dynamic_cast<core::CV_Action_Adaptive_Threshold*>(_action.get())->_threshType = ui.thresholdTypeComboBox->currentIndex();
}

void CVActionAdaptiveThresholdView::on_adaptiveThresholdComboBox_currentIndexChanged(int)
{
	dynamic_cast<core::CV_Action_Adaptive_Threshold*>(_action.get())->_adaptiveMethod = ui.adaptiveThresholdTypeComboBox->currentIndex();
}
