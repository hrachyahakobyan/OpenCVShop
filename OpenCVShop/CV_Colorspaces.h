#pragma once
#include "opencv2\imgproc.hpp"

namespace core{
	enum CV_Colorspace{ RGB, RGBA, Gray };

	static void colorspacesForConversionCode(cv::ColorConversionCodes code, CV_Colorspace& src, CV_Colorspace& dst)
	{
		if (code == cv::ColorConversionCodes::COLOR_RGB2GRAY){
			src = CV_Colorspace::RGB;
			dst = CV_Colorspace::Gray;
		}
		else if (code == cv::ColorConversionCodes::COLOR_RGB2RGBA){
			src = CV_Colorspace::RGB;
			dst = CV_Colorspace::RGBA;
		}
		else if (code == cv::ColorConversionCodes::COLOR_GRAY2RGB){
			src = CV_Colorspace::Gray;
			dst = CV_Colorspace::RGB;
		}
		else if (code == cv::ColorConversionCodes::COLOR_GRAY2RGBA){
			src = CV_Colorspace::Gray;
			dst = CV_Colorspace::RGBA;
		}
		else if (code == cv::ColorConversionCodes::COLOR_RGBA2GRAY){
			src = CV_Colorspace::RGBA;
			dst = CV_Colorspace::Gray;
		}
		else if (code == cv::ColorConversionCodes::COLOR_RGBA2RGB){
			src = CV_Colorspace::RGBA;
			dst = CV_Colorspace::RGB;
		}
		else {
			assert(false && "Error: color code not implemented");
		}
	}

	static cv::ColorConversionCodes conversionCodeForColorspaces(CV_Colorspace src, CV_Colorspace dst)
	{
		if (src == CV_Colorspace::Gray)
		{
			if (dst == CV_Colorspace::RGB)
			{
				return cv::ColorConversionCodes::COLOR_GRAY2RGB;
			}
			else if (dst == CV_Colorspace::RGBA)
			{
				return cv::ColorConversionCodes::COLOR_GRAY2RGBA;
			}
			else
			{
				assert(false && "Error: conversion from/to same colorspace");
			}
		}
		else if (src == CV_Colorspace::RGB)
		{
			if (dst == CV_Colorspace::Gray)
			{
				return cv::ColorConversionCodes::COLOR_RGB2GRAY;
			}
			else if (dst == CV_Colorspace::RGBA)
			{
				return cv::ColorConversionCodes::COLOR_RGB2RGBA;
			}
			else
			{
				assert(false && "Error: conversion from/to same colorspace");
			}
		}
		else
		{
			if (dst == CV_Colorspace::RGB)
			{
				return cv::ColorConversionCodes::COLOR_RGBA2RGB;
			}
			else if (dst == CV_Colorspace::Gray)
			{
				return cv::ColorConversionCodes::COLOR_RGBA2GRAY;
			}
			else
			{
				assert(false && "Error: conversion from/to same colorspace");
			}
		}
	}

	static int channelsForColorspace(CV_Colorspace colorspace)
	{
		if (colorspace == CV_Colorspace::Gray)
			return 1;
		else if (colorspace == CV_Colorspace::RGB)
			return 3;
		else
			return 4;
	}
}