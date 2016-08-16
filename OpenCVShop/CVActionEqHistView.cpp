#include "stdafx.h"
#include "CVActionEqHistView.h"

CVActionEqHistView::CVActionEqHistView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src) :
CVActionView(parent, std::move(action), src)
{
	ui.setupUi(this);
	ui.graphicsView->setScene(_imageScene.get());
}

CVActionEqHistView::~CVActionEqHistView()
{

}

void CVActionEqHistView::update()
{
	CVActionView::update();
	ui.graphicsView->setScene(_imageScene.get());
}
