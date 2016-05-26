/********************************************************************************
** Form generated from reading UI file 'shapes.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAPES_H
#define UI_SHAPES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_shape
{
public:
    QWidget *centralWidget;
    QGraphicsView *ellipsebox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *shape)
    {
        if (shape->objectName().isEmpty())
            shape->setObjectName(QStringLiteral("shape"));
        shape->resize(617, 405);
        centralWidget = new QWidget(shape);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ellipsebox = new QGraphicsView(centralWidget);
        ellipsebox->setObjectName(QStringLiteral("ellipsebox"));
        ellipsebox->setGeometry(QRect(20, 10, 256, 192));
        shape->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(shape);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 617, 20));
        shape->setMenuBar(menuBar);
        mainToolBar = new QToolBar(shape);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        shape->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(shape);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        shape->setStatusBar(statusBar);

        retranslateUi(shape);
        QObject::connect(ellipsebox, SIGNAL(rubberBandChanged(QRect,QPointF,QPointF)), shape, SLOT(addEllipse()));

        QMetaObject::connectSlotsByName(shape);
    } // setupUi

    void retranslateUi(QMainWindow *shape)
    {
        shape->setWindowTitle(QApplication::translate("shape", "shapes", 0));
    } // retranslateUi

};

namespace Ui {
    class shape: public Ui_shape {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAPES_H
