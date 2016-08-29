#ifndef CVACTIONROTATEVIEW_H
#define CVACTIONROTATEVIEW_H

#include "CVActionView.h"
#include "ui_CVActionRotateView.h"

namespace core{
	class CV_Action_Rotate;
}

class CVActionRotateView : public CVActionView
{
	Q_OBJECT

public:
	CVActionRotateView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper);
	~CVActionRotateView();
public Q_SLOTS:
	void on_rotCLButton_clicked();
	void on_rotCCLButton_clicked();
	void on_rot180Button_clicked();
	void on_angleSpinBox_valueChanged(QString);
private:
	Ui::CVActionRotateView ui;
	core::CV_Action_Rotate* _rotateAction;
	void update();
	void reset();
};

#endif // CVACTIONROTATEVIEW_H
