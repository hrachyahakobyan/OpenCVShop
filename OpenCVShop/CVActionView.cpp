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
	_res = _actionWrapper.applyAction(*_action);
	_imageScene->clear();
	_imageScene->addPixmap(QPixmap::fromImage(_res));
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
