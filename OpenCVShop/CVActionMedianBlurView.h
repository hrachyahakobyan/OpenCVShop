#ifndef CVACTIONMEDIANBLURVIEW_H
#define CVACTIONMEDIANBLURVIEW_H

#include "CVActionView.h"
#include "ui_CVActionMedianBlurView.h"

namespace core{
	class CV_Action_Median_Blur;
}

class CVActionMedianBlurView : public CVActionView
{
	Q_OBJECT

public:
	CVActionMedianBlurView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper);
	~CVActionMedianBlurView();
public Q_SLOTS:
	void on_kernelSizeSlider_valueChanged();
private:
	Ui::CVActionMedianBlurView ui;
	void update();
	core::CV_Action_Median_Blur* _medianAction;
};

#endif // CVACTIONMEDIANBLURVIEW_H
