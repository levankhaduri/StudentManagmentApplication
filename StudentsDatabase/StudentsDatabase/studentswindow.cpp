#include "studentswindow.h"
#include "ui_studentswindow.h"
#include <QtWidgets>
#include <QSqlDatabase>
#include <SqlDatabase.h>
#include <Classes.h>


StudentsWindow::StudentsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentsWindow)
{
    ui->setupUi(this);

    Database dbModel;
    db = dbModel.GetDBInstance();
}

StudentsWindow::~StudentsWindow()
{
    delete ui;
}

void StudentsWindow::on_SearchButton_clicked()
{
    ui->TextBox->clear();
    bool recordFound = false;

    QString idNumber = ui->IdNumber->text();
    QSqlQuery qry;

    if(db.isOpen()){
        if(qry.exec(QString("SELECT * FROM dbo.Student where Student.IdNumber = '%1';").arg(idNumber))){
            while(qry.next()){
                recordFound = true;
                Student tempStudent(qry.value(0).toString(), qry.value(1).toString(), qry.value(2).toString());

                ui->TextBox->insertPlainText(tempStudent.getData());
            }
            if(!recordFound) QMessageBox::critical(this, "404", "User with this id was not found.");
        }
    }
    else{
        QMessageBox::critical(this, "Critical!", "Something went wrong");
    }
}

void StudentsWindow::on_searchallbutton_clicked()
{
    ui->InsertTextBox->clear();
    bool recordsFound = false;

    QSqlQuery qry;

    if(db.isOpen()){
        if(qry.exec(QString("SELECT * FROM dbo.Student;"))){
            while(qry.next()){
                recordsFound = true;
                Student tempStudent(qry.value(0).toString(), qry.value(1).toString(), qry.value(2).toString());

                ui->InsertTextBox->insertPlainText(tempStudent.getData() + "\n");
            }
            if(!recordsFound) QMessageBox::critical(this, "404", "No students found at this time.");
        }
    }
    else{
        QMessageBox::critical(this, "Critical!", "Something went wrong");
    }
}
