#ifndef CVACTIONEQHISTVIEW_H
#define CVACTIONEQHISTVIEW_H

#include "CVActionView.h"
#include "ui_CVActionEqHistView.h"

class CVActionEqHistView : public CVActionView
{
	Q_OBJECT

public:
	CVActionEqHistView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src);
	~CVActionEqHistView();
private:
	Ui::CVActionEqHistView ui;
	void update();
};

#endif // CVACTIONEQHISTVIEW_H
