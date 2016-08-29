#ifndef CVACTIONSHAPESVIEW_H
#define CVACTIONSHAPESVIEW_H

#include "CVActionView.h"
#include "ui_CVActionShapesView.h"

namespace core{
	class CV_Action_Shapes;
}

class CVActionShapesView : public CVActionView
{
	Q_OBJECT

public:
	CVActionShapesView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper);
	~CVActionShapesView();
public Q_SLOTS:
	void on_widthSpinBox_valueChanged(QString);
	void on_minAreaSpinBox_valueChanged(QString);
	void on_maxCosineSpinBox_valueChanged(QString);
	void on_convexCheckBox_stateChanged(int);
	void on_procComboBox_currentIndexChanged(int);
	void on_shapeComboBox_currentIndexChanged(int);
private:
	Ui::CVActionShapesView ui;
	core::CV_Action_Shapes* _shapesAction;
	void update();
	void reset();
};

#endif // CVACTIONSHAPESVIEW_H
