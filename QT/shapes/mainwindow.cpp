#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene=new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    QPen blackPen(Qt::black);
    blackPen.setWidth(4);
    QBrush blueBrush(Qt::blue);

    ellipse = scene->addEllipse(50,50,100,100,blackPen,blueBrush);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::adjustEllipse(int h)
{
    QPen blackPen(Qt::black);
    blackPen.setWidth(4);
    QBrush blueBrush(Qt::blue);
    ellipse->
/*    scene = new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    QPen pen;
    pen.setWidth(2);
    QBrush brush(QColor(155,150,150));
    ellipse = scene->addEllipse(0,0,w,h,pen,brush);
    ellipse->setFlag(QGraphicsItem::ItemIsMovable,true);
*/}

void MainWindow::updateDeg()
{
    int deg = ui->lineEdit->text().toInt();
    adjustEllipse(deg);
}
