#include "stdafx.h"
#include "CVActionView.h"


CVActionView::CVActionView(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper)
	: QDialog(parent), _actionWrapper(std::move(wrapper))
{
	_imageScene = std::unique_ptr<QGraphicsScene>(new QGraphicsScene(this));
	QImage img = QtOcv::mat2Image(_actionWrapper->source().mat());
	_imageScene->addPixmap(QPixmap::fromImage(img));
}

CVActionView::~CVActionView()
{
	_imageScene->clear();
}

void CVActionView::update()
{
	QString error;
    _actionWrapper->applyAction(error);
	if (error.isEmpty())
	{
		_imageScene->clear();
		QImage img = QtOcv::mat2Image(_actionWrapper->result().mat());
		_imageScene->addPixmap(QPixmap::fromImage(img));
	}
	else
	{
		QMessageBox::critical(0, "Error", error);
	}
}

void CVActionView::reset()
{
	_actionWrapper->reset();
	_imageScene->clear();
	QImage img = QtOcv::mat2Image(_actionWrapper->result().mat());
	_imageScene->addPixmap(QPixmap::fromImage(img));
}

void CVActionView::on_cancelButton_clicked()
{
	Q_EMIT cvActionViewDidCancel(QString(_actionWrapper->_action->description().c_str()));
	QDialog::reject();
}

void CVActionView::on_okButton_clicked()
{
	Q_EMIT cvActionViewDidCommit(_actionWrapper->result(), QString(_actionWrapper->_action->description().c_str()));
	QDialog::accept();
}

void CVActionView::on_updateButton_clicked()
{
	update();
}

void CVActionView::on_resetButton_clicked()
{
	reset();
}
