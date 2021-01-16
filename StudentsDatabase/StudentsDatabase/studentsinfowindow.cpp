#include "studentsinfowindow.h"
#include "ui_studentsinfowindow.h"
#include <SqlDatabase.h>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <Classes.h>


StudentsInfoWindow::StudentsInfoWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentsInfoWindow)
{
    ui->setupUi(this);

    Database dbModel;
    db = dbModel.GetDBInstance();
}

StudentsInfoWindow::~StudentsInfoWindow()
{
    delete ui;
}

void StudentsInfoWindow::on_CourseInfoButton_clicked()
{
    QString courseId = ui->comboBox->currentText();
    QSqlQuery qry;
    QSqlQuery secondQry;
    bool recordFound = false;
    bool lectorFound = false;

    if(courseId.isEmpty()){
        QMessageBox::critical(this, "404", "Something went wrong.");
        return;
    }

    if(db.isOpen()){
        if(qry.exec(QString("SELECT * FROM dbo.Course where Course.IdNumber = '%1';").arg(courseId))){
            while(qry.next()){
                recordFound = true;
                Course course(qry.value(0).toString(), qry.value(1).toString(), qry.value(2).toString());

                ui->CourseInfo->insertPlainText(course.printInfo());

                if(secondQry.exec(QString("SELECT * FROM dbo.Lector where Lector.IdNumber = '%1';").arg(course.getLectorId()))){
                    while(secondQry.next()){
                        lectorFound = true;
                        Lector lector(secondQry.value(0).toString(), secondQry.value(1).toString(), secondQry.value(2).toString(), secondQry.value(3).toString(), secondQry.value(4).toString());

                        ui->CourseInfo->insertPlainText(lector.printInfo() + "\n");
                    }
                }

            }
            if(!recordFound) QMessageBox::critical(this, "404", "No courses found at this moment.");
        }
    }
    else{
        QMessageBox::critical(this, "Critical!", "Something went wrong");
    }

}

void StudentsInfoWindow::on_Ready_clicked()
{
    bool recordsFound = false;

    QSqlQuery qry;

    if(db.isOpen()){
        if(qry.exec(QString("SELECT * FROM dbo.CourseScoreMap where CourseScoreMap.StudentNumber = '%1';").arg(this->StudentId))){
            while(qry.next()){
                recordsFound = true;
                ui->comboBox->addItem(qry.value(1).toString());
            }
            if(!recordsFound) QMessageBox::critical(this, "404", "No courses found for the student.");
        }

        if(qry.exec(QString("SELECT * FROM dbo.UserAccounts where UserAccounts.Id = '%1';").arg(this->StudentId))){
            while(qry.next()){
                recordsFound = true;
                UserAccount userAccount(qry.value(0).toString(), qry.value(1).toString(), qry.value(2).toString(), qry.value(3).toString(),
                                        qry.value(4).toString(), qry.value(5).toString(), qry.value(6).toString(), qry.value(7).toString());

                ui->StudentInfoBox->insertPlainText(userAccount.getData() + "\n");
            }
            if(!recordsFound) QMessageBox::critical(this, "404", "Student info not found.");
        }

    }
    else{
        QMessageBox::critical(this, "Critical!", "Something went wrong");
    }
}
