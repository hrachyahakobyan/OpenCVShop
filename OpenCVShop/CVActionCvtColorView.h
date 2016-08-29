#ifndef CVACTIONCVTCOLORVIEW_H
#define CVACTIONCVTCOLORVIEW_H

#include "CVActionView.h"
#include "ui_CVActionCvtColorView.h"

namespace core{
	class CV_Action_CvtColor;
}

class CVActionCvtColorView : public CVActionView
{
	Q_OBJECT

public:
	CVActionCvtColorView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper);
	~CVActionCvtColorView();

private:
	Ui::CVActionCvtColorView ui;
	int sourceChannelIndex;
	core::CV_Action_CvtColor* _cvtAction;
public Q_SLOTS:
	void on_targetComboBox_currentIndexChanged(int);
};

#endif // CVACTIONCVTCOLORVIEW_H
