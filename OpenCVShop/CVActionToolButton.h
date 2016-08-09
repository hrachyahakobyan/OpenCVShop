#ifndef CVACTIONTOOLBUTTON_H
#define CVACTIONTOOLBUTTON_H

#include <QToolButton>
#include "ui_CVActionToolButton.h"

class CVActionToolButton : public QToolButton
{
	Q_OBJECT

public:
	CVActionToolButton(QWidget *parent = 0);
	~CVActionToolButton();

private:
	Ui::CVActionToolButton ui;
};

#endif // CVACTIONTOOLBUTTON_H
