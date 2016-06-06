#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <QMainWindow>

namespace Ui {
class textEditor;
}

class textEditor : public QMainWindow
{
    Q_OBJECT

public:
    explicit textEditor(QWidget *parent = 0);
    ~textEditor();

private slots:
    void on_actionOpen_triggered();

    void on_actionSave_triggered();

private:
    Ui::textEditor *ui;
};

#endif // TEXTEDITOR_H
