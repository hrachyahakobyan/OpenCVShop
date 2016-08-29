#pragma once
#include "CV_Action_CloneAble.h"

namespace core{
	enum CVRotationFlag { RotCL, RotCCL, Rot180, RotCustom };

	class CV_Action_Rotate : public CV_Action_CloneAble<CV_Action_Base, CV_Action_Rotate>
	{
	public:
		CV_Action_Rotate() : _flag(CVRotationFlag::RotCL), _angle(0){}
		void operator()(const CV_Image& src, CV_Image& out) const;
		std::string description() const;
		CVRotationFlag _flag;
		double _angle;
	private:
		void rotate(const cv::Mat& src, cv::Mat& dst, double angle) const;
	};
}
