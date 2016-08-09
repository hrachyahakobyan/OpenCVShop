#include "stdafx.h"
#include "CVFilterToolButton.h"
#include "CV_QAction.h"

CVFilterToolButton::CVFilterToolButton(QWidget *parent)
	: CVActionToolButton(parent)
{
	CV_QAction* gaussAction = new CV_QAction("Gaussian", this, core::CV_Action_Type::GaussianBlur);
	CV_QAction* medianAction = new CV_QAction("Median", this, core::CV_Action_Type::MedianBlur);
	CV_QAction* morphAction = new CV_QAction("Ex. Morph", this, core::CV_Action_Type::ExMorphology);
	QList<CV_QAction*> actions({gaussAction, medianAction, morphAction});
	setActions(actions);
	this->setDefaultAction(medianAction);
}



CVFilterToolButton::~CVFilterToolButton()
{

}
