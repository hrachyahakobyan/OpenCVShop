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
	core::CV_Action_Gaussian_Blur blur(cv::getStructuringElement(cv::MORPH_RECT, cv::Size(3, 3)), cv::Size(4, 4), 0);
	return a.exec();
}
