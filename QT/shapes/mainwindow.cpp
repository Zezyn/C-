#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::adjustEllipse(int h)
{
    scene=new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    QPen blackPen(Qt::black);
    blackPen.setWidth(4);
    QBrush blueBrush(Qt::blue);

    ellipse = scene->addEllipse(50,50,100,h,blackPen,blueBrush);
}

void MainWindow::editEllipseDeg()
{
    int deg = ui->lineEdit->text().toInt();
    adjustEllipse(deg);
}

void MainWindow::editRectangle()
{
    int deg = ui->lineEdit->text().toInt();
    makeRectangle(deg);
}

void MainWindow::makeRectangle(int size)
{
    scene=new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    QPen blackPen(Qt::black);
    blackPen.setWidth(4);
    QBrush blueBrush(Qt::blue);

    rectangle = scene->addRect(50,50,50,size,blackPen,blueBrush);
}
