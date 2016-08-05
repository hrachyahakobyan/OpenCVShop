#pragma once
#include "CV_Action_CloneAble.h"

namespace core{
	class CV_Action_Gaussian_Blur : public CV_Action_CloneAble<CV_Action_Base, CV_Action_Gaussian_Blur>
	{
	public:
		CV_Action_Gaussian_Blur(const cv::Size& ksize,
			double sigma_x, double sigma_y = 0.0, int border_type = 4) :
		    ksize(ksize), sigma_x(sigma_x), sigma_y(sigma_y), border_type(border_type){}
		void operator()(cv::InputArray input, cv::OutputArray output) const;
		std::string description() const;
	public:
		const cv::Size ksize;
		const double sigma_x;
		const double sigma_y;
		const int border_type;
	};
}