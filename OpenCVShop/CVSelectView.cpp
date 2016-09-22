#include "stdafx.h"
#include "CVSelectView.h"

CVSelectView::CVSelectView(int height, int width, unsigned int sides, PinType pin, QWidget *parent)
	: QFrame(parent)
{
	setMinimumSize(width, height);
	setMaximumSize(width, height);
	setFrameStyle(QFrame::Sunken | QFrame::StyledPanel);
	setAcceptDrops(true);

	_polyLabel = new QLabel(this);
	polyColor = QColor(255, 0, 0, 127);
	fillColor = QColor(127, 127, 127, 127);
	polyWidth = 3;

	_staticPin = QPixmap("../OpenCVShop/Resources/pin.png");
	_shadowPin = _staticPin;
	QPainter painter;
	painter.begin(&_shadowPin);
	painter.fillRect(_staticPin.rect(), QColor(127, 127, 127, 127));
	painter.end();
	QVector<QPoint> initialPos = initialPositioning(sides, width, height);

	for (int i = 0; i < sides; i++)
	{
		QLabel *pin = new QLabel(_polyLabel);
		pin->setPixmap(_staticPin);
		pin->move(initialPos[i]);
		pin->show();
		pin->setAttribute(Qt::WA_DeleteOnClose);
		_pins.push_back(pin);
	}

	_drawRect();
}

CVSelectView::CVSelectView(QPixmap background, unsigned int sides, PinType pin, QWidget* parent)
	: CVSelectView(background.height(), background.width(), sides, pin, parent)
{
	_backLabel = new QLabel(this);
	_backLabel->setPixmap(background);
	_polyLabel->raise();
}

CVSelectView::~CVSelectView()
{
	for (int i = 0; i < _pins.size(); i++)
	{
		delete _pins[i];
		_pins[i] = NULL;
	}
	if (_polyLabel != NULL)
	{
		delete _polyLabel;
		_polyLabel = NULL;
	}
	if (_backLabel != NULL)
	{
		delete _backLabel;
		_backLabel = NULL;
	}
}

void CVSelectView::dragEnterEvent(QDragEnterEvent *event)
{
	if (event->mimeData()->hasFormat("application/x-dnditemdata")) {
		if (event->source() == this) {
			event->setDropAction(Qt::MoveAction);
			event->accept();
		}
		else {
			event->acceptProposedAction();
		}
	}
	else {
		event->ignore();
	}
}

void CVSelectView::dragMoveEvent(QDragMoveEvent *event)
{
	if (event->mimeData()->hasFormat("application/x-dnditemdata")) {
		if (event->source() == this) {
			event->setDropAction(Qt::MoveAction);
			event->accept();
		}
		else {
			event->acceptProposedAction();
		}
	}
	else {
		event->ignore();
	}
}

void CVSelectView::dropEvent(QDropEvent *event)
{
	if (event->mimeData()->hasFormat("application/x-dnditemdata")) {
		QByteArray itemData = event->mimeData()->data("application/x-dnditemdata");
		QDataStream dataStream(&itemData, QIODevice::ReadOnly);

		int childIndex;
		QPoint offset;
		dataStream >> childIndex >> offset;

		std::vector<std::pair<int, int>> poly = polygon();
		poly[childIndex] = _fromQPoint(event->pos() - offset);

		if (this->validatePolygon != nullptr && !this->validatePolygon(poly))
		{
			event->ignore();
			return;
		}
		_pins[childIndex]->move(event->pos() - offset);
		_pins[childIndex]->show();
		_pins[childIndex]->setPixmap(_staticPin);
		if (event->source() == this) {
			event->setDropAction(Qt::MoveAction);
			event->accept();
		}
		else {
			event->acceptProposedAction();
		}
		_drawRect();
	}
	else {
		event->ignore();
	}
}

void CVSelectView::mousePressEvent(QMouseEvent *event)
{
	QLabel *child = static_cast<QLabel*>(childAt(event->pos()));
	if (!child)
		return;
	if (!_pins.contains(child))
		return;

	int childIndex = _pins.indexOf(child);
	QByteArray itemData;
	QDataStream dataStream(&itemData, QIODevice::WriteOnly);
	dataStream << childIndex << QPoint(event->pos() - child->pos());

	QMimeData *mimeData = new QMimeData;
	mimeData->setData("application/x-dnditemdata", itemData);

	QDrag *drag = new QDrag(this);
	drag->setMimeData(mimeData);
	drag->setPixmap(_staticPin);
	drag->setHotSpot(event->pos() - child->pos());

	child->setPixmap(_shadowPin);

	if (drag->exec(Qt::CopyAction | Qt::MoveAction, Qt::CopyAction) == Qt::MoveAction) {
	}
	else {
		child->show();
		child->setPixmap(_staticPin);
	}
}

void CVSelectView::_drawRect()
{
	QPolygon poly(_polygon());
	QPixmap pix(this->frameSize());
	pix.fill(Qt::transparent);
	QPainter painter(&pix);
	painter.setPen(QPen(polyColor, polyWidth));
	painter.drawConvexPolygon(poly);
	QPainterPath path;
	path.addPolygon(poly);
	painter.fillPath(path, fillColor);
	_polyLabel->setPixmap(pix);
}

std::vector<std::pair<int, int>> CVSelectView::_fromQVector(const QVector<QPoint>& qvec) const
{
	std::vector<std::pair<int, int>> vec(qvec.size());
	for (int i = 0; i < qvec.size(); i++)
		vec[i] = _fromQPoint(qvec[i]);
	return vec;
}

std::vector<std::pair<int, int>> CVSelectView::polygon() const
{
	return _fromQVector(_polygon());
}

QVector<QPoint> CVSelectView::_polygon() const
{
	QVector<QPoint> points;
	for (int i = 0; i < _pins.size(); i++)
	{
		points.push_back(_pins[i]->frameGeometry().center());
	}
	return points;
}

QVector<QPoint> CVSelectView::initialPositioning(unsigned int sides, int width, int height) const
{
	QVector<QPoint> pos(sides);
	if (sides == 2)
	{
		pos[0] = QPoint(0, 0);
		pos[1] = QPoint(width - 5, height - 5);
	}
	else if (sides == 3)
	{
		pos[0] = QPoint(width / 2, height);
		pos[1] = QPoint(0, height - 1);
		pos[2] = QPoint(width - 1, height - 1);
	}
	else if (sides == 4)
	{
		pos[0] = QPoint(width / 4, height / 4);
		pos[1] = QPoint(width / 4, 3 * height / 4);
		pos[2] = QPoint(3 * width / 4, height / 4);
		pos[3] = QPoint(3 * width / 4, 3 * height / 4);
	}
	return pos;
}
