#include "stdafx.h"
#include "OpenCVShop.h"
#include "CVActionViewFactory.h"
#include "CVActionGaussianBlurView.h"
#include "QT_CV.h"
#include "CVFilterToolButton.h"
#include "CVMorphologyToolButton.h"
#include "CVGeomTransToolButton.h"
#include "CVMiscellaneousToolButton.h"
#include "CVHistToolButton.h"
#include "CVFeatureDetToolButton.h"

OpenCVShop::OpenCVShop(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.actionListView->setStyleSheet("QListView::item { border-bottom: 1px solid black; }");
	_imageScene = std::unique_ptr<QGraphicsScene>(new QGraphicsScene(this));
	allowActions(false);
	addToolButton(new CVFilterToolButton(this));
	addToolButton(new CVMorphologyToolButton(this));
	addToolButton(new CVGeomTransToolButton(this));
	addToolButton(new CVMiscellaneousToolButton(this));
	addToolButton(new CVHistToolButton(this));
	addToolButton(new CVFeatureDetToolButton(this));
}


OpenCVShop::~OpenCVShop()
{
	_imageScene->clear();
	ui.mainToolBar->clear();
}

void OpenCVShop::allowActions(bool allow)
{
	ui.actionSave->setEnabled(allow);
	ui.actionRedo->setEnabled(allow);
	ui.actionUndo->setEnabled(allow);
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
	_imageScene->clear();
	_imageScene->addPixmap(QPixmap::fromImage(img));
	ui.graphicsView->setScene(_imageScene.get());
	_listModel = std::unique_ptr<QStringListModel>(new QStringListModel(_session->description()));
	ui.actionListView->setModel(_listModel.get());
}

void OpenCVShop::addToolButton(CVActionToolButton* toolButton)
{
	connect(toolButton, SIGNAL(cvActionToolButtonTriggeredAction(core::CV_Action_Type)), this, SLOT(_on_cvActionToolbutton_triggeredAction(core::CV_Action_Type)));
	ui.mainToolBar->addWidget(toolButton);
}

void OpenCVShop::_on_cvActionToolbutton_triggeredAction(core::CV_Action_Type type)
{
	_actionView = CVActionViewFactory::sharedFactory().cv_action_view(type, this, _session->topImage());
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
		QImage rgbImg =	img.convertToFormat(QImage::Format::Format_RGB888);
		qDebug() << rgbImg.format() << " " << rgbImg.depth() << '\n';
		if (img.isNull() == false)
		{
			reset();
			initSession(rgbImg);
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

void OpenCVShop::on_actionExit_triggered()
{
	this->close();
}

void OpenCVShop::closeEvent(QCloseEvent* closeEvent)
{
	if (_session.get() != NULL)
		saveAndExit(closeEvent);
	else
		closeEvent->accept();
}

void OpenCVShop::saveAndExit(QCloseEvent* closeEvent)
{
	int shouldSave = alertSaveChanges(); 
	switch (shouldSave) {
	case QMessageBox::Save:
	{
		// Save was clicked
		QString filePath = alertSaveFileName();
		if (filePath.isEmpty())
			closeEvent->ignore();
		else {
			_session->topImage().save(filePath);
			closeEvent->accept();
		}
	}
		break;
	case QMessageBox::Discard:
		// Don't Save was clicked
		closeEvent->accept();
		break;
	case QMessageBox::Cancel:
		// Cancel was clicked
		closeEvent->ignore();
		break;
	default:
		// should never be reached
		break;
	}
}

int OpenCVShop::alertSaveChanges()
{
	QMessageBox msgBox;
	msgBox.setText("The file has been modified.");
	msgBox.setInformativeText("Do you want to save your changes?");
	msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
	msgBox.setDefaultButton(QMessageBox::Save);
	return msgBox.exec();
}

QString OpenCVShop::alertNewFileName()
{
	return QFileDialog::getOpenFileName(this,
		tr("Choose Image"), QDir::homePath(), tr("Image Files (*.png *.jpg *.bmp)"));
}

QString OpenCVShop::alertSaveFileName()
{
	QString filters("JPG (*.jpg);;PNG (*.png);;BMP (*.bmp)");
	QString defaultFilter("JPG (*.jpg)");
	return QFileDialog::getSaveFileName(0, "Save image", QDir::homePath(), filters, &defaultFilter);
}