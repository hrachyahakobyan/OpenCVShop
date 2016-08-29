#pragma once
#include "CV_Action_CloneAble.h"

namespace core{
	class CV_Action_Gaussian_Blur : public CV_Action_CloneAble<CV_Action_Base, CV_Action_Gaussian_Blur>
	{
	public:
		CV_Action_Gaussian_Blur() : _ksize(cv::Size(1, 1)), _sigma_x(0.0), _sigma_y(0.0), _border_type(4){}
		CV_Action_Gaussian_Blur(const cv::Size& ksize,
			double sigma_x, double sigma_y = 0.0, int border_type = 4) :
			_ksize(ksize), _sigma_x(sigma_x), _sigma_y(sigma_y), _border_type(border_type){}
		void operator()(const CV_Image& src, CV_Image& out) const;
		std::string description() const;
	public:
		cv::Size _ksize;
		double _sigma_x;
		double _sigma_y;
		int _border_type;
	};
}
