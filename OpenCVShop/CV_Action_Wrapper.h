#pragma once
#include "CV_Action_Base.h"

class CV_Action_Wrapper
{
public:
	CV_Action_Wrapper(){}
	CV_Action_Wrapper(const QImage& src);
	~CV_Action_Wrapper();
	QImage applyAction(const core::CV_Action_Base& action, QString& error) const;
private:
	CV_Action_Wrapper(const CV_Action_Wrapper&){}
	CV_Action_Wrapper& operator=(const CV_Action_Wrapper&){}
	cv::Mat _src;
};

