#include "texteditor.h"
#include "ui_texteditor.h"
#include <QDebug>


#include <QFileDialog>

textEditor::textEditor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::textEditor)
{
    ui->setupUi(this);
}

textEditor::~textEditor()
{
    delete ui;
}

void textEditor::on_actionOpen_triggered()
{
    QFileDialog::getOpenFileName();
}

void textEditor::on_actionSave_triggered()
{
    QFileDialog::getSaveFileName();
}
