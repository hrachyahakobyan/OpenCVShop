#include "stdafx.h"
#include "CVFilterToolButton.h"
#include "CV_QAction.h"

CVFilterToolButton::CVFilterToolButton(QWidget *parent)
	: CVActionToolButton(parent)
{
	CV_QAction* gaussAction = new CV_QAction("Gaussian blur", this, core::CV_Action_Type::GaussianBlur);
	CV_QAction* medianAction = new CV_QAction("Median blur", this, core::CV_Action_Type::MedianBlur);
	CV_QAction* bilateralAction = new CV_QAction("Bilateral blur", this, core::CV_Action_Type::BilateralBlur);
	QList<CV_QAction*> actions({ medianAction, bilateralAction });
	setActions(actions, gaussAction);
}



CVFilterToolButton::~CVFilterToolButton()
{

}
