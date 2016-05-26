#include "mainwindow.h"
#include "ui_mainwindow.h"

const double PI = 3.14;

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

void MainWindow::comparePizzas()
{
    //calc the area of the round and square pizzas
    //get the price per sq in. for each of the pizzas
    //compare the price per sq in
    //smaller of the 2 is the best deal

    //round pizza variables
    double diameter = ui->rnd_diam->text().toDouble();
    double rnd_price = ui->rnd_price->text().toDouble();
    double rnd_cost_per_inch = rnd_price / (PI * std::pow(diameter / 2,2));

    //rectangle pizza variables
    double rec_length = ui->rec_length->text().toDouble();
    double rec_width = ui->rec_width->text().toDouble();
    double rec_price = ui->rec_price->text().toDouble();
    double rec_cost_per_inch = rec_price / (rec_length * rec_width);

    if(rnd_cost_per_inch < rec_cost_per_inch)
    {
        ui->result_label->setText("The round pizza is the best deal");
    }
    else if(rnd_cost_per_inch > rec_cost_per_inch)
    {
        ui->result_label->setText("The Rectangle pizza is the best deal");
    }
    else
    {
        ui->result_label->setText("The 2 pizzas are of equal value");
    }
}
