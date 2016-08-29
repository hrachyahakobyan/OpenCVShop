#include "stdafx.h"
#include "CVActionRotateView.h"
#include "CV_Action_Rotate.h"

CVActionRotateView::CVActionRotateView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper) :
CVActionView(parent, std::move(wrapper))
{
	ui.setupUi(this);
	ui.graphicsView->setScene(_imageScene.get());
	_rotateAction = dynamic_cast<core::CV_Action_Rotate*>(_actionWrapper->_action.get());
	assert(_rotateAction != NULL);
	ui.angleSpinBox->setValue(_rotateAction->_angle);
}

CVActionRotateView::~CVActionRotateView()
{

}

void CVActionRotateView::update()
{
	CVActionView::update();
	ui.graphicsView->setScene(_imageScene.get());
}

void CVActionRotateView::reset()
{
	CVActionView::reset();
	ui.graphicsView->setScene(_imageScene.get());
}

void CVActionRotateView::on_angleSpinBox_valueChanged(QString)
{
	_rotateAction->_angle = ui.angleSpinBox->value();
	_rotateAction->_flag = core::CVRotationFlag::RotCustom;
	update();
}

void CVActionRotateView::on_rotCLButton_clicked()
{
	_rotateAction->_flag = core::CVRotationFlag::RotCL;
	update();
}

void CVActionRotateView::on_rotCCLButton_clicked()
{
	_rotateAction->_flag = core::CVRotationFlag::RotCCL;
	update();
}

void CVActionRotateView::on_rot180Button_clicked()
{
	_rotateAction->_flag = core::CVRotationFlag::Rot180;
	update();
}


