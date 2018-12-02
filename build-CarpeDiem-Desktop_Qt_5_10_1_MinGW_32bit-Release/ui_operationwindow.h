/********************************************************************************
** Form generated from reading UI file 'operationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATIONWINDOW_H
#define UI_OPERATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_OperationWindow
{
public:
    QGroupBox *boxOp;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *lBalance;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *lName;
    QLabel *label_6;
    QLabel *lCredit;

    void setupUi(QDialog *OperationWindow)
    {
        if (OperationWindow->objectName().isEmpty())
            OperationWindow->setObjectName(QStringLiteral("OperationWindow"));
        OperationWindow->resize(640, 480);
        OperationWindow->setStyleSheet(QStringLiteral("background-color: rgb(11, 58, 151);"));
        boxOp = new QGroupBox(OperationWindow);
        boxOp->setObjectName(QStringLiteral("boxOp"));
        boxOp->setGeometry(QRect(260, 220, 341, 191));
        boxOp->setStyleSheet(QLatin1String("\n"
"color: rgb(246, 255, 255);"));
        gridLayout = new QGridLayout(boxOp);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton = new QPushButton(boxOp);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(1, 174, 238);\n"
"color: rgb(246, 255, 255);"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(boxOp);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(1, 174, 238);\n"
"color: rgb(246, 255, 255);"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(boxOp);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QLatin1String("background-color: rgb(1, 174, 238);\n"
"color: rgb(246, 255, 255);"));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_6 = new QPushButton(boxOp);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setStyleSheet(QLatin1String("background-color: rgb(1, 174, 238);\n"
"color: rgb(246, 255, 255);"));

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_5 = new QPushButton(boxOp);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setStyleSheet(QLatin1String("background-color: rgb(1, 174, 238);\n"
"color: rgb(246, 255, 255);"));

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_4 = new QPushButton(boxOp);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QLatin1String("background-color: rgb(1, 174, 238);\n"
"color: rgb(246, 255, 255);"));

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        groupBox = new QGroupBox(OperationWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 40, 201, 161));
        groupBox->setStyleSheet(QLatin1String("\n"
"color: rgb(246, 255, 255);"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lBalance = new QLabel(groupBox);
        lBalance->setObjectName(QStringLiteral("lBalance"));
        lBalance->setStyleSheet(QStringLiteral("color:rgb(144, 255, 103)"));

        gridLayout_2->addWidget(lBalance, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        lName = new QLabel(groupBox);
        lName->setObjectName(QStringLiteral("lName"));
        lName->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        gridLayout_2->addWidget(lName, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        lCredit = new QLabel(groupBox);
        lCredit->setObjectName(QStringLiteral("lCredit"));
        lCredit->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        gridLayout_2->addWidget(lCredit, 2, 1, 1, 1);


        retranslateUi(OperationWindow);

        pushButton_4->setDefault(false);


        QMetaObject::connectSlotsByName(OperationWindow);
    } // setupUi

    void retranslateUi(QDialog *OperationWindow)
    {
        OperationWindow->setWindowTitle(QApplication::translate("OperationWindow", "Dialog", nullptr));
        boxOp->setTitle(QApplication::translate("OperationWindow", "Operations", nullptr));
        pushButton->setText(QApplication::translate("OperationWindow", "Get Cash", nullptr));
        pushButton_2->setText(QApplication::translate("OperationWindow", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("OperationWindow", "PushButton", nullptr));
        pushButton_6->setText(QApplication::translate("OperationWindow", "PushButton", nullptr));
        pushButton_5->setText(QApplication::translate("OperationWindow", "PushButton", nullptr));
        pushButton_4->setText(QApplication::translate("OperationWindow", "History", nullptr));
        groupBox->setTitle(QApplication::translate("OperationWindow", "Profile", nullptr));
        lBalance->setText(QApplication::translate("OperationWindow", "[balance]", nullptr));
        label_2->setText(QApplication::translate("OperationWindow", "Welcome:", nullptr));
        label_4->setText(QApplication::translate("OperationWindow", "Your balance:", nullptr));
        lName->setText(QApplication::translate("OperationWindow", "[full name]", nullptr));
        label_6->setText(QApplication::translate("OperationWindow", "credit limit", nullptr));
        lCredit->setText(QApplication::translate("OperationWindow", "[credit]", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OperationWindow: public Ui_OperationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATIONWINDOW_H
