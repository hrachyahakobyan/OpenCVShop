#pragma once
#include "CV_Action_Base.h"
#include "CV_Image.h"
#include "QT_CV.h"

class CV_Action_Wrapper
{
public:
	CV_Action_Wrapper(const core::CV_Image& src, std::unique_ptr<core::CV_Action_Base> action);
	~CV_Action_Wrapper();
	void applyAction(QString& error);
	void reset();
	const core::CV_Image& result() const { return _result; }
	const core::CV_Image& source() const {return _source; }
public:
	const std::unique_ptr<core::CV_Action_Base> _action;
private:
	CV_Action_Wrapper();
	CV_Action_Wrapper(const CV_Action_Wrapper&);
	CV_Action_Wrapper& operator=(const CV_Action_Wrapper&);
	void updateQImage(const cv::Mat&);
	const core::CV_Image _source;
	core::CV_Image _result;
};

