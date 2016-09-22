#ifndef CVACTIONCROPVIEW_H
#define CVACTIONCROPVIEW_H

#include "CVActionView.h"
#include "ui_CVActionCropView.h"

namespace core{
	class CV_Action_Crop;
}

class CVSelectView;

class CVActionCropView : public CVActionView
{
	Q_OBJECT

public:
	CVActionCropView(QWidget *parent, std::unique_ptr<CV_Action_Wrapper> wrapper);
	~CVActionCropView();
private:
	Ui::CVActionCropView ui;
	core::CV_Action_Crop* _cropAction;
	std::unique_ptr<CVSelectView> _selectView;
	void update();
	void reset();
	static bool isValidContour(const std::vector<std::pair<int, int>>&);
};

#endif // CVACTIONCROPVIEW_H
