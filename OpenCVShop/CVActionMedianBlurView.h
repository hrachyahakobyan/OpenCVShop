#ifndef CVACTIONMEDIANBLURVIEW_H
#define CVACTIONMEDIANBLURVIEW_H

#include "CVActionView.h"
#include "ui_CVActionMedianBlurView.h"

class CVActionMedianBlurView : public CVActionView
{
	Q_OBJECT

public:
	CVActionMedianBlurView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src);
	~CVActionMedianBlurView();
public Q_SLOTS:
	void on_kernelSizeSlider_valueChanged();
private:
	Ui::CVActionMedianBlurView ui;
	void update();
};

#endif // CVACTIONMEDIANBLURVIEW_H
