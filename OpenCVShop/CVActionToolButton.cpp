#include "stdafx.h"
#include "CVActionToolButton.h"
#include "CV_QAction.h"

CVActionToolButton::CVActionToolButton(QWidget *parent)
	: QToolButton(parent)
{
	ui.setupUi(this);
	setPopupMode(QToolButton::MenuButtonPopup);
}

CVActionToolButton::~CVActionToolButton()
{
	if (this->menu() != NULL)
		delete this->menu();
}

void CVActionToolButton::setActions(QList<CV_QAction*> actions, CV_QAction* defaultAction)
{
	QMenu* menu = new QMenu;
	for (int i = 0; i < actions.size(); i++)
	{
		CV_QAction* action = actions[i];
		connectAction(action);
		menu->addAction(action);
	}
	this->setDefaultAction(defaultAction);
	connectAction(defaultAction);
	this->setMenu(menu);
}

void CVActionToolButton::_on_toolButtonAction_triggered()
{
	CV_QAction* action = dynamic_cast<CV_QAction*>(sender());
	if (action != NULL)
		Q_EMIT(cvActionToolButtonTriggeredAction(action->type));
}

void CVActionToolButton::connectAction(CV_QAction* action)
{
	connect(action, SIGNAL(triggered()), this, SLOT(_on_toolButtonAction_triggered()));
}
