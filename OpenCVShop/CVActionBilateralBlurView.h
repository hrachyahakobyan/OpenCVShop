#ifndef CVACTIONBILATERALBLURVIEW_H
#define CVACTIONBILATERALBLURVIEW_H

#include "CVActionView.h"
#include "ui_CVActionBilateralBlurView.h"

namespace core{
	class CV_Action_Bilateral_Blur;
}

class CVActionBilateralBlurView : public CVActionView
{
	Q_OBJECT

public:
	CVActionBilateralBlurView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper);
	~CVActionBilateralBlurView();
public Q_SLOTS:
	void on_dSpinBox_valueChanged(QString);
	void on_sigmaColorSpinBox_valueChanged(QString);
	void on_sigmaSpaceSpinBox_valueChanged(QString);
private:
	Ui::CVActionBilateralBlurView ui;
	void update();
	core::CV_Action_Bilateral_Blur* _blurAction;
};


#endif // CVACTIONBILATERALBLURVIEW_H
