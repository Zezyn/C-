#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

namespace Ui {
class mainwindow;
}

class mainwindow : public QWidget
{
    Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = 0);
    ~mainwindow();
    void setName(const QString &name);
    QString name() const;

private:
    Ui::mainwindow *ui;
};

#endif // MAINWINDOW_H
