#include "stdafx.h"
#include "CV_QAction.h"


CV_QAction::CV_QAction(const QString& text, QObject* parent, core::CV_Action_Type type)
	: QAction(text, parent), type(type)
{

}

CV_QAction::CV_QAction(QObject *parent)
	: QAction(parent)
{

}

CV_QAction::~CV_QAction()
{

}
