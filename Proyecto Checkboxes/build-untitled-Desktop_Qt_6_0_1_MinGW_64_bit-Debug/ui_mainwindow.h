/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QCheckBox *check1;
    QCheckBox *check2;
    QLabel *etiquetaSeleccion;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(401, 124);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        check1 = new QCheckBox(centralwidget);
        check1->setObjectName(QString::fromUtf8("check1"));
        check1->setGeometry(QRect(30, 30, 70, 17));
        check2 = new QCheckBox(centralwidget);
        check2->setObjectName(QString::fromUtf8("check2"));
        check2->setGeometry(QRect(30, 60, 70, 17));
        etiquetaSeleccion = new QLabel(centralwidget);
        etiquetaSeleccion->setObjectName(QString::fromUtf8("etiquetaSeleccion"));
        etiquetaSeleccion->setGeometry(QRect(150, 50, 151, 16));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        check1->setText(QCoreApplication::translate("MainWindow", "Opci\303\263n 1", nullptr));
        check2->setText(QCoreApplication::translate("MainWindow", "Opci\303\263n 2", nullptr));
        etiquetaSeleccion->setText(QCoreApplication::translate("MainWindow", "Seleccionadas: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
