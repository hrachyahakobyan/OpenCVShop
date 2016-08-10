#ifndef CVACTIONDILATEVIEW_H
#define CVACTIONDILATEVIEW_H

#include "CVActionView.h"
#include "ui_CVActionDilateView.h"

class CVActionDilateView : public CVActionView
{
	Q_OBJECT

public:
	CVActionDilateView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src);
	~CVActionDilateView();
public Q_SLOTS:
	void on_kernelSizeSlider_valueChanged();
	void on_morphShapeComboBox_currentIndexChanged(int);
private:
	Ui::CVActionDilateView ui;
	void update();
};

#endif // CVACTIONDILATEVIEW_H
