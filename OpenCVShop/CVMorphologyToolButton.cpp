#include "stdafx.h"
#include "CVMorphologyToolButton.h"
#include "CV_QAction.h"

CVMorphologyToolButton::CVMorphologyToolButton(QWidget *parent)
	: CVActionToolButton(parent)
{
	CV_QAction* dilateAction = new CV_QAction("Dilate", this, core::CV_Action_Type::Dilate);
	CV_QAction* erodeAction = new CV_QAction("Erode", this, core::CV_Action_Type::Erode);
	CV_QAction* exMorph = new CV_QAction("Ex. Morphology", this, core::CV_Action_Type::ExMorphology);
	QList<CV_QAction*> actions({erodeAction, exMorph });
	setActions(actions, dilateAction);
}



CVMorphologyToolButton::~CVMorphologyToolButton()
{

}

