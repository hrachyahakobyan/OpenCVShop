#include "stdafx.h"
#include "CVActionThresholdView.h"
#include "CV_Action_Threshold.h"

CVActionThresholdView::CVActionThresholdView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src) :
CVActionView(parent, std::move(action), src)
{
	ui.setupUi(this);
	ui.graphicsView->setScene(_imageScene.get());
	core::CV_Action_Threshold* threshAction = dynamic_cast<core::CV_Action_Threshold*>(_action.get());
	ui.maxValueSpinBox->setValue(threshAction->_maxValue);
	ui.thresholdTypeComboBox->setCurrentIndex(threshAction->_threshType);
	ui.threshSpinBox->setValue(threshAction->_thresh);
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
	dynamic_cast<core::CV_Action_Threshold*>(_action.get())->_maxValue = ui.maxValueSpinBox->value();
}

void CVActionThresholdView::on_threshSpinBox_valueChanged(QString)
{
	dynamic_cast<core::CV_Action_Threshold*>(_action.get())->_thresh = ui.threshSpinBox->value();
}

void CVActionThresholdView::on_thresholdTypeComboBox_currentIndexChanged(int)
{
	dynamic_cast<core::CV_Action_Threshold*>(_action.get())->_threshType = threshIndexToThresh(ui.thresholdTypeComboBox->currentIndex());
}
