#ifndef CVSelectView_H
#define CVSelectView_H

enum PinType{ Square, Circle, Triangle };

class CVSelectView : public QFrame
{
	Q_OBJECT

public:
	typedef bool(*ValidPolygon)(const std::vector<std::pair<int, int>>&);
	ValidPolygon validatePolygon = nullptr;
	CVSelectView(int height, int width, unsigned int sides = 4, PinType = Square, QWidget *parent = 0);
	CVSelectView(QPixmap background, unsigned int sides = 4, PinType = Square, QWidget *parent = 0);
	~CVSelectView();
public:
	QColor polyColor;
	QColor fillColor;
	int polyWidth;
	std::vector<std::pair<int, int>> polygon() const;
protected:
	void dragEnterEvent(QDragEnterEvent  *event) Q_DECL_OVERRIDE;
	void dragMoveEvent(QDragMoveEvent *event) Q_DECL_OVERRIDE;
	void dropEvent(QDropEvent *event) Q_DECL_OVERRIDE;
	void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
	QVector<QPoint> initialPositioning(unsigned int sides, int width, int height) const;
private:
	QList<QLabel*> _pins;
	QLabel* _polyLabel;
	QLabel* _backLabel;
	QPixmap _staticPin;
	QPixmap _shadowPin;
private:
	void _drawRect();
	QVector<QPoint> _polygon() const;
	std::vector<std::pair<int, int>> _fromQVector(const QVector<QPoint>&) const;
	std::pair<int, int> _fromQPoint(QPoint pt) const { return std::make_pair(pt.x(), pt.y()); }
};

#endif // CVSelectView_H
