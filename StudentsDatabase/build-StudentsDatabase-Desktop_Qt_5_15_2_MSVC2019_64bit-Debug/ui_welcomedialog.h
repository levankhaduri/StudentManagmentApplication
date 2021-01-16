/********************************************************************************
** Form generated from reading UI file 'welcomedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEDIALOG_H
#define UI_WELCOMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *StudentsButton;
    QPushButton *LectorsButton;
    QPushButton *CoursesButton;
    QPushButton *UserRequestsButton;
    QLabel *Logo;

    void setupUi(QDialog *WelcomeDialog)
    {
        if (WelcomeDialog->objectName().isEmpty())
            WelcomeDialog->setObjectName(QString::fromUtf8("WelcomeDialog"));
        WelcomeDialog->resize(1142, 567);
        layoutWidget = new QWidget(WelcomeDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 190, 821, 151));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        StudentsButton = new QPushButton(layoutWidget);
        StudentsButton->setObjectName(QString::fromUtf8("StudentsButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(60);
        sizePolicy.setHeightForWidth(StudentsButton->sizePolicy().hasHeightForWidth());
        StudentsButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        StudentsButton->setFont(font);

        horizontalLayout->addWidget(StudentsButton);

        LectorsButton = new QPushButton(layoutWidget);
        LectorsButton->setObjectName(QString::fromUtf8("LectorsButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(60);
        sizePolicy1.setHeightForWidth(LectorsButton->sizePolicy().hasHeightForWidth());
        LectorsButton->setSizePolicy(sizePolicy1);
        LectorsButton->setFont(font);

        horizontalLayout->addWidget(LectorsButton);

        CoursesButton = new QPushButton(layoutWidget);
        CoursesButton->setObjectName(QString::fromUtf8("CoursesButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(CoursesButton->sizePolicy().hasHeightForWidth());
        CoursesButton->setSizePolicy(sizePolicy2);
        CoursesButton->setFont(font);

        horizontalLayout->addWidget(CoursesButton);

        UserRequestsButton = new QPushButton(layoutWidget);
        UserRequestsButton->setObjectName(QString::fromUtf8("UserRequestsButton"));
        sizePolicy2.setHeightForWidth(UserRequestsButton->sizePolicy().hasHeightForWidth());
        UserRequestsButton->setSizePolicy(sizePolicy2);
        UserRequestsButton->setFont(font);

        horizontalLayout->addWidget(UserRequestsButton);

        Logo = new QLabel(WelcomeDialog);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(280, 40, 571, 91));

        retranslateUi(WelcomeDialog);

        QMetaObject::connectSlotsByName(WelcomeDialog);
    } // setupUi

    void retranslateUi(QDialog *WelcomeDialog)
    {
        WelcomeDialog->setWindowTitle(QCoreApplication::translate("WelcomeDialog", "Dialog", nullptr));
        StudentsButton->setText(QCoreApplication::translate("WelcomeDialog", "Students", nullptr));
        LectorsButton->setText(QCoreApplication::translate("WelcomeDialog", "Lectors", nullptr));
        CoursesButton->setText(QCoreApplication::translate("WelcomeDialog", "Courses", nullptr));
        UserRequestsButton->setText(QCoreApplication::translate("WelcomeDialog", "User Requests", nullptr));
        Logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WelcomeDialog: public Ui_WelcomeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEDIALOG_H
