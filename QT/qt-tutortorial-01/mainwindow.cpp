#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

mainwindow::mainwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwindow)
{
    ui->setupUi(this);
}

mainwindow::~mainwindow()
{
    delete ui;
}

void mainwindow::setName(const QString &name)
{
    ui->lineEdit->setText(name);
}

QString mainwindow::name() const
{
    return ui->lineEdit->text();
}
