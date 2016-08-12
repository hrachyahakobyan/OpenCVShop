#include "stdafx.h"
#include "CVActionResizeView.h"
#include "CV_Action_Resize.h"

CVActionResizeView::CVActionResizeView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src) :
CVActionView(parent, std::move(action), src)
{
	ui.setupUi(this);
	core::CV_Action_Resize* ResizeAction = dynamic_cast<core::CV_Action_Resize*>(_action.get());
	ui.heightSpinBox->setValue(src.height());
	ui.widthSpinBox->setValue(src.width());
}

CVActionResizeView::~CVActionResizeView()
{
}

void CVActionResizeView::on_interFlagComboBox_currentIndexChanged(int)
{
	dynamic_cast<core::CV_Action_Resize*>(_action.get())->_interFlag = ui.interFlagComboBox->currentIndex();
}

void CVActionResizeView::on_heightSpinBox_valueChanged(QString)
{
	dynamic_cast<core::CV_Action_Resize*>(_action.get())->_size.height = ui.heightSpinBox->value();
}

void CVActionResizeView::on_widthSpinBox_valueChanged(QString)
{
	dynamic_cast<core::CV_Action_Resize*>(_action.get())->_size.width = ui.widthSpinBox->value();
}	

void CVActionResizeView::on_okButton_clicked()
{
	update();
	CVActionView::on_okButton_clicked();
}

