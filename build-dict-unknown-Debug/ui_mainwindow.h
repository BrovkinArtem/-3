/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextBrowser *chose;
    QLineEdit *input;
    QTextBrowser *translation;
    QWidget *layoutWidget;
    QHBoxLayout *buttons;
    QPushButton *okey;
    QPushButton *load;
    QScrollBar *verticalScrollBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(607, 500);
        MainWindow->setMinimumSize(QSize(600, 500));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        chose = new QTextBrowser(centralWidget);
        chose->setObjectName(QString::fromUtf8("chose"));
        chose->setGeometry(QRect(20, 60, 171, 421));
        input = new QLineEdit(centralWidget);
        input->setObjectName(QString::fromUtf8("input"));
        input->setGeometry(QRect(20, 20, 341, 31));
        translation = new QTextBrowser(centralWidget);
        translation->setObjectName(QString::fromUtf8("translation"));
        translation->setGeometry(QRect(200, 60, 381, 421));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(380, 20, 201, 29));
        buttons = new QHBoxLayout(layoutWidget);
        buttons->setSpacing(6);
        buttons->setContentsMargins(11, 11, 11, 11);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        buttons->setContentsMargins(0, 0, 0, 0);
        okey = new QPushButton(layoutWidget);
        okey->setObjectName(QString::fromUtf8("okey"));

        buttons->addWidget(okey);

        load = new QPushButton(layoutWidget);
        load->setObjectName(QString::fromUtf8("load"));

        buttons->addWidget(load);

        verticalScrollBar = new QScrollBar(centralWidget);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(560, 60, 16, 160));
        verticalScrollBar->setOrientation(Qt::Vertical);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        okey->setText(QApplication::translate("MainWindow", "\320\236\320\272", nullptr));
        load->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
