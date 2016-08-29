#include "stdafx.h"
#include "CVActionCvtColorView.h"
#include "CV_Action_CvtColor.h"
#include "CV_Colorspaces.h"

CVActionCvtColorView::CVActionCvtColorView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper) :
CVActionView(parent, std::move(wrapper))
{
	ui.setupUi(this);
	_cvtAction = dynamic_cast<core::CV_Action_CvtColor*>(_actionWrapper->_action.get());
	assert(_cvtAction != NULL);
	ui.sourceLineEdit->setText(ui.targetComboBox->itemText(_actionWrapper->source().colorspace()));
}

CVActionCvtColorView::~CVActionCvtColorView()
{
}

void CVActionCvtColorView::on_targetComboBox_currentIndexChanged(int)
{
	core::CV_Colorspace targetColorspace = core::CV_Colorspace(ui.targetComboBox->currentIndex());
	core::CV_Colorspace sourceColorspace = _actionWrapper->result().colorspace();
	if (targetColorspace != sourceColorspace)
	{
		cv::ColorConversionCodes code = core::conversionCodeForColorspaces(sourceColorspace, targetColorspace);
		_cvtAction->_code = code;
	}
}
