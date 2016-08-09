#ifndef CVACTIONGAUSSIANBLURVIEW_H
#define CVACTIONGAUSSIANBLURVIEW_H

#include "CVActionView.h"
#include "ui_CVActionGaussianBlurView.h"

class CVActionGaussianBlurView : public CVActionView
{
	Q_OBJECT

public:
	CVActionGaussianBlurView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src);
	~CVActionGaussianBlurView();
public Q_SLOTS:
	void on_sigmaXSpinBox_valueChanged(QString);
	void on_kernelSizeSlider_valueChanged();
private:
	Ui::CVActionGaussianBlurView ui;
	void update();
};

#endif // CVACTIONGAUSSIANBLURVIEW_H
