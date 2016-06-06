/********************************************************************************
** Form generated from reading UI file 'texteditor.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTEDITOR_H
#define UI_TEXTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_textEditor
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *EditBox;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *textEditor)
    {
        if (textEditor->objectName().isEmpty())
            textEditor->setObjectName(QStringLiteral("textEditor"));
        textEditor->resize(530, 793);
        actionNew = new QAction(textEditor);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionOpen = new QAction(textEditor);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(textEditor);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        centralWidget = new QWidget(textEditor);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        EditBox = new QTextEdit(centralWidget);
        EditBox->setObjectName(QStringLiteral("EditBox"));

        horizontalLayout->addWidget(EditBox);

        textEditor->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(textEditor);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        textEditor->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(textEditor);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        textEditor->setStatusBar(statusBar);
        menuBar = new QMenuBar(textEditor);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 530, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        textEditor->setMenuBar(menuBar);

        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);

        retranslateUi(textEditor);

        QMetaObject::connectSlotsByName(textEditor);
    } // setupUi

    void retranslateUi(QMainWindow *textEditor)
    {
        textEditor->setWindowTitle(QApplication::translate("textEditor", "textEditor", 0));
        actionNew->setText(QApplication::translate("textEditor", "New", 0));
        actionOpen->setText(QApplication::translate("textEditor", "Open", 0));
        actionSave->setText(QApplication::translate("textEditor", "Save", 0));
        menuFile->setTitle(QApplication::translate("textEditor", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class textEditor: public Ui_textEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTEDITOR_H
