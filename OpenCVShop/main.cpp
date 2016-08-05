#include "stdafx.h"
#include "OpenCVShop.h"
#include "stack.h"
#include "CV_Action_Gaussian_Blur.h"
#include <QtWidgets/QApplication>

class DummyFileManager{
public:
	static std::string generateFolder(){
		return "../data/folder1/";
	}
};

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	OpenCVShop w;
	w.show();
	core::stack<DummyFileManager> s;
	return a.exec();
}
