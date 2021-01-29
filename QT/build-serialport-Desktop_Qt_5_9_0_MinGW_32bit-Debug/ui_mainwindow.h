/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPlainTextEdit *textReceive;
    QLabel *label;
    QPlainTextEdit *textSend;
    QLabel *label_2;
    QPushButton *ButtonSend;
    QPushButton *ButtonClear;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *BoxPort;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *BoxBaudRate;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *BoxDataBit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QComboBox *BoxParity;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QComboBox *BoxStopBit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton;
    QLabel *labelState;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(584, 314);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textReceive = new QPlainTextEdit(centralWidget);
        textReceive->setObjectName(QStringLiteral("textReceive"));
        textReceive->setGeometry(QRect(10, 50, 361, 85));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 131, 16));
        textSend = new QPlainTextEdit(centralWidget);
        textSend->setObjectName(QStringLiteral("textSend"));
        textSend->setGeometry(QRect(10, 170, 361, 85));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 150, 131, 16));
        ButtonSend = new QPushButton(centralWidget);
        ButtonSend->setObjectName(QStringLiteral("ButtonSend"));
        ButtonSend->setGeometry(QRect(410, 220, 121, 24));
        ButtonClear = new QPushButton(centralWidget);
        ButtonClear->setObjectName(QStringLiteral("ButtonClear"));
        ButtonClear->setGeometry(QRect(280, 140, 91, 24));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(400, 50, 160, 155));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        BoxPort = new QComboBox(widget);
        BoxPort->setObjectName(QStringLiteral("BoxPort"));

        horizontalLayout->addWidget(BoxPort);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        BoxBaudRate = new QComboBox(widget);
        BoxBaudRate->setObjectName(QStringLiteral("BoxBaudRate"));

        horizontalLayout_5->addWidget(BoxBaudRate);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        BoxDataBit = new QComboBox(widget);
        BoxDataBit->setObjectName(QStringLiteral("BoxDataBit"));

        horizontalLayout_4->addWidget(BoxDataBit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        BoxParity = new QComboBox(widget);
        BoxParity->setObjectName(QStringLiteral("BoxParity"));

        horizontalLayout_3->addWidget(BoxParity);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);

        BoxStopBit = new QComboBox(widget);
        BoxStopBit->setObjectName(QStringLiteral("BoxStopBit"));

        horizontalLayout_2->addWidget(BoxStopBit);


        verticalLayout->addLayout(horizontalLayout_2);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(390, 20, 184, 26));
        horizontalLayout_6 = new QHBoxLayout(widget1);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_6->addWidget(pushButton);

        labelState = new QLabel(widget1);
        labelState->setObjectName(QStringLiteral("labelState"));

        horizontalLayout_6->addWidget(labelState);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 584, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\344\277\241\346\201\257\346\216\245\346\224\266\347\252\227\345\217\243\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\344\277\241\346\201\257\345\217\221\351\200\201\347\252\227\345\217\243\357\274\232", Q_NULLPTR));
        ButtonSend->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\344\277\241\346\201\257", Q_NULLPTR));
        ButtonClear->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\345\206\205\345\256\271", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200/\345\205\263\351\227\255\344\270\262\345\217\243", Q_NULLPTR));
        labelState->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
