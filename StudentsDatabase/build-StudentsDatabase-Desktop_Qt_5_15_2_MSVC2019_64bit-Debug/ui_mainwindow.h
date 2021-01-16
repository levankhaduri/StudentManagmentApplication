/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *UserName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *PassWord;
    QPushButton *pushButton;
    QFrame *line;
    QLabel *Logo;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *SignUpUsername;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *SignUpPassword;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *FullName;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *Mail;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QLineEdit *PhoneNum;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *StudentType;
    QRadioButton *LecturerType;
    QRadioButton *AdminType;
    QPushButton *SignUpButton;
    QFrame *line_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(410, 60, 331, 201));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 271, 151));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        UserName = new QLineEdit(layoutWidget);
        UserName->setObjectName(QString::fromUtf8("UserName"));

        horizontalLayout->addWidget(UserName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        PassWord = new QLineEdit(layoutWidget);
        PassWord->setObjectName(QString::fromUtf8("PassWord"));
        PassWord->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(PassWord);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(350, 50, 51, 461));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        Logo = new QLabel(centralwidget);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(80, 130, 261, 271));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(410, 290, 311, 221));
        layoutWidget_3 = new QWidget(groupBox_2);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 20, 261, 192));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        SignUpUsername = new QLineEdit(layoutWidget_3);
        SignUpUsername->setObjectName(QString::fromUtf8("SignUpUsername"));

        horizontalLayout_5->addWidget(SignUpUsername);


        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        SignUpPassword = new QLineEdit(layoutWidget_3);
        SignUpPassword->setObjectName(QString::fromUtf8("SignUpPassword"));
        SignUpPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_6->addWidget(SignUpPassword);


        verticalLayout_6->addLayout(horizontalLayout_6);


        verticalLayout_5->addLayout(verticalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_8 = new QLabel(layoutWidget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_9->addWidget(label_8);

        FullName = new QLineEdit(layoutWidget_3);
        FullName->setObjectName(QString::fromUtf8("FullName"));
        FullName->setEchoMode(QLineEdit::Normal);

        horizontalLayout_9->addWidget(FullName);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        Mail = new QLineEdit(layoutWidget_3);
        Mail->setObjectName(QString::fromUtf8("Mail"));
        Mail->setEchoMode(QLineEdit::Normal);

        horizontalLayout_8->addWidget(Mail);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_9 = new QLabel(layoutWidget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_10->addWidget(label_9);

        PhoneNum = new QLineEdit(layoutWidget_3);
        PhoneNum->setObjectName(QString::fromUtf8("PhoneNum"));
        PhoneNum->setEchoMode(QLineEdit::Normal);

        horizontalLayout_10->addWidget(PhoneNum);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        StudentType = new QRadioButton(layoutWidget_3);
        StudentType->setObjectName(QString::fromUtf8("StudentType"));

        horizontalLayout_7->addWidget(StudentType);

        LecturerType = new QRadioButton(layoutWidget_3);
        LecturerType->setObjectName(QString::fromUtf8("LecturerType"));

        horizontalLayout_7->addWidget(LecturerType);

        AdminType = new QRadioButton(layoutWidget_3);
        AdminType->setObjectName(QString::fromUtf8("AdminType"));

        horizontalLayout_7->addWidget(AdminType);


        verticalLayout_5->addLayout(horizontalLayout_7);

        SignUpButton = new QPushButton(layoutWidget_3);
        SignUpButton->setObjectName(QString::fromUtf8("SignUpButton"));

        verticalLayout_5->addWidget(SignUpButton);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(400, 270, 361, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "SignIn", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "UserName", nullptr));
        UserName->setInputMask(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "PassWord", nullptr));
        PassWord->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        Logo->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "UserName", nullptr));
        SignUpUsername->setInputMask(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "PassWord", nullptr));
        SignUpPassword->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Full Name:", nullptr));
        FullName->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "EMail        ", nullptr));
        Mail->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "Number   ", nullptr));
        PhoneNum->setText(QString());
        StudentType->setText(QCoreApplication::translate("MainWindow", "Student", nullptr));
        LecturerType->setText(QCoreApplication::translate("MainWindow", "Lecturer", nullptr));
        AdminType->setText(QCoreApplication::translate("MainWindow", "Administrator", nullptr));
        SignUpButton->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
