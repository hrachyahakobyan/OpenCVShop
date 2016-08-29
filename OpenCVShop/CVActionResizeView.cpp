#include "stdafx.h"
#include "CVActionResizeView.h"
#include "CV_Action_Resize.h"

CVActionResizeView::CVActionResizeView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper) :
CVActionView(parent, std::move(wrapper))
{
	ui.setupUi(this);
	_resizeAction = dynamic_cast<core::CV_Action_Resize*>(_actionWrapper->_action.get());
	ui.heightSpinBox->setValue(wrapper->source().mat().rows);
	ui.widthSpinBox->setValue(wrapper->source().mat().cols);
}

CVActionResizeView::~CVActionResizeView()
{
}

void CVActionResizeView::on_interFlagComboBox_currentIndexChanged(int)
{
	_resizeAction->_interFlag = ui.interFlagComboBox->currentIndex();
}

void CVActionResizeView::on_heightSpinBox_valueChanged(QString)
{
	_resizeAction->_size.height = ui.heightSpinBox->value();
}

void CVActionResizeView::on_widthSpinBox_valueChanged(QString)
{
	_resizeAction->_size.width = ui.widthSpinBox->value();
}	

void CVActionResizeView::on_okButton_clicked()
{
	update();
	CVActionView::on_okButton_clicked();
}

