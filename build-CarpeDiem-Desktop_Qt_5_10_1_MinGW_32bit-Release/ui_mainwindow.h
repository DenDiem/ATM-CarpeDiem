/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QFormLayout *formLayout_3;
    QLineEdit *eCardNum;
    QPushButton *pushButton;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QPushButton *btn_8;
    QPushButton *btn_6;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_3;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_7;
    QPushButton *btn_9;
    QPushButton *btn_0;
    QPushButton *btn_del;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuCarpeDiem;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(853, 556);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(11, 58, 151);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(470, 10, 371, 141));
        groupBox->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));
        formLayout_3 = new QFormLayout(groupBox);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        eCardNum = new QLineEdit(groupBox);
        eCardNum->setObjectName(QStringLiteral("eCardNum"));
        eCardNum->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 255, 0);\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));
        eCardNum->setMaxLength(12);
        eCardNum->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, eCardNum);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);\n"
"font: 75 18pt \"MS Shell Dlg 2\";"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, pushButton);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 260, 361, 181));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(520, 220, 271, 241));
        groupBox_2->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btn_8 = new QPushButton(groupBox_2);
        btn_8->setObjectName(QStringLiteral("btn_8"));
        btn_8->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);\n"
"font: 75 18pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(btn_8, 2, 1, 1, 1);

        btn_6 = new QPushButton(groupBox_2);
        btn_6->setObjectName(QStringLiteral("btn_6"));
        btn_6->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);\n"
"font: 75 18pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(btn_6, 1, 2, 1, 1);

        btn_4 = new QPushButton(groupBox_2);
        btn_4->setObjectName(QStringLiteral("btn_4"));
        btn_4->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);\n"
"font: 75 18pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(btn_4, 1, 0, 1, 1);

        btn_5 = new QPushButton(groupBox_2);
        btn_5->setObjectName(QStringLiteral("btn_5"));
        btn_5->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);\n"
"font: 75 18pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(btn_5, 1, 1, 1, 1);

        btn_3 = new QPushButton(groupBox_2);
        btn_3->setObjectName(QStringLiteral("btn_3"));
        btn_3->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);\n"
"font: 75 18pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(btn_3, 0, 2, 1, 1);

        btn_1 = new QPushButton(groupBox_2);
        btn_1->setObjectName(QStringLiteral("btn_1"));
        btn_1->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);\n"
"font: 75 18pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(btn_1, 0, 0, 1, 1);

        btn_2 = new QPushButton(groupBox_2);
        btn_2->setObjectName(QStringLiteral("btn_2"));
        btn_2->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);\n"
"font: 75 18pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(btn_2, 0, 1, 1, 1);

        btn_7 = new QPushButton(groupBox_2);
        btn_7->setObjectName(QStringLiteral("btn_7"));
        btn_7->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);\n"
"font: 75 18pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(btn_7, 2, 0, 1, 1);

        btn_9 = new QPushButton(groupBox_2);
        btn_9->setObjectName(QStringLiteral("btn_9"));
        btn_9->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);\n"
"font: 75 18pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(btn_9, 2, 2, 1, 1);

        btn_0 = new QPushButton(groupBox_2);
        btn_0->setObjectName(QStringLiteral("btn_0"));
        btn_0->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);\n"
"font: 75 18pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(btn_0, 3, 1, 1, 1);

        btn_del = new QPushButton(groupBox_2);
        btn_del->setObjectName(QStringLiteral("btn_del"));
        btn_del->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);\n"
"font: 75 18pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(btn_del, 3, 2, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 50, 281, 81));
        label->setStyleSheet(QLatin1String("font: 36pt \"Rage Italic\";\n"
"color: rgb(66, 252, 255);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 853, 26));
        menuCarpeDiem = new QMenu(menuBar);
        menuCarpeDiem->setObjectName(QStringLiteral("menuCarpeDiem"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuCarpeDiem->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Enter your card", nullptr));
        eCardNum->setInputMask(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Next", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "<div id=\"frame\">\n"
"					<iframe width=\"600\" height=\"450\" frameborder=\"0\" style=\"border:0\"\n"
"							src=\"https://www.google.com/maps/embed/v1/search?q=\320\235\320\260\320\243\320\232\320\234\320\220,+\321\203\320\273\320\270\321\206\320\260+\320\223\321\200\320\270\320\263\320\276\321\200\320\270\321\217+\320\241\320\272\320\276\320\262\320\276\321\200\320\276\320\264\321\213,+\320\232\320\270\320\265\320\262,+\320\243\320\272\321\200\320\260\320\270\320\275\320\260&key=AIzaSyCS7vUzbOK_t-ftcS-oIMnD5-WPAW-DLh8\" allowfullscreen></iframe>	</div>\n"
"\n"
"			</div>", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "NumPad", nullptr));
        btn_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        btn_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        btn_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        btn_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        btn_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        btn_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        btn_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        btn_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        btn_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        btn_0->setText(QApplication::translate("MainWindow", "0", nullptr));
        btn_del->setText(QApplication::translate("MainWindow", "<--", nullptr));
        label->setText(QApplication::translate("MainWindow", "Carpe Diem", nullptr));
        menuCarpeDiem->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
