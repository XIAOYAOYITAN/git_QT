/********************************************************************************
** Form generated from reading UI file 'qwdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWDIALOG_H
#define UI_QWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWDialog
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QPushButton *btnClose;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *chkBoxUnder;
    QCheckBox *checkBoxItalic;
    QCheckBox *checkBoxBold;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *rBtnBlack;
    QRadioButton *rBtnRed;
    QRadioButton *rBtnBlue;
    QPlainTextEdit *txtEdit;

    void setupUi(QDialog *QWDialog)
    {
        if (QWDialog->objectName().isEmpty())
            QWDialog->setObjectName(QStringLiteral("QWDialog"));
        QWDialog->resize(321, 329);
        widget = new QWidget(QWDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 280, 256, 26));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnOK = new QPushButton(widget);
        btnOK->setObjectName(QStringLiteral("btnOK"));

        horizontalLayout_3->addWidget(btnOK);

        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout_3->addWidget(btnCancel);

        btnClose = new QPushButton(widget);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        horizontalLayout_3->addWidget(btnClose);

        widget1 = new QWidget(QWDialog);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(30, 11, 258, 256));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        chkBoxUnder = new QCheckBox(widget1);
        chkBoxUnder->setObjectName(QStringLiteral("chkBoxUnder"));

        horizontalLayout_4->addWidget(chkBoxUnder);

        checkBoxItalic = new QCheckBox(widget1);
        checkBoxItalic->setObjectName(QStringLiteral("checkBoxItalic"));

        horizontalLayout_4->addWidget(checkBoxItalic);

        checkBoxBold = new QCheckBox(widget1);
        checkBoxBold->setObjectName(QStringLiteral("checkBoxBold"));

        horizontalLayout_4->addWidget(checkBoxBold);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        rBtnBlack = new QRadioButton(widget1);
        rBtnBlack->setObjectName(QStringLiteral("rBtnBlack"));

        horizontalLayout_5->addWidget(rBtnBlack);

        rBtnRed = new QRadioButton(widget1);
        rBtnRed->setObjectName(QStringLiteral("rBtnRed"));

        horizontalLayout_5->addWidget(rBtnRed);

        rBtnBlue = new QRadioButton(widget1);
        rBtnBlue->setObjectName(QStringLiteral("rBtnBlue"));

        horizontalLayout_5->addWidget(rBtnBlue);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(verticalLayout_2);

        txtEdit = new QPlainTextEdit(widget1);
        txtEdit->setObjectName(QStringLiteral("txtEdit"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(20);
        txtEdit->setFont(font);

        verticalLayout->addWidget(txtEdit);

        rBtnBlue->raise();
        btnCancel->raise();
        btnOK->raise();
        btnClose->raise();
        checkBoxItalic->raise();
        chkBoxUnder->raise();
        rBtnRed->raise();
        checkBoxBold->raise();
        rBtnBlue->raise();
        rBtnBlack->raise();
        txtEdit->raise();

        retranslateUi(QWDialog);
        QObject::connect(btnCancel, SIGNAL(clicked()), QWDialog, SLOT(reject()));
        QObject::connect(btnOK, SIGNAL(clicked()), QWDialog, SLOT(accept()));
        QObject::connect(btnClose, SIGNAL(clicked()), QWDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(QWDialog);
    } // setupUi

    void retranslateUi(QDialog *QWDialog)
    {
        QWDialog->setWindowTitle(QApplication::translate("QWDialog", "Dialog by Designer", Q_NULLPTR));
        btnOK->setText(QApplication::translate("QWDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("QWDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        btnClose->setText(QApplication::translate("QWDialog", "\351\200\200\345\207\272", Q_NULLPTR));
        chkBoxUnder->setText(QApplication::translate("QWDialog", "Underline", Q_NULLPTR));
        checkBoxItalic->setText(QApplication::translate("QWDialog", "Italic", Q_NULLPTR));
        checkBoxBold->setText(QApplication::translate("QWDialog", "Bold", Q_NULLPTR));
        rBtnBlack->setText(QApplication::translate("QWDialog", "Black", Q_NULLPTR));
        rBtnRed->setText(QApplication::translate("QWDialog", "Red", Q_NULLPTR));
        rBtnBlue->setText(QApplication::translate("QWDialog", "Blue", Q_NULLPTR));
        txtEdit->setPlainText(QApplication::translate("QWDialog", "Hello I'm Xiaoyao!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWDialog: public Ui_QWDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOG_H
