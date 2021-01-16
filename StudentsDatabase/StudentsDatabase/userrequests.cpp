#include "userrequests.h"
#include "ui_userrequests.h"
#include <QtWidgets>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <SqlDatabase.h>
#include <Classes.h>

UserRequests::UserRequests(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserRequests)
{
    ui->setupUi(this);

    Database dbModel;
    db = dbModel.GetDBInstance();
}

UserRequests::~UserRequests()
{
    delete ui;
}

void UserRequests::on_SeeRequestsButton_clicked()
{
    ui->allRequestsTextBox->clear();
    QSqlQuery qry;
    bool recordFound = false;

    if(db.isOpen()){
        if(qry.exec(QString("Select * from dbo.UserAccounts Where dbo.UserAccounts.Status = 'Pending';"))){
            while(qry.next()){
                recordFound = true;
                UserAccount account("", qry.value(1).toString(), qry.value(2).toString(),
                                    qry.value(3).toString(), qry.value(4).toString(), qry.value(5).toString(),
                                    qry.value(6).toString(), qry.value(7).toString());

                ui->allRequestsTextBox->append(account.getData());
            }
            if(!recordFound) QMessageBox::critical(this, "404", "No requests found.");
        }
    }
    else{
        QMessageBox::critical(this, "Critical!", "Something went wrong");
    }
}

void UserRequests::on_ApproveButton_clicked()
{
    ui->TextBrowserAccept->clear();

    QSqlQuery qry;

    QString id = ui->Id->text();
    QString mail = ui->Email->text();
    QString userName = ui->userName->text();

    if(id.isEmpty() || mail.isEmpty() || userName.isEmpty())
    {
        QMessageBox::critical(this, "Bad Request!", "Fields aren't filled correctly");
        return;
    }

    if(db.isOpen()){
        db.exec(QString("UPDATE UserAccounts SET UserAccounts.Status = 'Approved', Id = '%1' WHERE UserName = '%2' and Mail = '%3';").arg(id).arg(userName).arg(mail));

        if(qry.exec(QString("SELECT * FROM dbo.UserAccounts where UserAccounts.UserName = '%1' or UserAccounts.Mail = '%2';")
                    .arg(userName).arg(mail))){
            while(qry.next()){
                UserAccount tempUser(qry.value(0).toString(), qry.value(1).toString(), qry.value(2).toString(), qry.value(3).toString(), qry.value(4).toString(),
                                     qry.value(5).toString(), qry.value(6).toString(), qry.value(7).toString());

                QString status = tempUser.getUserType();

                if(status == "Lecturer"){
                    qry.exec(QString("INSERT INTO dbo.Lector VALUES ('%1', '%2', '%3', '%4', '%5');")
                                     .arg(tempUser.getId()).arg(tempUser.getFullName()).arg(' ').arg(tempUser.getMail()).arg(tempUser.getPhoneNum()));
                }
                else if(status == "Student"){
                    qry.exec(QString("INSERT INTO dbo.Student VALUES ('%1', '%2', '%3');")
                                     .arg(tempUser.getId()).arg(tempUser.getFullName()).arg(tempUser.getMail()));
                }
            }
        }

        ui->TextBrowserAccept->append("Id was assigned succesfuly and record was created!");
    }
    else{
        QMessageBox::critical(this, "Wrong", "Something went wrong");
    }
}

void UserRequests::on_RejectButton_clicked()
{
    ui->TextBrowserAccept->clear();

    QString mail = ui->Email->text();
    QString userName = ui->userName->text();

    if(db.isOpen()){
        db.exec(QString("UPDATE UserAccounts SET UserAccounts.Status = 'Rejected' WHERE UserName = '%1' and Mail = '%2';").arg(userName).arg(mail));
        ui->TextBrowserAccept->append("Rejected succesfuly!");
    }
    else{
        QMessageBox::critical(this, "Wrong", "Something went wrong");
    }
}
