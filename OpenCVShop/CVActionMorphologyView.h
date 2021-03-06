#ifndef CVACTIONMORPHOLOGYVIEW_H
#define CVACTIONMORPHOLOGYVIEW_H

#include "CVActionView.h"
#include "ui_CVActionMorphologyView.h"

class CVActionMorphologyView : public CVActionView
{
	Q_OBJECT

public:
	CVActionMorphologyView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper);
	~CVActionMorphologyView();
public Q_SLOTS:
	void on_kernelSizeSpinBox_valueChanged(QString);
	void on_morphShapeComboBox_currentIndexChanged(int);
	void on_morphTypeComboBox_currentIndexChanged(int);
	void on_iterationsSpinBox_valueChanged(QString);
private:
	Ui::CVActionMorphologyView ui;
	void update();
};


#endif // CVACTIONMORPHOLOGYVIEW_H
