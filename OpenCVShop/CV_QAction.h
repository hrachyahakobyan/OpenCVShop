#ifndef CV_QACTION_H
#define CV_QACTION_H

#include <QAction>
#include "CV_Action_Types.h"

class CV_QAction : public QAction
{
	Q_OBJECT

public:
	CV_QAction(const QString& text, QObject* parent, core::CV_Action_Type type);
	~CV_QAction();
	core::CV_Action_Type type;
private:
	CV_QAction(QObject *parent);
};

#endif // CV_QACTION_H
