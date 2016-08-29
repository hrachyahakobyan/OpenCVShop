#include "stdafx.h"
#include "CVActionEqHistView.h"

CVActionEqHistView::CVActionEqHistView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper) :
CVActionView(parent, std::move(wrapper))
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
