#include "stdafx.h"
#include "OpenCVShop.h"
#include "CV_Action_Factory.h"
#include "CVActionGaussianBlurView.h"
#include "QT_CV.h"
#include "CVFilterToolButton.h"

OpenCVShop::OpenCVShop(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.actionListView->setStyleSheet("QListView::item { border-bottom: 1px solid black; }");
	_imageScene = std::unique_ptr<QGraphicsScene>(new QGraphicsScene(this));
	allowActions(false);
	CVFilterToolButton* filterToolButton = new CVFilterToolButton(this);
	connect(filterToolButton, SIGNAL(cvActionToolButtonTriggeredAction(core::CV_Action_Type)), this, SLOT(_on_cvActionToolbutton_triggeredAction(core::CV_Action_Type)));
	ui.mainToolBar->addWidget(filterToolButton);
}

OpenCVShop::~OpenCVShop()
{
	_imageScene->clear();
}

void OpenCVShop::allowActions(bool allow)
{
	ui.actionSave->setEnabled(allow);
	ui.actionRedo->setEnabled(allow);
	ui.actionUndo->setEnabled(allow);
	ui.actionGaussian->setEnabled(allow);
	ui.filterGaussianButton->setEnabled(allow);
	ui.mainToolBar->setEnabled(allow);
}

void OpenCVShop::initSession(const QImage& source)
{
	_session = std::unique_ptr<core::CV_Session>(new core::CV_Session(source));
}

void OpenCVShop::reset()
{
	_session.reset();
	ui.actionListView->reset();
	_imageScene->clear();
	ui.graphicsView->viewport()->update();
	_listModel.reset();
}

void OpenCVShop::updateUI()
{
	QImage img = _session->topImage();
	_imageScene->addPixmap(QPixmap::fromImage(img));
	ui.graphicsView->setScene(_imageScene.get());
	_listModel = std::unique_ptr<QStringListModel>(new QStringListModel(_session->description()));
	ui.actionListView->setModel(_listModel.get());
}

void OpenCVShop::_on_cvActionToolbutton_triggeredAction(core::CV_Action_Type type)
{
	auto action = core::CV_Action_Factory::sharedFactory().cv_action(type);
	_actionView = std::unique_ptr<CVActionView>(new CVActionGaussianBlurView(this, std::move(action), _session->topImage()
		));
	connectActionView();
	_actionView->exec();
}

void OpenCVShop::connectActionView()
{
	connect(_actionView.get(), SIGNAL(cvActionViewDidCommit(const QImage&, const QString&)), this, SLOT(_on_cvActionView_commited(const QImage&, const QString&)));
	connect(_actionView.get(), SIGNAL(cvActionViewDidCancel(const QString&)), this, SLOT(_on_cvActionView_cancelled(const QString&)));
}

void OpenCVShop::on_actionUndo_triggered()
{
	_session->undo();
	updateUI();
}

void OpenCVShop::on_actionRedo_triggered()
{
	_session->redo();
	updateUI();
}

void OpenCVShop::_on_cvActionView_commited(const QImage& img, const QString& action)
{
	_session->push(img, action);
	updateUI();
}

void OpenCVShop::_on_cvActionView_cancelled(const QString&)
{
}

void OpenCVShop::on_actionNew_triggered()
{
	QString fileName = QFileDialog::getOpenFileName(this,
		tr("Choose Image"), QDir::homePath(), tr("Image Files (*.png *.jpg *.bmp)"));
	if (fileName.length() > 0)
	{
		QImage img(fileName);
		if (img.isNull() == false)
		{
			reset();
			initSession(img);
			updateUI();
			allowActions(true);
		}
	}
}

void OpenCVShop::on_actionSave_triggered()
{
	QString filters("JPG (*.jpg);;PNG (*.png);;BMP (*.bmp)");
	QString defaultFilter("JPG (*.jpg)");
	QString saveFile = QFileDialog::getSaveFileName(0, "Save image", QDir::homePath(), filters, &defaultFilter);
	_session->topImage().save(saveFile);
}