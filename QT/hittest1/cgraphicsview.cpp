#include "cgraphicsview.h"
#include<QMouseEvent>
#include<QDebug>

CGraphicsView::CGraphicsView()
{

}

CGraphicsView::CGraphicsView(QWidget *parent) :
   QGraphicsView(parent)
{

}

void CGraphicsView::mouseMoveEvent(QMouseEvent *event)
{
    QGraphicsView::mouseMoveEvent(event);
    //qDebug() << "mouse moved:" << "("<<event->x() << "," << event->y() <<")";
    emit mouseMoved(event);
}

void CGraphicsView::mousePressEvent(QMouseEvent * event)
{
    QGraphicsView::mousePressEvent(event);
    qDebug() << "mouse pressed:" << "("<<event->x() << "," << event->y() <<")";
    emit mouseClick(event);
}
