#ifndef CVACTIONRESIZEVIEW_H
#define CVACTIONRESIZEVIEW_H

#include "CVActionView.h"
#include "ui_CVActionResizeView.h"

class CVActionResizeView : public CVActionView
{
	Q_OBJECT

public:
	CVActionResizeView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src);
	~CVActionResizeView();
public Q_SLOTS:
	void on_widthSpinBox_valueChanged(QString);
	void on_heightSpinBox_valueChanged(QString);
	void on_interFlagComboBox_currentIndexChanged(int);
	void on_okButton_clicked();
private:
	Ui::CVActionResizeView ui;
	void update();
};

#endif // CVACTIONRESIZEVIEW_H
