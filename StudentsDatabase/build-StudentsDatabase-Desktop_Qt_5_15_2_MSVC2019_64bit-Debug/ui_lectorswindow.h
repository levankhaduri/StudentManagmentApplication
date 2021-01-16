/********************************************************************************
** Form generated from reading UI file 'lectorswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTORSWINDOW_H
#define UI_LECTORSWINDOW_H

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

class Ui_LectorsWindow
{
public:
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QFrame *line;
    QTextBrowser *textBrowser_3;
    QPushButton *SearchAllButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *Id;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *FullName;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser_4;
    QPushButton *SearchButton;

    void setupUi(QDialog *LectorsWindow)
    {
        if (LectorsWindow->objectName().isEmpty())
            LectorsWindow->setObjectName(QString::fromUtf8("LectorsWindow"));
        LectorsWindow->resize(866, 453);
        textBrowser = new QTextBrowser(LectorsWindow);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(470, 61, 371, 341));
        textBrowser_2 = new QTextBrowser(LectorsWindow);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(20, 10, 371, 41));
        line = new QFrame(LectorsWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(430, 10, 16, 431));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        textBrowser_3 = new QTextBrowser(LectorsWindow);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(470, 10, 371, 41));
        SearchAllButton = new QPushButton(LectorsWindow);
        SearchAllButton->setObjectName(QString::fromUtf8("SearchAllButton"));
        SearchAllButton->setGeometry(QRect(474, 410, 371, 23));
        widget = new QWidget(LectorsWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 70, 371, 361));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(11);
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        Id = new QLineEdit(widget);
        Id->setObjectName(QString::fromUtf8("Id"));

        horizontalLayout_2->addWidget(Id);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        FullName = new QLineEdit(widget);
        FullName->setObjectName(QString::fromUtf8("FullName"));

        horizontalLayout->addWidget(FullName);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textBrowser_4 = new QTextBrowser(widget);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));

        verticalLayout_2->addWidget(textBrowser_4);

        SearchButton = new QPushButton(widget);
        SearchButton->setObjectName(QString::fromUtf8("SearchButton"));

        verticalLayout_2->addWidget(SearchButton);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(LectorsWindow);

        QMetaObject::connectSlotsByName(LectorsWindow);
    } // setupUi

    void retranslateUi(QDialog *LectorsWindow)
    {
        LectorsWindow->setWindowTitle(QCoreApplication::translate("LectorsWindow", "Dialog", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("LectorsWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">Search lector by</span></p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("LectorsWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">Display all lectors</span></p></body></html>", nullptr));
        SearchAllButton->setText(QCoreApplication::translate("LectorsWindow", "Search", nullptr));
        label_2->setText(QCoreApplication::translate("LectorsWindow", "Id :          ", nullptr));
        label->setText(QCoreApplication::translate("LectorsWindow", "Full Name :", nullptr));
        SearchButton->setText(QCoreApplication::translate("LectorsWindow", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LectorsWindow: public Ui_LectorsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTORSWINDOW_H
