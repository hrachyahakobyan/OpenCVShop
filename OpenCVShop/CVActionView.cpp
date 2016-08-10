#include "stdafx.h"
#include "CVActionView.h"


CVActionView::CVActionView(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src)
	: QDialog(parent), _action(std::move(action)), _actionWrapper(src), _src(src), _res(src)
{
	_imageScene = std::unique_ptr<QGraphicsScene>(new QGraphicsScene(this));
	_imageScene->addPixmap(QPixmap::fromImage(_src));
}

CVActionView::~CVActionView()
{
	_imageScene->clear();
}

void CVActionView::update()
{
	QString error;
	QImage tempImg = _actionWrapper.applyAction(*_action, error);
	if (error.isEmpty())
	{
		_res = tempImg;
		_imageScene->clear();
		_imageScene->addPixmap(QPixmap::fromImage(_res));
	}
	else
	{
		QMessageBox::critical(0, "Error", error);
	}
}

void CVActionView::on_cancelButton_clicked()
{
	Q_EMIT cvActionViewDidCancel(QString(_action->description().c_str()));
	QDialog::reject();
}

void CVActionView::on_okButton_clicked()
{
	Q_EMIT cvActionViewDidCommit(_res, QString(_action->description().c_str()));
	QDialog::accept();
}
