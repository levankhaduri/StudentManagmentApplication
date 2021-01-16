#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>
#include <QPixmap>
#include <QSqlDatabase>
#include <SqlDatabase.h>
#include "bits/stdc++.h"
#include <Hashing.h>
#include <Classes.h>
#include <regex>
#include <Functions.h>

#define AdminTypeConst "Admin"
#define LecturerTypeConst "Lecturer"
#define StudentTypeConst "Student"
#define EmailRegex "^[\\w-\\.]+@([\\w-]+\\.)+[\\w-]{2,4}$"
#define PhoneNumRegex "^[+]*[(]{0,1}[0-9]{1,4}[)]{0,1}[-\\s\\./0-9]*$"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix("D:\\StudentsDatabase\\StudentsDatabase\\Logo.png");

    ui->Logo->setPixmap(pix.scaled(280, 550));

    Database dbModel;
    dbModel.InitConnection();
    db = dbModel.GetDBInstance();
}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString userName = ui->UserName->text();
    QString passWord = ui->PassWord->text();

    QString hashPassword = QString::fromStdString(encrypt(passWord.toStdString()));

    bool recordFound = false;
    QSqlQuery qry;

    if(db.isOpen()){
        if(qry.exec(QString("SELECT * FROM dbo.UserAccounts where UserAccounts.UserName = '%1' and UserAccounts.PassWord = '%2';").arg(userName).arg(hashPassword))){
            while(qry.next()){
                recordFound = true;
                UserAccount tempUser(qry.value(0).toString(), qry.value(1).toString(), qry.value(2).toString(), qry.value(3).toString(), qry.value(4).toString(), qry.value(5).toString(), qry.value(6).toString(), qry.value(7).toString());
                QString id = tempUser.getId();
                QString status = tempUser.getStatus();

                if(status != "Approved")
                {
                    if(status == "Pending"){
                        QMessageBox::critical(this, "Error", "User hasn't been approved by admin yet.");
                        return;
                    }
                    else if(status == "Rejected"){
                        QMessageBox::critical(this, "Error", "User was rejected by admin!");
                        return;
                    }
                }

                if(tempUser.getUserType() == AdminTypeConst)
                {
                    this->hide();
                    welcomeDialog = new WelcomeDialog();
                    welcomeDialog->show();
                }
                else if(tempUser.getUserType() == LecturerTypeConst)
                {
                    this->hide();
                    lectorsInfo = new lectorsinfowindow();
                    lectorsInfo->LectorId = id;
                    lectorsInfo->show();
                }
                else if(tempUser.getUserType() == StudentTypeConst)
                {
                    this->hide();
                    studentsInfo = new StudentsInfoWindow();
                    studentsInfo->StudentId = id;
                    studentsInfo->show();
                }
            }
            if(!recordFound) QMessageBox::critical(this, "404", "User with this username and password was not found.");
        }
    }
    else{
        QMessageBox::critical(this, "Critical!", "Something went wrong");
    }
}

void MainWindow::on_SignUpButton_clicked()
{
    QString userName = ui->SignUpUsername->text();
    QString passWord = ui->SignUpPassword->text();
    QString mail = ui->Mail->text();
    QString fullName = ui->FullName->text();
    QString phoneNum = ui->PhoneNum->text();
    QString userStatus = "Pending";

    //hash password
    std::string hashedPassWordString = encrypt(passWord.toStdString());
    passWord = QString::fromStdString(hashedPassWordString);

    QString userType;

    if(userName.isEmpty() || passWord.isEmpty() ||
       mail.isEmpty() || phoneNum.isEmpty()){
        QMessageBox::critical(this, "Wrong", "One of the fields was not filled!");
        return;
    }

    if(!regex_match(mail.toStdString(), regex(EmailRegex))){
      QMessageBox::critical(this, "Wrong", "Entered mail was incorrect! type email address correctly!");
      return;
    }

    if(!regex_match(phoneNum.toStdString(), regex(PhoneNumRegex))){
      QMessageBox::critical(this, "Wrong", "Entered phone number was incorrect!");
      return;
    }

    if(ui->StudentType->isChecked()) userType = StudentTypeConst;
    else if(ui->LecturerType->isChecked()) userType = LecturerTypeConst;
    else if(ui->AdminType->isChecked()) userType = AdminTypeConst;
    else{
      QMessageBox::critical(this, "Wrong", "Please check one of the user types.");
      return;
    }

    if(CheckUserAccount(userName, mail, phoneNum)){
        QMessageBox::critical(this, "400", "User with this username and/or email and/or phone number already exists!");
        return;
    }

    if(db.isOpen()){
        db.exec(QString("INSERT INTO dbo.UserAccounts VALUES('', '%1', '%2', '%3', '%4', '%5', '%6', '%7')").arg(userName).arg(passWord).arg(userType)
                .arg(mail).arg(phoneNum).arg(userStatus).arg(fullName));

        ui->SignUpUsername->clear();
        ui->SignUpPassword->clear();
        ui->Mail->clear();
        ui->FullName->clear();
        ui->PhoneNum->clear();
        QMessageBox::information(this, "Accepted", "User was created, you may sign in now.");
    }
    else{
        QMessageBox::critical(this, "Wrong", "Something went wrong");
    }
}
