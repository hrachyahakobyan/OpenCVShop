#include "stdafx.h"
#include "CVMiscellaneousToolButton.h"
#include "CV_QAction.h"

CVMiscellaneousToolButton::CVMiscellaneousToolButton(QWidget *parent)
	: CVActionToolButton(parent)
{
	CV_QAction* adThreshAction = new CV_QAction("Adaptive Threshold", this, core::CV_Action_Type::AdaptiveThreshold);
	CV_QAction* threshAction = new CV_QAction("Threshold", this, core::CV_Action_Type::Threshold);
	QList<CV_QAction*> actions({threshAction });
	setActions(actions, adThreshAction);
}

CVMiscellaneousToolButton::~CVMiscellaneousToolButton()
{

}
