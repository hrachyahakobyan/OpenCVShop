#include "stdafx.h"
#include "CVActionCropView.h"
#include "CV_Action_Crop.h"
#include "CVSelectView.h"

CVActionCropView::CVActionCropView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper) :
CVActionView(parent, std::move(wrapper))
{
	ui.setupUi(this);
	ui.graphicsView->setScene(_imageScene.get());
	_cropAction = dynamic_cast<core::CV_Action_Crop*>(_actionWrapper->_action.get());
	assert(_cropAction != NULL);
	QImage img = QtOcv::mat2Image(_actionWrapper->result().mat());
	QPixmap pix = QPixmap::fromImage(img);
	_selectView = std::unique_ptr<CVSelectView>(new CVSelectView(pix));
	_selectView->validatePolygon = this->isValidContour;
	ui.graphicsWidget->layout()->addWidget(_selectView.get());
}

CVActionCropView::~CVActionCropView()
{

}

void CVActionCropView::update()
{
	std::vector<std::pair<int, int>> poly = _selectView->polygon();
	_cropAction->setContour(poly);
	CVActionView::update();
	ui.graphicsView->setScene(_imageScene.get());
}

void CVActionCropView::reset()
{
	CVActionView::reset();
	ui.graphicsView->setScene(_imageScene.get());
}

bool CVActionCropView::isValidContour(const std::vector<std::pair<int, int>>& contour)
{
	std::vector<cv::Point> cvContour(4);
	for (int i = 0; i < contour.size(); i++)
		cvContour[i] = cv::Point(contour[i].first, contour[i].second);
	return cv::isContourConvex(cvContour);
}