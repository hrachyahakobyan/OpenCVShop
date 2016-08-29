#ifndef CVACTIONADAPTIVETHRESHOLDVIEW_H
#define CVACTIONADAPTIVETHRESHOLDVIEW_H

#include "CVActionView.h"
#include "ui_CVActionAdaptiveThresholdView.h"

namespace core{
	class CV_Action_Adaptive_Threshold;
}

class CVActionAdaptiveThresholdView : public CVActionView
{
	Q_OBJECT

public:
	CVActionAdaptiveThresholdView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper);
	~CVActionAdaptiveThresholdView();
public Q_SLOTS:
	void on_maxValueSpinBox_valueChanged(QString);
	void on_cSpinBox_valueChanged(QString);
	void on_blockSizeSpinBox_valueChanged(QString);
	void on_thresholdTypeComboBox_currentIndexChanged(int);
	void on_adaptiveThresholdTypeComboBox_currentIndexChanged(int);
private:
	Ui::CVActionAdaptiveThresholdView ui;
	void update();
	core::CV_Action_Adaptive_Threshold* _threshAction;
};

#endif // CVACTIONADAPTIVETHRESHOLDVIEW_H
