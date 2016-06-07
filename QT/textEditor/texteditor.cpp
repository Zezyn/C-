#include "texteditor.h"
#include "ui_texteditor.h"
//#include <QDebug>
#include <QString>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

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
    QString str;
    QString filename = QFileDialog::getOpenFileName(this, tr("Open File"), "c://", "Text File (*.txt)");
    QFile file(filename);
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream in(&file);
    in>>str>>endl;
    ui->EditBox->setText(in.readAll());
    file.flush();
    file.close();
}

void textEditor::on_actionSave_triggered()
{
    QString str = ui->EditBox->toPlainText();
    QString filename = QFileDialog::getSaveFileName();
    QFile file(filename);
    file.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream out(&file);
    out<<str<<endl;
    file.flush();
    file.close();
}

void textEditor::on_actionNew_triggered()
{
    ui->EditBox->clear();
}
