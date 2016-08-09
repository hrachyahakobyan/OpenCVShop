#ifndef CVACTIONBILATERALBLURVIEW_H
#define CVACTIONBILATERALBLURVIEW_H

#include "CVActionView.h"
#include "ui_CVActionBilateralBlurView.h"

class CVActionBilateralBlurView : public CVActionView
{
	Q_OBJECT

public:
	CVActionBilateralBlurView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src);
	~CVActionBilateralBlurView();
public Q_SLOTS:
	void on_dSpinBox_valueChanged(QString);
	void on_sigmaColorSpinBox_valueChanged(QString);
	void on_sigmaSpaceSpinBox_valueChanged(QString);
private:
	Ui::CVActionBilateralBlurView ui;
	void update();
};


#endif // CVACTIONBILATERALBLURVIEW_H
