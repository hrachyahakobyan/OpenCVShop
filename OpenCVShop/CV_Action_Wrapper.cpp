#include "stdafx.h"
#include "CV_Action_Wrapper.h"
#include "QT_CV.h"


CV_Action_Wrapper::CV_Action_Wrapper(const QImage& src)
{
	_src = QtOcv::image2Mat(src);
}

CV_Action_Wrapper::~CV_Action_Wrapper()
{
}

QImage CV_Action_Wrapper::applyAction(const core::CV_Action_Base& action) const
{
	cv::Mat dstMat;
	action(_src, dstMat);
	return QtOcv::mat2Image(dstMat);
}