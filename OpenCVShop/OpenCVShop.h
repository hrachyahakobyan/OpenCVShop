#ifndef OPENCVSHOP_H
#define OPENCVSHOP_H

#include <QtWidgets/QMainWindow>
#include "ui_OpenCVShop.h"

class OpenCVShop : public QMainWindow
{
	Q_OBJECT

public:
	OpenCVShop(QWidget *parent = 0);
	~OpenCVShop();
public Q_SLOTS:
	void on_undoButton_clicked();
	void on_redoButton_clicked();
	void on_actionGaussian_triggered();
	void on_actionEx_morphology_triggered();
private:
	Ui::OpenCVShopClass ui;
	QGraphicsScene* _imageScene;
	QImage _image;
};

#endif // OPENCVSHOP_H
