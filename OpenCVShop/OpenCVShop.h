#ifndef OPENCVSHOP_H
#define OPENCVSHOP_H

#include <QtWidgets/QMainWindow>
#include "ui_OpenCVShop.h"
#include "CVActionView.h"
#include "CV_Session.h"

class OpenCVShop : public QMainWindow
{
	Q_OBJECT

public:
	OpenCVShop(QWidget *parent = 0);
	~OpenCVShop();
public Q_SLOTS:
	void on_filterGaussianButton_clicked();
	void on_filterMedianButton_clicked();
	void on_filterMorphButton_clicked();
	void on_actionUndo_triggered();
	void on_actionRedo_triggered();
	void on_actionNew_triggered();
	void on_actionSave_triggered();
	void _on_cvActionView_commited(const QImage& img, const QString&);
	void _on_cvActionView_cancelled(const QString&);
private:
	Ui::OpenCVShopClass ui;
	std::unique_ptr<QGraphicsScene> _imageScene;
	std::unique_ptr<CVActionView> _actionView;
	std::unique_ptr<core::CV_Session> _session;
	std::unique_ptr<QStringListModel> _listModel;
	void initSession(const QImage& source);
	void updateUI();
	void reset();
	void connectActionView();
	void allowActions(bool allow);
};

#endif // OPENCVSHOP_H
