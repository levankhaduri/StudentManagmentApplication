#include "lectorswindow.h"
#include "ui_lectorswindow.h"
#include "SqlDatabase.h"
#include "QSqlDatabase"
#include "QSqlQuery"
#include "Classes.h"
#include "QMessageBox"

LectorsWindow::LectorsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LectorsWindow)
{
    ui->setupUi(this);

    Database dbModel;
    db = dbModel.GetDBInstance();
}

LectorsWindow::~LectorsWindow()
{
    delete ui;
}

void LectorsWindow::on_SearchButton_clicked()
{
    ui->textBrowser_4->clear();
    bool recordFound = false;

    QString idNumber = ui->Id->text();
    QString fullName = ui->FullName->text();
    QSqlQuery qry;

    if(db.isOpen()){
        if(qry.exec(QString("SELECT * FROM dbo.Lector where Lector.IdNumber = '%1' or Lector.Name = '%2';").arg(idNumber).arg(fullName))){
            while(qry.next()){
                recordFound = true;
                Lector tempLector(qry.value(0).toString(), qry.value(1).toString(), qry.value(2).toString(), qry.value(3).toString(), qry.value(4).toString());

                ui->textBrowser_4->insertPlainText(tempLector.printInfo());
            }
            if(!recordFound) QMessageBox::critical(this, "404", "User with this id or name was not found.");
        }
    }
    else{
        QMessageBox::critical(this, "Critical!", "Something went wrong");
    }
}

void LectorsWindow::on_SearchAllButton_clicked()
{
    ui->textBrowser->clear();
    bool recordsFound = false;

    QSqlQuery qry;

    if(db.isOpen()){
        if(qry.exec(QString("SELECT * FROM dbo.Lector;"))){
            while(qry.next()){
                recordsFound = true;
                Lector tempLector(qry.value(0).toString(), qry.value(1).toString(), qry.value(2).toString(), qry.value(3).toString(), qry.value(4).toString());

                ui->textBrowser->insertPlainText(tempLector.printInfo() + "\n");
            }
            if(!recordsFound) QMessageBox::critical(this, "404", "No students found at this time.");
        }
    }
    else{
        QMessageBox::critical(this, "Critical!", "Something went wrong");
    }
}
