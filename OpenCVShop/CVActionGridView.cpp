#include "stdafx.h"
#include "CVActionGridView.h"
#include "CV_Action_Grid.h"

CVActionGridView::CVActionGridView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper) :
CVActionView(parent, std::move(wrapper))
{
	ui.setupUi(this);
	ui.graphicsView->setScene(_imageScene.get());
	_gridAction = dynamic_cast<core::CV_Action_Grid*>(_actionWrapper->_action.get());
	assert(_gridAction != NULL);
	ui.angleSpinBox->setValue(_gridAction->_angle);
	ui.distanceSpinBox->setValue(_gridAction->_dist);
	ui.widthSpinBox->setValue(_gridAction->_line_width);
	ui.offsetXSlider->setValue(0);
	ui.offsetYSlider->setValue(0);
}

CVActionGridView::~CVActionGridView()
{

}

void CVActionGridView::on_distanceSpinBox_valueChanged(QString)
{
	_gridAction->_dist = ui.distanceSpinBox->value();
	if (ui.automaticUpdateCheckBox->isChecked()) update();
}

void CVActionGridView::on_angleSpinBox_valueChanged(QString)
{
	_gridAction->_angle = ui.angleSpinBox->value();
	if (ui.automaticUpdateCheckBox->isChecked()) update();
}

void CVActionGridView::on_widthSpinBox_valueChanged(QString)
{
	_gridAction->_line_width = ui.widthSpinBox->value();
	if (ui.automaticUpdateCheckBox->isChecked()) update();
}

void CVActionGridView::on_offsetXSlider_valueChanged()
{
	_gridAction->_offset_x = ((ui.offsetXSlider->value() - ui.offsetXSlider->minimum()) / double(ui.offsetXSlider->maximum() - ui.offsetXSlider->minimum()));
	if (ui.automaticUpdateCheckBox->isChecked()) update();
}

void CVActionGridView::on_offsetYSlider_valueChanged()
{
	_gridAction->_offset_y = ((ui.offsetYSlider->value() - ui.offsetYSlider->minimum()) / double(ui.offsetYSlider->maximum() - ui.offsetYSlider->minimum()));
	if (ui.automaticUpdateCheckBox->isChecked()) update();
}

void CVActionGridView::update()
{
	CVActionView::update();
	ui.graphicsView->setScene(_imageScene.get());
}

