#include "stdafx.h"
#include "CV_Action_Wrapper.h"
#include "QT_CV.h"


CV_Action_Wrapper::CV_Action_Wrapper(const core::CV_Image& src, std::unique_ptr<core::CV_Action_Base> action) 
	: _source(src), _result(src), _action(std::move(action))
{
}

CV_Action_Wrapper::~CV_Action_Wrapper()
{
}

void CV_Action_Wrapper::reset()
{
	_result.setMat(_source.mat(), _source.colorspace());
}

void CV_Action_Wrapper::applyAction(QString& error) 
{
	try {
		core::CV_Image temp;
		_action->operator()(_source, _result);
	}
	catch (const cv::Exception& e)
	{
		error = QString(e.what());
	}
	error.clear();
}
