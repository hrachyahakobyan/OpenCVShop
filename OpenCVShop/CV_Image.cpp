#include "stdafx.h"
#include "CV_Image.h"


namespace core
{
	CV_Image::CV_Image(const cv::Mat& src, CV_Colorspace color)
		: _src(src.clone()), _color(color)
	{
		assert(_src.empty() == false && "Error: Cannot initialize with empty matrix");
		assertColorspace(_src, _color);
	}

	CV_Image& CV_Image::operator=(const CV_Image& other)
	{
		this->_color = other.colorspace();
		this->_src = other.mat();
		return *this;
	}

	CV_Image::~CV_Image()
	{
	}

	void CV_Image::setMat(const cv::Mat& mat, CV_Colorspace color, bool copy)
	{
		_src = copy ? mat.clone() : mat;
		_color = color;
		assert(_src.empty() == false && "Error: Cannot initialize with empty matrix");
		assertColorspace(_src, _color);
	}

	void CV_Image::assertColorspace(const cv::Mat& mat, CV_Colorspace color) const
	{
		if (mat.channels() == 1){
			assert(color == CV_Colorspace::Gray && "Error: incompatible colorspace");
		}
		else if (mat.channels() == 3)
		{
			assert((color == CV_Colorspace::RGB) && "Error: incompatible colorspace");
		}
		else if (mat.channels() == 4) {
			assert((color == CV_Colorspace::RGBA) && "Error: incomaptible colorspace");
		}
	}
}
