#ifndef CVACTIONCVTCOLORVIEW_H
#define CVACTIONCVTCOLORVIEW_H

#include "CVActionView.h"
#include "ui_CVActionCvtColorView.h"

class CVActionCvtColorView : public CVActionView
{
	Q_OBJECT

public:
	CVActionCvtColorView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src);
	~CVActionCvtColorView();

private:
	Ui::CVActionCvtColorView ui;
	int sourceChannelIndex;
public Q_SLOTS:
	void on_targetComboBox_currentIndexChanged(int);
};

#endif // CVACTIONCVTCOLORVIEW_H
