#pragma once
#include "CV_Action_CloneAble.h"
namespace core{
	class CV_Action_Grid : public CV_Action_CloneAble<CV_Action_Base, CV_Action_Grid>
	{
	public:
		CV_Action_Grid() : _angle(30.0), _dist(5.0), _line_width(2), _offset_x(0.0), _offset_y(0.0), _color(0, 0, 0){}
		void operator()(cv::InputArray input, cv::OutputArray output) const;
		std::string description() const;
	public:
		double _angle;
		double _dist;
		int _line_width;
		double _offset_x;
		double _offset_y;
		cv::Scalar _color;
	private:
		enum class GridDirection{Lef2Right, Right2Left};
		void grid(cv::Mat& mat, GridDirection dir) const;
	};
}

