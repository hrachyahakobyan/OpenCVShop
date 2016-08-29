#pragma once
#include "CV_Colorspaces.h"

namespace core{
	class CV_Image
	{
	public:
		CV_Image() : _color(CV_Colorspace::Gray){}
		CV_Image(const cv::Mat& src, CV_Colorspace colorSpace);
		CV_Image(const CV_Image& other) : _color(other.colorspace()), _src(other.mat()){}
		CV_Image& operator=(const CV_Image& other);
		~CV_Image();
		void setColorspace(CV_Colorspace color) { _color = color; assertColorspace(_src, _color); }
		CV_Colorspace colorspace() const { return _color; }
		const cv::Mat& mat() const {return _src;}
		void setMat(const cv::Mat& src, CV_Colorspace colorspace, bool copy = false);
	private:
		CV_Colorspace _color;
		cv::Mat _src;
		void assertColorspace(const cv::Mat& mat, CV_Colorspace color) const;
	};
}

