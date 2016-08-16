#include "stdafx.h"
#include "CVFeatureDetToolButton.h"
#include "CV_Action_Types.h"

CVFeatureDetToolButton::CVFeatureDetToolButton(QWidget *parent)
	: CVActionToolButton(parent)
{
	CV_QAction* houghCirclesAction = new CV_QAction("Hough circles", this, core::CV_Action_Type::HoughCicles);
	QList<CV_QAction*> actions({});
	setActions(actions, houghCirclesAction);
}

CVFeatureDetToolButton::~CVFeatureDetToolButton()
{

}
