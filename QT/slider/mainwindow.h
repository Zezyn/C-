#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>

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
    void updateEditBox(int);
    void updateRed(int);
    void updateGreen(int);
    void updateBlue(int);
    void updateRedEdit();
    void updateGreenEdit();
    void updateBlueEdit();



private:
    Ui::MainWindow *ui;
    QColor currentColor;
    void updateColor(QLineEdit *edit,int colorValue,QColor color);
};

#endif // MAINWINDOW_H
