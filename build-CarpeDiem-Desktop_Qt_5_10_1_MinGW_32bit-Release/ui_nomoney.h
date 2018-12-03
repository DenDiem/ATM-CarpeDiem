/********************************************************************************
** Form generated from reading UI file 'nomoney.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOMONEY_H
#define UI_NOMONEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_NoMoney
{
public:
    QLabel *label;

    void setupUi(QDialog *NoMoney)
    {
        if (NoMoney->objectName().isEmpty())
            NoMoney->setObjectName(QStringLiteral("NoMoney"));
        NoMoney->resize(640, 480);
        NoMoney->setStyleSheet(QStringLiteral("background-color: rgb(11, 58, 151);"));
        label = new QLabel(NoMoney);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 541, 171));
        label->setStyleSheet(QLatin1String("font: 75 20pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(NoMoney);

        QMetaObject::connectSlotsByName(NoMoney);
    } // setupUi

    void retranslateUi(QDialog *NoMoney)
    {
        NoMoney->setWindowTitle(QApplication::translate("NoMoney", "Dialog", nullptr));
        label->setText(QApplication::translate("NoMoney", "The ATM is temporarily out of work", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoMoney: public Ui_NoMoney {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOMONEY_H
