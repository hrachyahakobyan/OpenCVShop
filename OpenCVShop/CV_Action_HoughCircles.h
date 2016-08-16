#pragma once
#include "CV_Action_CloneAble.h"

namespace core{
	class CV_Action_HoughCircles : public CV_Action_CloneAble<CV_Action_Base, CV_Action_HoughCircles>
	{
	public:
		CV_Action_HoughCircles() : _method(CV_HOUGH_GRADIENT), _dp(1), _minDist(1), _param1(100), _param2(100), _minRad(0), _maxRad(100){}
		void operator()(cv::InputArray input, cv::OutputArray output) const;
		std::string description() const;
	public:
		int _method;
		double _dp;
		double _minDist;
		double _param1;
		double _param2;
		double _minRad;
		double _maxRad;
	private:
		void drawCircles(const std::vector<cv::Vec3f>& circles, cv::Mat& img, cv::Scalar color = cv::Scalar(0, 255, 0)) const;
	};
}