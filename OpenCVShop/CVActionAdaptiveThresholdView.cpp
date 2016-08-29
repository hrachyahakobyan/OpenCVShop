#include "stdafx.h"
#include "CVActionAdaptiveThresholdView.h"
#include "CV_Action_Adaptive_Threshold.h"

CVActionAdaptiveThresholdView::CVActionAdaptiveThresholdView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper) :
CVActionView(parent, std::move(wrapper))
{
	ui.setupUi(this);
	ui.graphicsView->setScene(_imageScene.get());
	_threshAction = dynamic_cast<core::CV_Action_Adaptive_Threshold*>(_actionWrapper->_action.get());
	assert(_threshAction != NULL);
	ui.cSpinBox->setValue(_threshAction->_c);
	ui.blockSizeSpinBox->setValue(_threshAction->_blockSize);
	ui.maxValueSpinBox->setValue(_threshAction->_maxValue);
	ui.adaptiveThresholdTypeComboBox->setCurrentIndex(_threshAction->_adaptiveMethod);
	ui.thresholdTypeComboBox->setCurrentIndex(_threshAction->_threshType);
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
	_threshAction->_maxValue = ui.maxValueSpinBox->value();
}

void CVActionAdaptiveThresholdView::on_cSpinBox_valueChanged(QString)
{
	_threshAction->_c = ui.cSpinBox->value();
}

void CVActionAdaptiveThresholdView::on_blockSizeSpinBox_valueChanged(QString)
{
	_threshAction->_blockSize = ui.blockSizeSpinBox->value();
}

void CVActionAdaptiveThresholdView::on_thresholdTypeComboBox_currentIndexChanged(int)
{
	_threshAction->_threshType = ui.thresholdTypeComboBox->currentIndex();
}

void CVActionAdaptiveThresholdView::on_adaptiveThresholdTypeComboBox_currentIndexChanged(int)
{
	_threshAction->_adaptiveMethod = ui.adaptiveThresholdTypeComboBox->currentIndex();
}
