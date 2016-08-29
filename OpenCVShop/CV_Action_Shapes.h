#pragma once
#include "CV_Action_CloneAble.h"

namespace core{
	enum CVShapeType{Triangle, Quadrilateral, Square, Rectangle, Pentagon, Default, NoShape};
	enum CVShapePreprocType{ NoProc, Canny, BinThresh };

	class CV_Action_Shapes : public CV_Action_CloneAble<CV_Action_Base, CV_Action_Shapes>
	{
	public:
		CV_Action_Shapes() : _shapeType(CVShapeType::Default), _procType(CVShapePreprocType::Canny), _color(0, 255, 255), _minArea(200), _convex(true), _maxCos(0.1), _width(2){}
		void operator()(const CV_Image& src, CV_Image& out) const;
		std::string description() const;
	public:
		CVShapeType _shapeType;
		CVShapePreprocType _procType;
		cv::Scalar _color;
		double _minArea;
		bool _convex;
		double _maxCos;
		double _width;
	private:
		void drawContours(cv::Mat& mat, const std::vector<std::vector<cv::Point>>& contours) const;
		void preprocess(const cv::Mat& src, cv::Mat& dst) const;
		void extract(const cv::Mat& src, std::vector<std::vector<cv::Point>>& shapes) const;
		void detect(const std::vector<std::vector<cv::Point>>& contours, std::vector<std::vector<cv::Point>>& shapes) const;
		CVShapeType detect(const std::vector<cv::Point>& contours) const;
		bool isValidSquare(const std::vector<cv::Point>& contour) const;
		bool isValidRect(const std::vector<cv::Point>& contour) const;
		double vectorCosine(cv::Point p1, cv::Point p2, cv::Point p0) const;
	};
}
