/********************************************************************************
** Form generated from reading UI file 'studentswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTSWINDOW_H
#define UI_STUDENTSWINDOW_H

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

class Ui_StudentsWindow
{
public:
    QFrame *line;
    QTextBrowser *textBrowser_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *IdNumber;
    QVBoxLayout *verticalLayout;
    QTextBrowser *TextBox;
    QPushButton *SearchButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *InsertTextBox;
    QPushButton *searchallbutton;

    void setupUi(QDialog *StudentsWindow)
    {
        if (StudentsWindow->objectName().isEmpty())
            StudentsWindow->setObjectName(QString::fromUtf8("StudentsWindow"));
        StudentsWindow->resize(949, 448);
        line = new QFrame(StudentsWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(470, 10, 21, 421));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        textBrowser_2 = new QTextBrowser(StudentsWindow);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(515, 20, 411, 41));
        layoutWidget = new QWidget(StudentsWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 20, 351, 391));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Cambria Math"));
        font.setPointSize(16);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        IdNumber = new QLineEdit(layoutWidget);
        IdNumber->setObjectName(QString::fromUtf8("IdNumber"));

        horizontalLayout->addWidget(IdNumber);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        TextBox = new QTextBrowser(layoutWidget);
        TextBox->setObjectName(QString::fromUtf8("TextBox"));

        verticalLayout->addWidget(TextBox);

        SearchButton = new QPushButton(layoutWidget);
        SearchButton->setObjectName(QString::fromUtf8("SearchButton"));

        verticalLayout->addWidget(SearchButton);


        verticalLayout_2->addLayout(verticalLayout);

        layoutWidget1 = new QWidget(StudentsWindow);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(520, 70, 411, 341));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));

        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);

        InsertTextBox = new QTextBrowser(layoutWidget1);
        InsertTextBox->setObjectName(QString::fromUtf8("InsertTextBox"));

        verticalLayout_5->addWidget(InsertTextBox);

        searchallbutton = new QPushButton(layoutWidget1);
        searchallbutton->setObjectName(QString::fromUtf8("searchallbutton"));

        verticalLayout_5->addWidget(searchallbutton);


        retranslateUi(StudentsWindow);

        QMetaObject::connectSlotsByName(StudentsWindow);
    } // setupUi

    void retranslateUi(QDialog *StudentsWindow)
    {
        StudentsWindow->setWindowTitle(QCoreApplication::translate("StudentsWindow", "Dialog", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("StudentsWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">All Students</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("StudentsWindow", "IdNumber :", nullptr));
        SearchButton->setText(QCoreApplication::translate("StudentsWindow", "Search", nullptr));
        searchallbutton->setText(QCoreApplication::translate("StudentsWindow", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentsWindow: public Ui_StudentsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTSWINDOW_H
