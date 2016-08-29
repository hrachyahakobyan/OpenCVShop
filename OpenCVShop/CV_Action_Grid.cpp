#include "stdafx.h"
#include "CV_Action_Grid.h"

namespace core{
	void CV_Action_Grid::operator()(const CV_Image& src, CV_Image& out) const
	{
		cv::Mat dst = src.mat().clone();
		grid(dst, GridDirection::Lef2Right);
		grid(dst, GridDirection::Right2Left);
		out.setMat(dst, src.colorspace());
	}

	std::string CV_Action_Grid::description() const
	{
		std::string desc("Action: Grid.\n");
		desc.append("Paramerers: ");
		desc.append("\n angle = "); desc.append(std::to_string(_angle));
		desc.append("\n distance = "); desc.append(std::to_string(_dist));
		desc.append("\n line width = "); desc.append(std::to_string(_line_width));
		return desc;
	}

	void CV_Action_Grid::grid(cv::Mat& mat, GridDirection dir) const
	{
		int size_coeff = 2;
		if (mat.empty()) return;
		if (!(_angle > 0 && _angle < 90)) return;
		cv::Size c(mat.rows * size_coeff, mat.cols * size_coeff);
		double rad_angle = _angle * M_PI / 180.0;
		double delta_x = _dist / std::sin(rad_angle);
		double delta_y = _dist / std::cos(rad_angle);
		if (delta_x <= 0) return;
		if (delta_y <= 0) return;
		double tg_alpha = std::tan(rad_angle);
		cv::Point pt1, pt2;
		double x_depth = _offset_x * delta_x;
		double y_depth = _offset_y * delta_y;
		cv::Mat temp(c.width + y_depth, c.height + x_depth, mat.type(), cv::Scalar(255, 255, 255));
		cv::Rect box;
		cv::Scalar color = _color;
		if (mat.channels() == 4)
			color[3] = 0;
		if (dir == GridDirection::Lef2Right)
		{
			box = cv::Rect(x_depth + mat.cols, y_depth + mat.rows, mat.cols, mat.rows);
			mat.copyTo(temp(box));
			pt1.y = 0;
			pt2.x = 0;
			pt1.x = cvRound(c.width + c.height / tg_alpha);
			pt2.y = cvRound(c.height + c.width * tg_alpha);
			while (pt1.x >= 0 || pt2.y >= 0)
			{
				cv::line(temp, pt1, pt2, _color, _line_width, cv::LINE_AA);
				pt1.x = cvRound(pt1.x - delta_x);
				pt2.y = cvRound(pt2.y - delta_y);
			}
		}
		else
		{
			box = cv::Rect(x_depth, y_depth + mat.rows, mat.cols, mat.rows);
			mat.copyTo(temp(box));
			pt1.y = 0;
			pt2.x = c.width;
			pt1.x = cvRound(-c.height / tg_alpha);
			pt2.y = cvRound(c.height + c.width * tg_alpha);
			while (pt1.x <= c.width || pt2.y >= 0)
			{
				cv::line(temp, pt1, pt2, _color, _line_width, cv::LINE_AA);
				pt1.x = cvRound(pt1.x + delta_x);
				pt2.y = cvRound(pt2.y - delta_y);
			}
		}
		mat = temp(box).clone();
	}
}