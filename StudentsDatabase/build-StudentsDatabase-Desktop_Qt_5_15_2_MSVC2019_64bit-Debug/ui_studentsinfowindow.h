/********************************************************************************
** Form generated from reading UI file 'studentsinfowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTSINFOWINDOW_H
#define UI_STUDENTSINFOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentsInfoWindow
{
public:
    QTextBrowser *textBrowser;
    QFrame *line;
    QTextBrowser *CourseInfo;
    QTextBrowser *textBrowser_2;
    QTextBrowser *StudentInfoBox;
    QPushButton *Ready;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QPushButton *CourseInfoButton;

    void setupUi(QDialog *StudentsInfoWindow)
    {
        if (StudentsInfoWindow->objectName().isEmpty())
            StudentsInfoWindow->setObjectName(QString::fromUtf8("StudentsInfoWindow"));
        StudentsInfoWindow->resize(857, 433);
        textBrowser = new QTextBrowser(StudentsInfoWindow);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 10, 391, 41));
        line = new QFrame(StudentsInfoWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(440, 10, 16, 381));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        CourseInfo = new QTextBrowser(StudentsInfoWindow);
        CourseInfo->setObjectName(QString::fromUtf8("CourseInfo"));
        CourseInfo->setGeometry(QRect(45, 141, 361, 231));
        textBrowser_2 = new QTextBrowser(StudentsInfoWindow);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(460, 10, 391, 41));
        StudentInfoBox = new QTextBrowser(StudentsInfoWindow);
        StudentInfoBox->setObjectName(QString::fromUtf8("StudentInfoBox"));
        StudentInfoBox->setGeometry(QRect(480, 60, 361, 341));
        Ready = new QPushButton(StudentsInfoWindow);
        Ready->setObjectName(QString::fromUtf8("Ready"));
        Ready->setGeometry(QRect(760, 410, 75, 23));
        widget = new QWidget(StudentsInfoWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 70, 271, 51));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout->addWidget(comboBox);

        CourseInfoButton = new QPushButton(widget);
        CourseInfoButton->setObjectName(QString::fromUtf8("CourseInfoButton"));

        verticalLayout->addWidget(CourseInfoButton);


        retranslateUi(StudentsInfoWindow);

        QMetaObject::connectSlotsByName(StudentsInfoWindow);
    } // setupUi

    void retranslateUi(QDialog *StudentsInfoWindow)
    {
        StudentsInfoWindow->setWindowTitle(QCoreApplication::translate("StudentsInfoWindow", "Dialog", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("StudentsInfoWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">Info About Courses</span></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("StudentsInfoWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">Student Info</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600; font-style:italic;\"><br /></p></body></html>", nullptr));
        Ready->setText(QCoreApplication::translate("StudentsInfoWindow", "Ready", nullptr));
        CourseInfoButton->setText(QCoreApplication::translate("StudentsInfoWindow", "See Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentsInfoWindow: public Ui_StudentsInfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTSINFOWINDOW_H
