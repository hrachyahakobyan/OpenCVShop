#ifndef CVACTIONTOOLBUTTON_H
#define CVACTIONTOOLBUTTON_H

#include <QToolButton>
#include "ui_CVActionToolButton.h"
#include "CV_Action_Types.h"
#include "CV_QAction.h"

class CVActionToolButton : public QToolButton
{
	Q_OBJECT

public:
	CVActionToolButton(QWidget *parent= 0);
	~CVActionToolButton();
Q_SIGNALS:
	void cvActionToolButtonTriggeredAction(core::CV_Action_Type type);
public Q_SLOTS:
	void _on_toolButtonAction_triggered();
protected:
	void connectAction(CV_QAction* action);
	void setActions(QList<CV_QAction*> actions);
private:
	Ui::CVActionToolButton ui;
};

#endif // CVACTIONTOOLBUTTON_H
