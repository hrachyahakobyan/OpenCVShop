#include "stdafx.h"
#include "CVActionCvtColorView.h"
#include "CV_Action_CvtColor.h"
// 0 - bgr - 3
// 1 - bgra - 4
// 2 - grayscale - 1

int channelToInt(int channels)
{
	switch (channels){
	case 1:
		return 2;
		break;
	case 3:
		return 0;
		break;
	case 4:
		return 1;
			break;
	default:
		return 0;
		break;
	}
}

int intToChannel(int index)
{
	switch (index){
	case 0:
		return 3;
		break;
	case 1:
		return 4;
		break;
	case 2:
		return 1;
		break;
	default:
		return 0;
		break;
	}
}


int colors[3][3] = {{CV_BGR2GRAY, CV_BGR2BGRA, CV_BGR2GRAY},
					{CV_BGRA2BGR, CV_BGRA2GRAY, CV_BGRA2GRAY},
					{CV_GRAY2BGR, CV_GRAY2BGRA, CV_GRAY2BGR}
					};

CVActionCvtColorView::CVActionCvtColorView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src) :
CVActionView(parent, std::move(action), src)
{
	ui.setupUi(this);
	qDebug() << src.format() << '\n';
	this->sourceChannelIndex = 0;
	if (src.isGrayscale() || src.format() == QImage::Format::Format_Alpha8 || src.format() == QImage::Format::Format_Indexed8)
		this->sourceChannelIndex = 2;
	else if (src.format() == QImage::Format::Format_RGB32 || src.format() == QImage::Format::Format_ARGB32 || src.format() == QImage::Format::Format_ARGB32_Premultiplied)
		this->sourceChannelIndex = 1;
	ui.sourceLineEdit->setText(ui.targetComboBox->itemText(this->sourceChannelIndex));
}

CVActionCvtColorView::~CVActionCvtColorView()
{
}

void CVActionCvtColorView::on_targetComboBox_currentIndexChanged(int)
{
	int index = ui.targetComboBox->currentIndex();
	int colorCode = colors[this->sourceChannelIndex][index];
	dynamic_cast<core::CV_Action_CvtColor*>(_action.get())->_code = colorCode;
	dynamic_cast<core::CV_Action_CvtColor*>(_action.get())->_dstCn = intToChannel(index);
}
