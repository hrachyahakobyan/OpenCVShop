#pragma once
namespace core{
	enum class CV_Action_Type{ GaussianBlur, MedianBlur, BilateralBlur, Dilate, Erode, ExMorphology, Resize,
		AdaptiveThreshold, Threshold, CvtColor, Grid, EqHist, HoughCicles, Rotate, Shapes, Crop
	};
}