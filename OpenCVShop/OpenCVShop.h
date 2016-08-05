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

private:
	Ui::OpenCVShopClass ui;
};

#endif // OPENCVSHOP_H
