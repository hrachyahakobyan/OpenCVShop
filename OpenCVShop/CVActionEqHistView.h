#ifndef CVACTIONEQHISTVIEW_H
#define CVACTIONEQHISTVIEW_H

#include "CVActionView.h"
#include "ui_CVActionEqHistView.h"

namespace core{
	class CV_Action_EqHist;
}

class CVActionEqHistView : public CVActionView
{
	Q_OBJECT

public:
	CVActionEqHistView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper);
	~CVActionEqHistView();
private:
	Ui::CVActionEqHistView ui;
	void update();
	core::CV_Action_EqHist* _histAction;
};

#endif // CVACTIONEQHISTVIEW_H
