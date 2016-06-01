#ifndef CGRAPHICSVIEW_H
#define CGRAPHICSVIEW_H

#include <QGraphicsView>


class CGraphicsView : public QGraphicsView
{
    Q_OBJECT

public:
    CGraphicsView();
    CGraphicsView(QWidget *parent = Q_NULLPTR);

public slots:
    void mouseMoveEvent(QMouseEvent*);
    void mousePressEvent(QMouseEvent*);

signals:
    void mouseMoved(QMouseEvent*);
    void mouseClick(QMouseEvent *);
};

#endif // CGRAPHICSVIEW_H
