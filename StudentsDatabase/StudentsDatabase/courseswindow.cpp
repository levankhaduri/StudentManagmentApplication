#include "courseswindow.h"
#include "ui_courseswindow.h"
#include "Classes.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <SqlDatabase.h>


CoursesWindow::CoursesWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CoursesWindow)
{
    ui->setupUi(this);

    Database dbModel;
    db = dbModel.GetDBInstance();
}

CoursesWindow::~CoursesWindow()
{
    delete ui;
}

void CoursesWindow::on_SearchByIdButton_clicked()
{
    ui->SearchWithIdBox->clear();

    QString courseId = ui->SearchId->text();
    bool recordFound = false;
    bool lecturerFound = false;

    QSqlQuery qry;
    QSqlQuery secondQry;

    if(db.isOpen()){
        if(qry.exec(QString("SELECT * FROM dbo.Course where Course.IdNumber = '%1';").arg(courseId))){
            while(qry.next()){
                recordFound = true;
                Course course(qry.value(0).toString(), qry.value(1).toString(), qry.value(2).toString());

                ui->SearchWithIdBox->insertPlainText(course.printInfo());

                if(secondQry.exec(QString("SELECT * FROM dbo.Lector where Lector.IdNumber = '%1';").arg(course.getLectorId()))){
                    while(secondQry.next()){
                        lecturerFound = true;
                        Lector lector(secondQry.value(0).toString(), secondQry.value(1).toString(), secondQry.value(2).toString(), secondQry.value(3).toString(), secondQry.value(4).toString());

                        ui->SearchWithIdBox->insertPlainText(lector.printInfo());
                    }
                }

            }
            if(!recordFound) QMessageBox::critical(this, "404", "No courses with this id was found at this moment.");
        }
    }
    else{
        QMessageBox::critical(this, "Critical!", "Something went wrong");
    }
}

void CoursesWindow::on_pushButton_2_clicked()
{
    ui->AllCoursesBox->clear();

    bool recordFound = false;
    bool lecturerFound = false;

    QSqlQuery qry;
    QSqlQuery secondQry;

    if(db.isOpen()){
        if(qry.exec(QString("SELECT * FROM dbo.Course;"))){
            while(qry.next()){
                recordFound = true;
                Course course(qry.value(0).toString(), qry.value(1).toString(), qry.value(2).toString());

                ui->AllCoursesBox->insertPlainText(course.printInfo());



                if(secondQry.exec(QString("SELECT * FROM dbo.Lector where Lector.IdNumber = '%1';").arg(course.getLectorId()))){
                    while(secondQry.next()){
                        lecturerFound = true;
                        Lector lector(secondQry.value(0).toString(), secondQry.value(1).toString(), secondQry.value(2).toString(), secondQry.value(3).toString(), secondQry.value(4).toString());

                        ui->AllCoursesBox->insertPlainText(lector.printInfo() + "\n");
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

void CoursesWindow::on_AddCourseButton_clicked()
{
    QString courseId = ui->RegisterId->text();
    QString courseName = ui->RegisterName->text();
    QString lectorId = ui->RegisterLectorId->text();

    if(courseId.isEmpty() || courseName.isEmpty() || lectorId.isEmpty()){
        QMessageBox::critical(this, "400", "Fields weren't filled.");
    }

    if(db.isOpen())
    {
        QSqlQuery qry;
        bool lectorFound = false;

        if(qry.exec(QString("SELECT * FROM dbo.Lector where Lector.IdNumber = '%1';").arg(lectorId))){
            while(qry.next()){
                lectorFound = true;
            }
            if(!lectorFound){
                QMessageBox::critical(this, "404", "Lector with this id wasn't found.");
                return;
            }
        }

        db.exec(QString("INSERT INTO dbo.Course VALUES('%1', '%2', '%3')").arg(courseId).arg(courseName).arg(lectorId));

        ui->RegisterId->clear();
        ui->RegisterName->clear();
        ui->RegisterLectorId->clear();
        QMessageBox::information(this, "Accepted", "Course was created");
    }
}

void CoursesWindow::on_AddStudentCourseButton_clicked()
{
    QString courseId = ui->CourseIdStudentReg->text();
    QString studentId = ui->StudIdStudentReg->text();

    if(courseId.isEmpty() || studentId.isEmpty()){
        QMessageBox::critical(this, "400", "Fields weren't filled.");
    }

    if(db.isOpen())
    {
        QSqlQuery qry;
        bool studentFound = false;
        bool courseFound = false;


        if(qry.exec(QString("SELECT * FROM dbo.Student where Student.IdNumber = '%1';").arg(studentId))){
            while(qry.next()){
                studentFound = true;
            }
            if(!studentFound){
                QMessageBox::critical(this, "404", "Student with this id wasn't found.");
                return;
            }
        }

        if(qry.exec(QString("SELECT * FROM dbo.Course where Course.IdNumber = '%1';").arg(courseId))){
            while(qry.next()){
                courseFound = true;
            }
            if(!studentFound){
                QMessageBox::critical(this, "404", "Course with this id wasn't found.");
                return;
            }
        }

        db.exec(QString("INSERT INTO dbo.CourseScoreMap VALUES('%1', '%2', '%3')").arg(studentId).arg(courseId).arg(0));

        ui->RegisterId->clear();
        ui->RegisterName->clear();
        ui->RegisterLectorId->clear();
        QMessageBox::information(this, "Accepted", "Course was assigned to student!");
    }
}
