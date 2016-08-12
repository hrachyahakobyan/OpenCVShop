#include "stdafx.h"
#include "CV_Action_CvtColor.h"

namespace core{
	void CV_Action_CvtColor::operator()(cv::InputArray input, cv::OutputArray output) const
	{
		cv::Mat src = input.getMat();
		qDebug() << src.channels() << '\n';
		cv::Mat dst = output.getMat();
		cv::cvtColor(src, dst, _code, _dstCn);
		output.assign(dst);
	}

	std::string CV_Action_CvtColor::description() const
	{
		std::string desc("Action: Convert color.\n");
		desc.append("Paramerers: ");
		desc.append("\n Code = "); desc.append(std::to_string(_code));
		desc.append("\n Dest channels "); desc.append(std::to_string(_dstCn));
		return desc;
	}
}