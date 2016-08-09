#include "stdafx.h"
#include "OpenCVShop.h"
#include "CV_Action_Gaussian_Blur.h"
#include "CV_Session.h"
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
	//core::CV_Session session(cv::Mat(100, 100, CV_8UC3, cv::Scalar(120, 60, 90)));
	return a.exec();
}
