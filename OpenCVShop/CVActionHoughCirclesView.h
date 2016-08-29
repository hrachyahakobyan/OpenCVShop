#ifndef CVACTIONHOUGHCIRCLESVIEW_H
#define CVACTIONHOUGHCIRCLESVIEW_H

#include "CVActionView.h"
#include "ui_CVActionHoughCirclesView.h"

namespace core{
	class CV_Action_HoughCircles;
}


class CVActionHoughCirclesView : public CVActionView
{
	Q_OBJECT

public:
	CVActionHoughCirclesView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper);
	~CVActionHoughCirclesView();
public Q_SLOTS:
	void on_dpComboBox_currentIndexChanged(int);
	void on_minDistSpinBox_valueChanged(QString);
	void on_param1SpinBox_valueChanged(QString);
	void on_param2SpinBox_valueChanged(QString);
	void on_minRadSpinBox_valueChanged(QString);
	void on_maxRadSpinBox_valueChanged(QString);
private:
	Ui::CVActionHoughCirclesView ui;
	void update();
	core::CV_Action_HoughCircles* _houghAction;
};

#endif // CVACTIONHOUGHCIRCLESVIEW_H
