#ifndef CVACTIONRESIZEVIEW_H
#define CVACTIONRESIZEVIEW_H

#include "CVActionView.h"
#include "ui_CVActionResizeView.h"

namespace core{
	class CV_Action_Resize;
}

class CVActionResizeView : public CVActionView
{
	Q_OBJECT

public:
	CVActionResizeView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper);
	~CVActionResizeView();
public Q_SLOTS:
	void on_widthSpinBox_valueChanged(QString);
	void on_heightSpinBox_valueChanged(QString);
	void on_interFlagComboBox_currentIndexChanged(int);
	void on_okButton_clicked();
private:
	Ui::CVActionResizeView ui;
	core::CV_Action_Resize* _resizeAction;
};

#endif // CVACTIONRESIZEVIEW_H
