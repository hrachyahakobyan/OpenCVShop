#include "stdafx.h"
#include "CVActionGridView.h"
#include "CV_Action_Grid.h"

CVActionGridView::CVActionGridView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src) :
CVActionView(parent, std::move(action), src)
{
	ui.setupUi(this);
	ui.graphicsView->setScene(_imageScene.get());
	core::CV_Action_Grid* gridAction = dynamic_cast<core::CV_Action_Grid*>(_action.get());
	ui.angleSpinBox->setValue(gridAction->_angle);
	ui.distanceSpinBox->setValue(gridAction->_dist);
	ui.widthSpinBox->setValue(gridAction->_line_width);
	ui.offsetXSlider->setValue(0);
	ui.offsetYSlider->setValue(0);
}

CVActionGridView::~CVActionGridView()
{

}

void CVActionGridView::on_distanceSpinBox_valueChanged(QString)
{
	dynamic_cast<core::CV_Action_Grid*>(_action.get())->_dist = ui.distanceSpinBox->value();
	if (ui.automaticUpdateCheckBox->isChecked()) update();
}

void CVActionGridView::on_angleSpinBox_valueChanged(QString)
{
	dynamic_cast<core::CV_Action_Grid*>(_action.get())->_angle = ui.angleSpinBox->value();
	if (ui.automaticUpdateCheckBox->isChecked()) update();
}

void CVActionGridView::on_widthSpinBox_valueChanged(QString)
{
	dynamic_cast<core::CV_Action_Grid*>(_action.get())->_line_width = ui.widthSpinBox->value();
	if (ui.automaticUpdateCheckBox->isChecked()) update();
}

void CVActionGridView::on_offsetXSlider_valueChanged()
{
	dynamic_cast<core::CV_Action_Grid*>(_action.get())->_offset_x = ((ui.offsetXSlider->value() - ui.offsetXSlider->minimum()) / double(ui.offsetXSlider->maximum() - ui.offsetXSlider->minimum()));
	if (ui.automaticUpdateCheckBox->isChecked()) update();
}

void CVActionGridView::on_offsetYSlider_valueChanged()
{
	dynamic_cast<core::CV_Action_Grid*>(_action.get())->_offset_y = ((ui.offsetYSlider->value() - ui.offsetYSlider->minimum()) / double(ui.offsetYSlider->maximum() - ui.offsetYSlider->minimum()));
	if (ui.automaticUpdateCheckBox->isChecked()) update();
}

void CVActionGridView::update()
{
	CVActionView::update();
	ui.graphicsView->setScene(_imageScene.get());
}

