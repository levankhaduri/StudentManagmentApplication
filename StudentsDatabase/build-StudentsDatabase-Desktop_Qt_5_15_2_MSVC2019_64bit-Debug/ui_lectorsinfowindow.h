/********************************************************************************
** Form generated from reading UI file 'lectorsinfowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTORSINFOWINDOW_H
#define UI_LECTORSINFOWINDOW_H

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

class Ui_lectorsinfowindow
{
public:
    QTextBrowser *textBrowser;
    QFrame *line;
    QTextBrowser *MyCoursesBox;
    QTextBrowser *textBrowser_2;
    QFrame *line_2;
    QTextBrowser *textBrowser_3;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *CheckCourseNumber;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *CheckStudentNumber;
    QPushButton *SearchForStudents;
    QTextBrowser *CheckStudentScoresBox;
    QPushButton *ReadyButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *CourseNumber;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *StudentNumber;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *Score;
    QPushButton *SubmitScoreButton;

    void setupUi(QDialog *lectorsinfowindow)
    {
        if (lectorsinfowindow->objectName().isEmpty())
            lectorsinfowindow->setObjectName(QString::fromUtf8("lectorsinfowindow"));
        lectorsinfowindow->resize(922, 623);
        textBrowser = new QTextBrowser(lectorsinfowindow);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(490, 20, 401, 41));
        line = new QFrame(lectorsinfowindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(443, 10, 20, 581));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        MyCoursesBox = new QTextBrowser(lectorsinfowindow);
        MyCoursesBox->setObjectName(QString::fromUtf8("MyCoursesBox"));
        MyCoursesBox->setGeometry(QRect(490, 80, 401, 511));
        textBrowser_2 = new QTextBrowser(lectorsinfowindow);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(20, 20, 401, 41));
        line_2 = new QFrame(lectorsinfowindow);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 250, 421, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        textBrowser_3 = new QTextBrowser(lectorsinfowindow);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(30, 270, 401, 41));
        layoutWidget_2 = new QWidget(lectorsinfowindow);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 320, 401, 141));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        CheckCourseNumber = new QLineEdit(layoutWidget_2);
        CheckCourseNumber->setObjectName(QString::fromUtf8("CheckCourseNumber"));

        horizontalLayout_4->addWidget(CheckCourseNumber);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        CheckStudentNumber = new QLineEdit(layoutWidget_2);
        CheckStudentNumber->setObjectName(QString::fromUtf8("CheckStudentNumber"));

        horizontalLayout_5->addWidget(CheckStudentNumber);


        verticalLayout_4->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_4);

        SearchForStudents = new QPushButton(layoutWidget_2);
        SearchForStudents->setObjectName(QString::fromUtf8("SearchForStudents"));

        verticalLayout_3->addWidget(SearchForStudents);

        CheckStudentScoresBox = new QTextBrowser(lectorsinfowindow);
        CheckStudentScoresBox->setObjectName(QString::fromUtf8("CheckStudentScoresBox"));
        CheckStudentScoresBox->setGeometry(QRect(30, 470, 401, 121));
        ReadyButton = new QPushButton(lectorsinfowindow);
        ReadyButton->setObjectName(QString::fromUtf8("ReadyButton"));
        ReadyButton->setGeometry(QRect(794, 600, 91, 23));
        widget = new QWidget(lectorsinfowindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 80, 401, 141));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        CourseNumber = new QLineEdit(widget);
        CourseNumber->setObjectName(QString::fromUtf8("CourseNumber"));

        horizontalLayout->addWidget(CourseNumber);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        StudentNumber = new QLineEdit(widget);
        StudentNumber->setObjectName(QString::fromUtf8("StudentNumber"));

        horizontalLayout_2->addWidget(StudentNumber);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        Score = new QLineEdit(widget);
        Score->setObjectName(QString::fromUtf8("Score"));

        horizontalLayout_3->addWidget(Score);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        SubmitScoreButton = new QPushButton(widget);
        SubmitScoreButton->setObjectName(QString::fromUtf8("SubmitScoreButton"));

        verticalLayout_2->addWidget(SubmitScoreButton);


        retranslateUi(lectorsinfowindow);

        QMetaObject::connectSlotsByName(lectorsinfowindow);
    } // setupUi

    void retranslateUi(QDialog *lectorsinfowindow)
    {
        lectorsinfowindow->setWindowTitle(QCoreApplication::translate("lectorsinfowindow", "Dialog", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("lectorsinfowindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">My Courses</span></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("lectorsinfowindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">Rate Students</span></p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("lectorsinfowindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">Check Student Scores</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("lectorsinfowindow", "Course Number", nullptr));
        label_5->setText(QCoreApplication::translate("lectorsinfowindow", "Student Number", nullptr));
        SearchForStudents->setText(QCoreApplication::translate("lectorsinfowindow", "Search for students", nullptr));
        ReadyButton->setText(QCoreApplication::translate("lectorsinfowindow", "Ready", nullptr));
        label->setText(QCoreApplication::translate("lectorsinfowindow", "Course Number", nullptr));
        label_2->setText(QCoreApplication::translate("lectorsinfowindow", "Student Number", nullptr));
        label_3->setText(QCoreApplication::translate("lectorsinfowindow", "Score to add", nullptr));
        SubmitScoreButton->setText(QCoreApplication::translate("lectorsinfowindow", "Submit Score", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lectorsinfowindow: public Ui_lectorsinfowindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTORSINFOWINDOW_H
