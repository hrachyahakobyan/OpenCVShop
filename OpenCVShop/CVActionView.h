#ifndef CVACTIONVIEW_H
#define CVACTIONVIEW_H

#include <QDialog>
#include "CV_Action_Wrapper.h"

class CVActionView : public QDialog
{
	Q_OBJECT

public:
	CVActionView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src);
public:
	virtual ~CVActionView();
Q_SIGNALS:
	void cvActionViewDidCommit(const QImage& img, const QString& action);
	void cvActionViewDidCancel(const QString& action);

protected:
	typedef std::unique_ptr<core::CV_Action_Base> ActionPtr;
	CV_Action_Wrapper _actionWrapper;
	ActionPtr _action;
	const QImage _src;
	QImage _res;
	std::unique_ptr<QGraphicsScene> _imageScene;
	virtual void update();
public Q_SLOTS:
	void on_cancelButton_clicked();
	void on_okButton_clicked();
	void on_updateButton_clicked();
};

#endif // CVACTIONVIEW_H
