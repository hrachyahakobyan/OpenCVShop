#include "stdafx.h"
#include "CVGeomTransToolButton.h"
#include "CV_QAction.h"

CVGeomTransToolButton::CVGeomTransToolButton(QWidget *parent)
	: CVActionToolButton(parent)
{
	CV_QAction* resizeAction = new CV_QAction("Resize", this, core::CV_Action_Type::Resize);
	QList<CV_QAction*> actions({});
	setActions(actions,resizeAction);
}

CVGeomTransToolButton::~CVGeomTransToolButton()
{

}
