#include "stdafx.h"
#include "CVActionMorphologyView.h"
#include "CV_Action_Morphology.h"
#include "CV_Action_Morphology_Ex.h"

CVActionMorphologyView::CVActionMorphologyView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src) :
CVActionView(parent, std::move(action), src)
{
	ui.setupUi(this);
	ui.graphicsView->setScene(_imageScene.get());
	core::CV_Action_Morphology* MorphologyAction = dynamic_cast<core::CV_Action_Morphology*>(_action.get());
	ui.kernelSizeSpinBox->setValue(MorphologyAction->_ksize.height);
	ui.morphShapeComboBox->setCurrentIndex(MorphologyAction->_morphShape);
	core::CV_Action_Morphology_Ex* exMorphAction = dynamic_cast<core::CV_Action_Morphology_Ex*>(_action.get());
	if (exMorphAction != NULL)
		ui.morphTypeComboBox->setCurrentIndex(exMorphAction->_morphType);
	else
		ui.morphTypeComboBox->setEnabled(false);
}

CVActionMorphologyView::~CVActionMorphologyView()
{
}

void CVActionMorphologyView::update()
{
	CVActionView::update();
	ui.graphicsView->setScene(_imageScene.get());
}


void CVActionMorphologyView::on_kernelSizeSpinBox_valueChanged(QString)
{
	int value = ui.kernelSizeSpinBox->value();
	if (value % 2 == 0) value++;
	dynamic_cast<core::CV_Action_Morphology*>(_action.get())->_ksize = cv::Size(value, value);
}

void CVActionMorphologyView::on_morphShapeComboBox_currentIndexChanged(int)
{
	dynamic_cast<core::CV_Action_Morphology*>(_action.get())->_morphShape = ui.morphShapeComboBox->currentIndex();
}

void CVActionMorphologyView::on_morphTypeComboBox_currentIndexChanged(int)
{
	core::CV_Action_Morphology_Ex* exMorphAction = dynamic_cast<core::CV_Action_Morphology_Ex*>(_action.get());
	exMorphAction->_morphType = ui.morphTypeComboBox->currentIndex();
}
