#ifndef CVACTIONGRIDVIEW_H
#define CVACTIONGRIDVIEW_H

#include "CVActionView.h"
#include "ui_CVActionGridView.h"

class CVActionGridView : public CVActionView
{
	Q_OBJECT

public:
	CVActionGridView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src);
	~CVActionGridView();
public Q_SLOTS:
	void on_distanceSpinBox_valueChanged(QString s);
	void on_widthSpinBox_valueChanged(QString s);
	void on_angleSpinBox_valueChanged(QString s);
	void on_offsetXSlider_valueChanged();
	void on_offsetYSlider_valueChanged();
private:
	Ui::CVActionGridView ui;
	void update();
};

#endif // CVACTIONGRIDVIEW_H
