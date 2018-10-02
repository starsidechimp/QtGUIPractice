/********************************************************************************
** Form generated from reading UI file 'QtGUIPractice.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIPRACTICE_H
#define UI_QTGUIPRACTICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGUIPracticeClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGUIPracticeClass)
    {
        if (QtGUIPracticeClass->objectName().isEmpty())
            QtGUIPracticeClass->setObjectName(QStringLiteral("QtGUIPracticeClass"));
        QtGUIPracticeClass->resize(600, 400);
        menuBar = new QMenuBar(QtGUIPracticeClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtGUIPracticeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGUIPracticeClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGUIPracticeClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtGUIPracticeClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtGUIPracticeClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtGUIPracticeClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGUIPracticeClass->setStatusBar(statusBar);

        retranslateUi(QtGUIPracticeClass);

        QMetaObject::connectSlotsByName(QtGUIPracticeClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtGUIPracticeClass)
    {
        QtGUIPracticeClass->setWindowTitle(QApplication::translate("QtGUIPracticeClass", "QtGUIPractice", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGUIPracticeClass: public Ui_QtGUIPracticeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIPRACTICE_H
