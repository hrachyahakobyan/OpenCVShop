#include "stdafx.h"
#include "OpenCVShop.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	OpenCVShop w;
	w.show();
	return a.exec();
}
