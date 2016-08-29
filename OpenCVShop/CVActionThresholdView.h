#ifndef CVACTIONTHRESHOLDVIEW_H
#define CVACTIONTHRESHOLDVIEW_H

#include "CVActionView.h"
#include "ui_CVActionThresholdView.h"

namespace core{
	class CV_Action_Threshold;
}

class CVActionThresholdView : public CVActionView
{
	Q_OBJECT

public:
	CVActionThresholdView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper);
	~CVActionThresholdView();
public Q_SLOTS:
	void on_maxValueSpinBox_valueChanged(QString);
	void on_threshSpinBox_valueChanged(QString);
	void on_thresholdTypeComboBox_currentIndexChanged(int);
private:
	Ui::CVActionThresholdView ui;
	void update();
	int threshIndexToThresh(int index) const;
	core::CV_Action_Threshold* _threshAction;
};

#endif // CVACTIONTHRESHOLDVIEW_H
