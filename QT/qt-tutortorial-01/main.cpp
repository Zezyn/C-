#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainwindow w;
    w.setName("Martin Hernandez");
    w.show();

    return a.exec();
}
