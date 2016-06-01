#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->graphicsView,&CGraphicsView::mouseMoved,this,&MainWindow::updatePosition);
    QObject::connect(ui->graphicsView,&CGraphicsView::mouseClick,this,&MainWindow::updateClick);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updatePosition(QMouseEvent *event)
{
    qDebug() << "MainWindow::updatePosition:" << event->pos();
    QString output = "(" + QString::number(event->x())+ "," +QString::number(event->y())+")";
    ui->positionEdit->setText(output);
}


void MainWindow::updateClick(QMouseEvent *event)
{
    QString output_2 = "(" + QString::number(event->x())+ "," +QString::number(event->y())+")";
    ui->positionEdit_2->setText(output_2);
}

