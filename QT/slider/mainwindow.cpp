#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    currentColor = QColor(255,255,255);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::updateEditBox(int pos)
{
    ui->redEdit->setText(QString::number(pos));
}

void MainWindow::updateRed(int pos)
{
    currentColor.setRed(pos);
    updateColor(ui->redEdit,pos,currentColor);
}

void MainWindow::updateGreen(int pos)
{
    currentColor.setGreen(pos);
    updateColor(ui->greenEdit,pos,currentColor);
}

void MainWindow::updateBlue(int pos)
{
    currentColor.setBlue(pos);
    updateColor(ui->blueEdit,pos,currentColor);
}

void MainWindow::updateColor(QLineEdit *edit,int colorValue,QColor color)
{
    edit->setText(QString::number(colorValue));
    QPalette palette = ui->colorLabel->palette();
    palette.setColor(ui->colorLabel->backgroundRole(), color);
    ui->colorLabel->setPalette(palette);
}

void MainWindow::updateRedEdit()
{
    int value = ui->redEdit->text().toInt();
    updateRed(value);
}

void MainWindow::updateGreenEdit()
{
    int value = ui->greenEdit->text().toInt();
    updateBlue(value);
}

void MainWindow::updateBlueEdit()
{
    int value = ui->blueEdit->text().toInt();
    updateGreen(value);
}
