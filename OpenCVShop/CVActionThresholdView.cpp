#include "stdafx.h"
#include "CVActionThresholdView.h"
#include "CV_Action_Threshold.h"

CVActionThresholdView::CVActionThresholdView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper) :
CVActionView(parent, std::move(wrapper))
{
	ui.setupUi(this);
	ui.graphicsView->setScene(_imageScene.get());
	_threshAction = dynamic_cast<core::CV_Action_Threshold*>(_actionWrapper->_action.get());
	assert(_threshAction != NULL);
	ui.maxValueSpinBox->setValue(_threshAction->_maxValue);
	ui.thresholdTypeComboBox->setCurrentIndex(_threshAction->_threshType);
	ui.threshSpinBox->setValue(_threshAction->_thresh);
}

CVActionThresholdView::~CVActionThresholdView()
{

}

int CVActionThresholdView::threshIndexToThresh(int index) const
{
	if (index <= 4) return index;
	else if (index == 5) return 7;
	else if (index == 6) return 8;
	else return 16;
}

void CVActionThresholdView::update()
{
	CVActionView::update();
	ui.graphicsView->setScene(_imageScene.get());
}

void CVActionThresholdView::on_maxValueSpinBox_valueChanged(QString)
{
	_threshAction->_maxValue = ui.maxValueSpinBox->value();
}

void CVActionThresholdView::on_threshSpinBox_valueChanged(QString)
{
	_threshAction->_thresh = ui.threshSpinBox->value();
}

void CVActionThresholdView::on_thresholdTypeComboBox_currentIndexChanged(int)
{
	_threshAction->_threshType = threshIndexToThresh(ui.thresholdTypeComboBox->currentIndex());
}
