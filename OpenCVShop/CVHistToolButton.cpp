#include "stdafx.h"
#include "CVHistToolButton.h"
#include "CV_Action_Types.h"

CVHistToolButton::CVHistToolButton(QWidget *parent)
	: CVActionToolButton(parent)
{
	CV_QAction* eqHistAction = new CV_QAction("Equalize histogram", this, core::CV_Action_Type::EqHist);
	QList<CV_QAction*> actions({ });
	setActions(actions, eqHistAction);
}

CVHistToolButton::~CVHistToolButton()
{

}
