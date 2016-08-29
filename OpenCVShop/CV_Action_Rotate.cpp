#include "stdafx.h"
#include "CV_Action_Rotate.h"

namespace core{
	void CV_Action_Rotate::operator()(const CV_Image& src, CV_Image& out) const
	{
		if (src.mat().empty())
			return;
		cv::Mat dst;
		if (_flag == CVRotationFlag::RotCL || (std::fabs(_angle - 90.0) < DBL_EPSILON))
		{
			cv::transpose(src.mat(), dst);
			cv::flip(dst, dst, 1);
		}
		else if (_flag == CVRotationFlag::RotCCL || (std::fabs(_angle - 270) < DBL_EPSILON))
		{
			cv::transpose(src.mat(), dst);
			cv::flip(dst, dst, 0);
		}
		else if (_flag == CVRotationFlag::Rot180 || (std::fabs(_angle - 180.0) < DBL_EPSILON))
		{
			cv::flip(src.mat(), dst, -1);
		}
		else
		{
			rotate(src.mat(), dst, _angle);
		}
		out.setMat(dst, src.colorspace());
	}

	void CV_Action_Rotate::rotate(const cv::Mat& src, cv::Mat& dst, double angle) const
	{
		if (src.empty())
			return;
		else if ((std::fabs(0.0 - angle) < DBL_EPSILON) ||
				(std::fabs(360.0 - angle) < DBL_EPSILON))
		{
			dst = src.clone();
		}
		else
		{
			cv::Point2f src_center(src.cols / 2.0F, src.rows / 2.0F);
			cv::Mat rot_mat = cv::getRotationMatrix2D(src_center, angle, 1.0);
			cv::warpAffine(src, dst, rot_mat, src.size());
		}
	}

	std::string CV_Action_Rotate::description() const
	{
		std::string desc("Action: Rotate.\n");
		desc.append("Paramerers: ");
		desc.append("\n Flag = "); desc.append(std::to_string(_flag));
		desc.append("\n Angle = "); desc.append(std::to_string(_angle));
		return desc;
	}
}
