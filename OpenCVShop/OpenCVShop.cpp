#include "stdafx.h"
#include "OpenCVShop.h"

OpenCVShop::OpenCVShop(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	cv::Mat mat(100, 100, CV_8UC1, cv::Scalar(120));
	cv::imshow("Source", mat);
}

OpenCVShop::~OpenCVShop()
{

}
