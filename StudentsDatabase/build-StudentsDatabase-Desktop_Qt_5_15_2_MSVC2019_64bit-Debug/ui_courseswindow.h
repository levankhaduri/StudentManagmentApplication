/********************************************************************************
** Form generated from reading UI file 'courseswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSESWINDOW_H
#define UI_COURSESWINDOW_H

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

class Ui_CoursesWindow
{
public:
    QFrame *line;
    QTextBrowser *textBrowser;
    QFrame *line_2;
    QTextBrowser *textBrowser_2;
    QFrame *line_3;
    QTextBrowser *textBrowser_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *CourseIdStudentReg;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *StudIdStudentReg;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_7;
    QTextBrowser *AddStudentCourse;
    QPushButton *AddStudentCourseButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *RegisterId;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *RegisterName;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *RegisterLectorId;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *addnewcoursebox;
    QPushButton *AddCourseButton;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *AllCoursesBox;
    QPushButton *pushButton_2;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *SearchId;
    QTextBrowser *SearchWithIdBox;
    QPushButton *SearchByIdButton;

    void setupUi(QDialog *CoursesWindow)
    {
        if (CoursesWindow->objectName().isEmpty())
            CoursesWindow->setObjectName(QString::fromUtf8("CoursesWindow"));
        CoursesWindow->resize(1104, 610);
        line = new QFrame(CoursesWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(630, 10, 20, 571));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        textBrowser = new QTextBrowser(CoursesWindow);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(700, 20, 361, 41));
        line_2 = new QFrame(CoursesWindow);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 260, 591, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        textBrowser_2 = new QTextBrowser(CoursesWindow);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(10, 10, 621, 41));
        line_3 = new QFrame(CoursesWindow);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(670, 290, 411, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        textBrowser_3 = new QTextBrowser(CoursesWindow);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(700, 310, 361, 41));
        layoutWidget = new QWidget(CoursesWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(700, 360, 361, 52));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setPointSize(11);
        label_5->setFont(font);

        horizontalLayout_5->addWidget(label_5);

        CourseIdStudentReg = new QLineEdit(layoutWidget);
        CourseIdStudentReg->setObjectName(QString::fromUtf8("CourseIdStudentReg"));

        horizontalLayout_5->addWidget(CourseIdStudentReg);


        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        horizontalLayout_7->addWidget(label_7);

        StudIdStudentReg = new QLineEdit(layoutWidget);
        StudIdStudentReg->setObjectName(QString::fromUtf8("StudIdStudentReg"));

        horizontalLayout_7->addWidget(StudIdStudentReg);


        verticalLayout_6->addLayout(horizontalLayout_7);

        layoutWidget_2 = new QWidget(CoursesWindow);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(700, 420, 361, 161));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        AddStudentCourse = new QTextBrowser(layoutWidget_2);
        AddStudentCourse->setObjectName(QString::fromUtf8("AddStudentCourse"));

        verticalLayout_7->addWidget(AddStudentCourse);

        AddStudentCourseButton = new QPushButton(layoutWidget_2);
        AddStudentCourseButton->setObjectName(QString::fromUtf8("AddStudentCourseButton"));

        verticalLayout_7->addWidget(AddStudentCourseButton);

        widget = new QWidget(CoursesWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(700, 80, 361, 83));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout_3->addWidget(label);

        RegisterId = new QLineEdit(widget);
        RegisterId->setObjectName(QString::fromUtf8("RegisterId"));

        horizontalLayout_3->addWidget(RegisterId);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        RegisterName = new QLineEdit(widget);
        RegisterName->setObjectName(QString::fromUtf8("RegisterName"));

        horizontalLayout_2->addWidget(RegisterName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        RegisterLectorId = new QLineEdit(widget);
        RegisterLectorId->setObjectName(QString::fromUtf8("RegisterLectorId"));

        horizontalLayout->addWidget(RegisterLectorId);


        verticalLayout->addLayout(horizontalLayout);

        widget1 = new QWidget(CoursesWindow);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(700, 180, 361, 102));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        addnewcoursebox = new QTextBrowser(widget1);
        addnewcoursebox->setObjectName(QString::fromUtf8("addnewcoursebox"));

        verticalLayout_2->addWidget(addnewcoursebox);

        AddCourseButton = new QPushButton(widget1);
        AddCourseButton->setObjectName(QString::fromUtf8("AddCourseButton"));

        verticalLayout_2->addWidget(AddCourseButton);

        widget2 = new QWidget(CoursesWindow);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(130, 290, 391, 301));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        AllCoursesBox = new QTextBrowser(widget2);
        AllCoursesBox->setObjectName(QString::fromUtf8("AllCoursesBox"));

        verticalLayout_3->addWidget(AllCoursesBox);

        pushButton_2 = new QPushButton(widget2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_3->addWidget(pushButton_2);

        widget3 = new QWidget(CoursesWindow);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(130, 70, 391, 171));
        verticalLayout_5 = new QVBoxLayout(widget3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        SearchId = new QLineEdit(widget3);
        SearchId->setObjectName(QString::fromUtf8("SearchId"));

        horizontalLayout_4->addWidget(SearchId);


        verticalLayout_4->addLayout(horizontalLayout_4);

        SearchWithIdBox = new QTextBrowser(widget3);
        SearchWithIdBox->setObjectName(QString::fromUtf8("SearchWithIdBox"));

        verticalLayout_4->addWidget(SearchWithIdBox);


        verticalLayout_5->addLayout(verticalLayout_4);

        SearchByIdButton = new QPushButton(widget3);
        SearchByIdButton->setObjectName(QString::fromUtf8("SearchByIdButton"));

        verticalLayout_5->addWidget(SearchByIdButton);


        retranslateUi(CoursesWindow);

        QMetaObject::connectSlotsByName(CoursesWindow);
    } // setupUi

    void retranslateUi(QDialog *CoursesWindow)
    {
        CoursesWindow->setWindowTitle(QCoreApplication::translate("CoursesWindow", "Dialog", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("CoursesWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">Add a new course</span></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("CoursesWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">Search</span></p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("CoursesWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">Add a student to a course</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("CoursesWindow", "Course Id: ", nullptr));
        label_7->setText(QCoreApplication::translate("CoursesWindow", "Student Id:", nullptr));
        AddStudentCourse->setHtml(QCoreApplication::translate("CoursesWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        AddStudentCourseButton->setText(QCoreApplication::translate("CoursesWindow", "Add", nullptr));
        label->setText(QCoreApplication::translate("CoursesWindow", "Id:         ", nullptr));
        label_2->setText(QCoreApplication::translate("CoursesWindow", "Name:    ", nullptr));
        label_3->setText(QCoreApplication::translate("CoursesWindow", "Lector Id:", nullptr));
        addnewcoursebox->setHtml(QCoreApplication::translate("CoursesWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        AddCourseButton->setText(QCoreApplication::translate("CoursesWindow", "Add", nullptr));
        AllCoursesBox->setHtml(QCoreApplication::translate("CoursesWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CoursesWindow", "Display all courses", nullptr));
        label_4->setText(QCoreApplication::translate("CoursesWindow", "Course Id:", nullptr));
        SearchWithIdBox->setHtml(QCoreApplication::translate("CoursesWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        SearchByIdButton->setText(QCoreApplication::translate("CoursesWindow", "Search by Id", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CoursesWindow: public Ui_CoursesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSESWINDOW_H
