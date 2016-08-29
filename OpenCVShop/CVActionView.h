#ifndef CVACTIONVIEW_H
#define CVACTIONVIEW_H

#include <QDialog>
#include "CV_Action_Wrapper.h"

class CVActionView : public QDialog
{
	Q_OBJECT

public:
	CVActionView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper);
public:
	virtual ~CVActionView();
Q_SIGNALS:
	void cvActionViewDidCommit(const core::CV_Image& img, const QString& action);
	void cvActionViewDidCancel(const QString& action);
protected:
	std::unique_ptr<CV_Action_Wrapper> _actionWrapper;
	std::unique_ptr<QGraphicsScene> _imageScene;
	virtual void update();
	virtual void reset();
public Q_SLOTS:
	void on_cancelButton_clicked();
	void on_okButton_clicked();
	void on_updateButton_clicked();
	void on_resetButton_clicked();
};

#endif // CVACTIONVIEW_H
