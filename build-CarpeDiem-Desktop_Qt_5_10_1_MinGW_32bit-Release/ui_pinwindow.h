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
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QPushButton *btn_8;
    QPushButton *btn_5;
    QPushButton *btn_4;
    QPushButton *btn_6;
    QPushButton *btn_3;
    QPushButton *btn_2;
    QPushButton *btn_7;
    QPushButton *btn_1;
    QPushButton *btn_9;
    QPushButton *btn_0;
    QPushButton *btn_del;
    QPushButton *bPass;
    QPushButton *pushButton;
    QLabel *lError;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *PinWindow)
    {
        if (PinWindow->objectName().isEmpty())
            PinWindow->setObjectName(QStringLiteral("PinWindow"));
        PinWindow->resize(859, 480);
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
        ePass->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 255, 0);\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));
        ePass->setMaxLength(4);
        ePass->setEchoMode(QLineEdit::Password);
        ePass->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, ePass);


        gridLayout_2->addWidget(groupBox, 0, 0, 2, 3);

        groupBox_2 = new QGroupBox(PinWindow);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btn_8 = new QPushButton(groupBox_2);
        btn_8->setObjectName(QStringLiteral("btn_8"));
        btn_8->setStyleSheet(QLatin1String("font: 75 18pt \"MS Shell Dlg 2\";background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(btn_8, 3, 1, 1, 1);

        btn_5 = new QPushButton(groupBox_2);
        btn_5->setObjectName(QStringLiteral("btn_5"));
        btn_5->setStyleSheet(QLatin1String("font: 75 18pt \"MS Shell Dlg 2\";background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(btn_5, 2, 1, 1, 1);

        btn_4 = new QPushButton(groupBox_2);
        btn_4->setObjectName(QStringLiteral("btn_4"));
        btn_4->setStyleSheet(QLatin1String("font: 75 18pt \"MS Shell Dlg 2\";background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(btn_4, 2, 0, 1, 1);

        btn_6 = new QPushButton(groupBox_2);
        btn_6->setObjectName(QStringLiteral("btn_6"));
        btn_6->setStyleSheet(QLatin1String("font: 75 18pt \"MS Shell Dlg 2\";background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(btn_6, 2, 2, 1, 1);

        btn_3 = new QPushButton(groupBox_2);
        btn_3->setObjectName(QStringLiteral("btn_3"));
        btn_3->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);\n"
"font: 75 18pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(btn_3, 1, 2, 1, 1);

        btn_2 = new QPushButton(groupBox_2);
        btn_2->setObjectName(QStringLiteral("btn_2"));
        btn_2->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);\n"
"font: 75 18pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(btn_2, 1, 1, 1, 1);

        btn_7 = new QPushButton(groupBox_2);
        btn_7->setObjectName(QStringLiteral("btn_7"));
        btn_7->setStyleSheet(QLatin1String("font: 75 18pt \"MS Shell Dlg 2\";background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(btn_7, 3, 0, 1, 1);

        btn_1 = new QPushButton(groupBox_2);
        btn_1->setObjectName(QStringLiteral("btn_1"));
        btn_1->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);\n"
"font: 75 18pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(btn_1, 1, 0, 1, 1);

        btn_9 = new QPushButton(groupBox_2);
        btn_9->setObjectName(QStringLiteral("btn_9"));
        btn_9->setStyleSheet(QLatin1String("font: 75 18pt \"MS Shell Dlg 2\";background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(btn_9, 3, 2, 1, 1);

        btn_0 = new QPushButton(groupBox_2);
        btn_0->setObjectName(QStringLiteral("btn_0"));
        btn_0->setStyleSheet(QLatin1String("font: 75 18pt \"MS Shell Dlg 2\";background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(btn_0, 4, 1, 1, 1);

        btn_del = new QPushButton(groupBox_2);
        btn_del->setObjectName(QStringLiteral("btn_del"));
        btn_del->setStyleSheet(QLatin1String("font: 75 18pt \"MS Shell Dlg 2\";background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(btn_del, 4, 2, 1, 1);

        bPass = new QPushButton(groupBox_2);
        bPass->setObjectName(QStringLiteral("bPass"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bPass->sizePolicy().hasHeightForWidth());
        bPass->setSizePolicy(sizePolicy2);
        bPass->setStyleSheet(QLatin1String("color: rgb(130, 18, 119);\n"
"background-color: rgb(97, 242, 255);\n"
"font: 75 18pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(bPass, 2, 3, 2, 1);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("color: rgb(130, 18, 119);\n"
"background-color: rgb(97, 242, 255);\n"
"font: 75 18pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(pushButton, 4, 3, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 4, 1, 1, 1);

        lError = new QLabel(PinWindow);
        lError->setObjectName(QStringLiteral("lError"));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        lError->setFont(font);
        lError->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 255, 0);\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));

        gridLayout_2->addWidget(lError, 5, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 4, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 4, 0, 1, 1);


        retranslateUi(PinWindow);

        QMetaObject::connectSlotsByName(PinWindow);
    } // setupUi

    void retranslateUi(QDialog *PinWindow)
    {
        PinWindow->setWindowTitle(QApplication::translate("PinWindow", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("PinWindow", "Enter pin code", nullptr));
        groupBox_2->setTitle(QApplication::translate("PinWindow", "NumPad", nullptr));
        btn_8->setText(QApplication::translate("PinWindow", "8", nullptr));
        btn_5->setText(QApplication::translate("PinWindow", "5", nullptr));
        btn_4->setText(QApplication::translate("PinWindow", "4", nullptr));
        btn_6->setText(QApplication::translate("PinWindow", "6", nullptr));
        btn_3->setText(QApplication::translate("PinWindow", "3", nullptr));
        btn_2->setText(QApplication::translate("PinWindow", "2", nullptr));
        btn_7->setText(QApplication::translate("PinWindow", "7", nullptr));
        btn_1->setText(QApplication::translate("PinWindow", "1", nullptr));
        btn_9->setText(QApplication::translate("PinWindow", "9", nullptr));
        btn_0->setText(QApplication::translate("PinWindow", "0", nullptr));
        btn_del->setText(QApplication::translate("PinWindow", "<--", nullptr));
        bPass->setText(QApplication::translate("PinWindow", "Enter", nullptr));
        pushButton->setText(QApplication::translate("PinWindow", "Return", nullptr));
        lError->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PinWindow: public Ui_PinWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINWINDOW_H
