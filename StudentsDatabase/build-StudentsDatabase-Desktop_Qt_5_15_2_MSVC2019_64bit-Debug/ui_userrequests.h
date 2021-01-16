/********************************************************************************
** Form generated from reading UI file 'userrequests.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERREQUESTS_H
#define UI_USERREQUESTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserRequests
{
public:
    QPushButton *SeeRequestsButton;
    QTextBrowser *allRequestsTextBox;
    QFrame *line;
    QTextBrowser *textBrowser;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *TextBrowserAccept;
    QVBoxLayout *verticalLayout;
    QPushButton *ApproveButton;
    QPushButton *RejectButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *userName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *Email;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Id;

    void setupUi(QDialog *UserRequests)
    {
        if (UserRequests->objectName().isEmpty())
            UserRequests->setObjectName(QString::fromUtf8("UserRequests"));
        UserRequests->resize(810, 419);
        SeeRequestsButton = new QPushButton(UserRequests);
        SeeRequestsButton->setObjectName(QString::fromUtf8("SeeRequestsButton"));
        SeeRequestsButton->setGeometry(QRect(110, 20, 261, 31));
        allRequestsTextBox = new QTextBrowser(UserRequests);
        allRequestsTextBox->setObjectName(QString::fromUtf8("allRequestsTextBox"));
        allRequestsTextBox->setGeometry(QRect(50, 70, 371, 311));
        line = new QFrame(UserRequests);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(450, 20, 20, 371));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        textBrowser = new QTextBrowser(UserRequests);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(480, 10, 321, 31));
        widget = new QWidget(UserRequests);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(480, 140, 311, 271));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        TextBrowserAccept = new QTextBrowser(widget);
        TextBrowserAccept->setObjectName(QString::fromUtf8("TextBrowserAccept"));

        verticalLayout_2->addWidget(TextBrowserAccept);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ApproveButton = new QPushButton(widget);
        ApproveButton->setObjectName(QString::fromUtf8("ApproveButton"));

        verticalLayout->addWidget(ApproveButton);

        RejectButton = new QPushButton(widget);
        RejectButton->setObjectName(QString::fromUtf8("RejectButton"));

        verticalLayout->addWidget(RejectButton);


        verticalLayout_2->addLayout(verticalLayout);

        widget1 = new QWidget(UserRequests);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(480, 50, 311, 80));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(11);
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        userName = new QLineEdit(widget1);
        userName->setObjectName(QString::fromUtf8("userName"));

        horizontalLayout_2->addWidget(userName);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        Email = new QLineEdit(widget1);
        Email->setObjectName(QString::fromUtf8("Email"));

        horizontalLayout_3->addWidget(Email);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        Id = new QLineEdit(widget1);
        Id->setObjectName(QString::fromUtf8("Id"));

        horizontalLayout->addWidget(Id);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(UserRequests);

        QMetaObject::connectSlotsByName(UserRequests);
    } // setupUi

    void retranslateUi(QDialog *UserRequests)
    {
        UserRequests->setWindowTitle(QCoreApplication::translate("UserRequests", "Dialog", nullptr));
        SeeRequestsButton->setText(QCoreApplication::translate("UserRequests", "See Pending Requests", nullptr));
        allRequestsTextBox->setHtml(QCoreApplication::translate("UserRequests", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("UserRequests", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-style:italic;\">Approve or reject user</span></p></body></html>", nullptr));
        ApproveButton->setText(QCoreApplication::translate("UserRequests", "Approve", nullptr));
        RejectButton->setText(QCoreApplication::translate("UserRequests", "Reject", nullptr));
        label_2->setText(QCoreApplication::translate("UserRequests", "Username :", nullptr));
        label_3->setText(QCoreApplication::translate("UserRequests", "Email :       ", nullptr));
        Email->setText(QString());
        label->setText(QCoreApplication::translate("UserRequests", "Assign Id : ", nullptr));
        Id->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserRequests: public Ui_UserRequests {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERREQUESTS_H
