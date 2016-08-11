#ifndef CVACTIONADAPTIVETHRESHOLDVIEW_H
#define CVACTIONADAPTIVETHRESHOLDVIEW_H

#include "CVActionView.h"
#include "ui_CVActionAdaptiveThresholdView.h"

class CVActionAdaptiveThresholdView : public CVActionView
{
	Q_OBJECT

public:
	CVActionAdaptiveThresholdView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src);
	~CVActionAdaptiveThresholdView();
public Q_SLOTS:
	void on_maxValueSpinBox_valueChanged(QString);
	void on_cSpinBox_valueChanged(QString);
	void on_blockSizeSpinBox_valueChanged(QString);
	void on_thresholdTypeComboBox_currentIndexChanged(int);
	void on_adaptiveThresholdComboBox_currentIndexChanged(int);
private:
	Ui::CVActionAdaptiveThresholdView ui;
	void update();
};

#endif // CVACTIONADAPTIVETHRESHOLDVIEW_H
