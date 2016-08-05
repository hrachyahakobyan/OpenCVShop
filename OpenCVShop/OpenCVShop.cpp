#include "stdafx.h"
#include "OpenCVShop.h"

OpenCVShop::OpenCVShop(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	_imageScene = new QGraphicsScene(this);
	_image.load("../data/img.jpg");
	_imageScene->addPixmap(QPixmap::fromImage(_image));
	ui.graphicsView->setScene(_imageScene);
}

OpenCVShop::~OpenCVShop()
{
	_imageScene->clear();
	delete _imageScene;
}

void OpenCVShop::on_redoButton_clicked()
{
	qDebug() << "Redo button clicked \n";
}

void OpenCVShop::on_undoButton_clicked()
{
	qDebug() << "Undo button clicked \n";
}

void OpenCVShop::on_actionGaussian_triggered()
{
	qDebug() << "Action Gaussian Blur clicked \n";
}

void OpenCVShop::on_actionEx_morphology_triggered()
{
	qDebug() << "Action Ex morph clicked \n";
}

