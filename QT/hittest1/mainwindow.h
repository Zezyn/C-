#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void updatePosition(QMouseEvent*);
    void updateClick(QMouseEvent*);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
