/********************************************************************************
** Form generated from reading UI file 'pinwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINWINDOW_H
#define UI_PINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_PinWindow
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLineEdit *ePass;
    QLabel *lError;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_9;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *bPass;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *PinWindow)
    {
        if (PinWindow->objectName().isEmpty())
            PinWindow->setObjectName(QStringLiteral("PinWindow"));
        PinWindow->resize(853, 480);
        PinWindow->setStyleSheet(QStringLiteral("background-color: rgb(11, 58, 151);"));
        gridLayout_2 = new QGridLayout(PinWindow);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(PinWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        ePass = new QLineEdit(groupBox);
        ePass->setObjectName(QStringLiteral("ePass"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(75);
        sizePolicy1.setHeightForWidth(ePass->sizePolicy().hasHeightForWidth());
        ePass->setSizePolicy(sizePolicy1);
        ePass->setStyleSheet(QStringLiteral("background-color: rgb(255, 224, 226);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, ePass);


        gridLayout_2->addWidget(groupBox, 0, 0, 2, 3);

        lError = new QLabel(PinWindow);
        lError->setObjectName(QStringLiteral("lError"));
        QFont font;
        font.setFamily(QStringLiteral("Palatino Linotype"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lError->setFont(font);
        lError->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        gridLayout_2->addWidget(lError, 2, 0, 1, 3, Qt::AlignHCenter);

        groupBox_2 = new QGroupBox(PinWindow);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_9 = new QPushButton(groupBox_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(pushButton_9, 3, 1, 1, 1);

        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(pushButton_6, 2, 1, 1, 1);

        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(pushButton_5, 2, 0, 1, 1);

        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(pushButton_7, 2, 2, 1, 1);

        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(pushButton_4, 1, 2, 1, 1);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(pushButton_3, 1, 1, 1, 1);

        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(pushButton_8, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_10 = new QPushButton(groupBox_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(pushButton_10, 3, 2, 1, 1);

        pushButton_11 = new QPushButton(groupBox_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(pushButton_11, 4, 1, 1, 1);

        pushButton_12 = new QPushButton(groupBox_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(pushButton_12, 4, 2, 1, 1);

        bPass = new QPushButton(groupBox_2);
        bPass->setObjectName(QStringLiteral("bPass"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bPass->sizePolicy().hasHeightForWidth());
        bPass->setSizePolicy(sizePolicy2);
        bPass->setStyleSheet(QLatin1String("\n"
"color: rgb(247, 222, 246);\n"
"background-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(bPass, 2, 3, 2, 1);


        gridLayout_2->addWidget(groupBox_2, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 4, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 4, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 5, 1, 1, 1);


        retranslateUi(PinWindow);

        QMetaObject::connectSlotsByName(PinWindow);
    } // setupUi

    void retranslateUi(QDialog *PinWindow)
    {
        PinWindow->setWindowTitle(QApplication::translate("PinWindow", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("PinWindow", "Enter pin code", nullptr));
        lError->setText(QString());
        groupBox_2->setTitle(QApplication::translate("PinWindow", "NumPad", nullptr));
        pushButton_9->setText(QApplication::translate("PinWindow", "8", nullptr));
        pushButton_6->setText(QApplication::translate("PinWindow", "5", nullptr));
        pushButton_5->setText(QApplication::translate("PinWindow", "4", nullptr));
        pushButton_7->setText(QApplication::translate("PinWindow", "6", nullptr));
        pushButton_4->setText(QApplication::translate("PinWindow", "3", nullptr));
        pushButton_3->setText(QApplication::translate("PinWindow", "2", nullptr));
        pushButton_8->setText(QApplication::translate("PinWindow", "7", nullptr));
        pushButton_2->setText(QApplication::translate("PinWindow", "1", nullptr));
        pushButton_10->setText(QApplication::translate("PinWindow", "9", nullptr));
        pushButton_11->setText(QApplication::translate("PinWindow", "0", nullptr));
        pushButton_12->setText(QApplication::translate("PinWindow", "<--", nullptr));
        bPass->setText(QApplication::translate("PinWindow", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PinWindow: public Ui_PinWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINWINDOW_H
