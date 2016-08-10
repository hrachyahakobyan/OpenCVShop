#include "stdafx.h"
#include "CVActionDilateView.h"
#include "CV_Action_Dilate.h"

CVActionDilateView::CVActionDilateView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src) :
CVActionView(parent, std::move(action), src)
{
	ui.setupUi(this);
	ui.graphicsView->setScene(_imageScene.get());
	core::CV_Action_Dilate* dilateAction = dynamic_cast<core::CV_Action_Dilate*>(_action.get());
	ui.kernelSizeSlider->setValue(dilateAction->_ksize.height);
	ui.morphShapeComboBox->setCurrentIndex(dilateAction->_morphShape);
}

CVActionDilateView::~CVActionDilateView()
{
}

void CVActionDilateView::update()
{
	CVActionView::update();
	ui.graphicsView->setScene(_imageScene.get());
}


void CVActionDilateView::on_kernelSizeSlider_valueChanged()
{
	int value = ui.kernelSizeSlider->value();
	if (value % 2 == 0) value++;
	dynamic_cast<core::CV_Action_Dilate*>(_action.get())->_ksize = cv::Size(value, value);
	update();
}

void CVActionDilateView::on_morphShapeComboBox_currentIndexChanged(int)
{
	dynamic_cast<core::CV_Action_Dilate*>(_action.get())->_morphShape = ui.morphShapeComboBox->currentIndex();
	update();
}