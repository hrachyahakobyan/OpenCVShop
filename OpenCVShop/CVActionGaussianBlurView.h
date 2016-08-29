#ifndef CVACTIONGAUSSIANBLURVIEW_H
#define CVACTIONGAUSSIANBLURVIEW_H

#include "CVActionView.h"
#include "ui_CVActionGaussianBlurView.h"

namespace core{
	class CV_Action_Gaussian_Blur;
}

class CVActionGaussianBlurView : public CVActionView
{
	Q_OBJECT

public:
	CVActionGaussianBlurView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper);
	~CVActionGaussianBlurView();
public Q_SLOTS:
	void on_sigmaXSpinBox_valueChanged(QString);
	void on_kernelSizeSlider_valueChanged();
private:
	Ui::CVActionGaussianBlurView ui;
	core::CV_Action_Gaussian_Blur* _blurAction;
	void update();
};

#endif // CVACTIONGAUSSIANBLURVIEW_H
