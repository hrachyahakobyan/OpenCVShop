#include "stdafx.h"
#include "CV_Action_Wrapper.h"
#include "QT_CV.h"


CV_Action_Wrapper::CV_Action_Wrapper(const QImage& src)
{
	_src = QtOcv::image2Mat(src);
	qDebug() << _src.channels() << ' '<< _src.depth() << '\n';
}

CV_Action_Wrapper::~CV_Action_Wrapper()
{
}

QImage CV_Action_Wrapper::applyAction(const core::CV_Action_Base& action, QString& error) const
{
	cv::Mat dstMat;
	try {
		action(_src, dstMat);
	}
	catch (const cv::Exception& e)
	{
		error = QString(e.what());
		return QImage();
	}
	error.clear();
	return QtOcv::mat2Image(dstMat);
}