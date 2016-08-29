#include "stdafx.h"
#include "CVActionShapesView.h"
#include "CV_Action_Shapes.h"

CVActionShapesView::CVActionShapesView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper) :
CVActionView(parent, std::move(wrapper))
{
	ui.setupUi(this);
	ui.graphicsView->setScene(_imageScene.get());
	_shapesAction = dynamic_cast<core::CV_Action_Shapes*>(_actionWrapper->_action.get());
	assert(_shapesAction != NULL);
	ui.widthSpinBox->setValue(_shapesAction->_width);
	ui.maxCosineSpinBox->setValue(_shapesAction->_maxCos);
	ui.minAreaSpinBox->setValue(_shapesAction->_minArea);
	ui.convexCheckBox->setChecked(_shapesAction->_convex);
	ui.shapeComboBox->setCurrentIndex(_shapesAction->_shapeType);
	ui.procComboBox->setCurrentIndex(_shapesAction->_procType);
}

CVActionShapesView::~CVActionShapesView()
{

}

void CVActionShapesView::update()
{
	CVActionView::update();
	ui.graphicsView->setScene(_imageScene.get());
}

void CVActionShapesView::reset()
{
	CVActionView::reset();
	ui.graphicsView->setScene(_imageScene.get());
}

void CVActionShapesView::on_widthSpinBox_valueChanged(QString)
{
	_shapesAction->_width = ui.widthSpinBox->value();
}

void CVActionShapesView::on_minAreaSpinBox_valueChanged(QString)
{
	_shapesAction->_minArea = ui.minAreaSpinBox->value();
}

void CVActionShapesView::on_maxCosineSpinBox_valueChanged(QString)
{
	_shapesAction->_maxCos = ui.maxCosineSpinBox->value();
}

void CVActionShapesView::on_convexCheckBox_stateChanged(int)
{
	_shapesAction->_convex = ui.convexCheckBox->isChecked();
}

void CVActionShapesView::on_procComboBox_currentIndexChanged(int)
{
	_shapesAction->_procType = core::CVShapePreprocType(ui.procComboBox->currentIndex());
}

void CVActionShapesView::on_shapeComboBox_currentIndexChanged(int)
{
	_shapesAction->_shapeType = core::CVShapeType(ui.shapeComboBox->currentIndex());
}