#include "lectorsinfowindow.h"
#include "ui_lectorsinfowindow.h"
#include "QSqlDatabase"
#include "QSqlQuery"
#include "SqlDatabase.h"
#include "QMessageBox"
#include "Classes.h"


lectorsinfowindow::lectorsinfowindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lectorsinfowindow)
{
    ui->setupUi(this);

    Database dbModel;
    db = dbModel.GetDBInstance();
}

lectorsinfowindow::~lectorsinfowindow()
{
    delete ui;
}

void lectorsinfowindow::on_ReadyButton_clicked()
{
    ui->MyCoursesBox->clear();

    QSqlQuery qry;
    bool recordFound = false;

    if(db.isOpen()){
        if(qry.exec(QString("SELECT * FROM dbo.Course where Course.LectorId = '%1';").arg(this->LectorId))){
            while(qry.next()){
                recordFound = true;
                Course tempCourse(qry.value(0).toString(), qry.value(1).toString(), qry.value(2).toString());

                ui->MyCoursesBox->append(tempCourse.printInfo() + "\n");
            }
            if(!recordFound) QMessageBox::critical(this, "404", "No courses found for the student.");
        }
    }
    else{
        QMessageBox::critical(this, "Critical!", "Something went wrong");
    }
}

void lectorsinfowindow::on_SubmitScoreButton_clicked()
{
    QString studNum = ui->StudentNumber->text();
    QString courseNum = ui->CourseNumber->text();
    QString score = ui->Score->text();
    int scoreInt = score.toInt();

    if(studNum.isEmpty() || courseNum.isEmpty() || scoreInt>100 || scoreInt<0){
        QMessageBox::critical(this, "400", "Fields weren't filled correctly.");
        return;
    }

    QSqlQuery qry;
    bool recordFound = false;

    if(db.isOpen()){
        if(qry.exec(QString("SELECT * FROM dbo.CourseScoreMap where CourseScoreMap.StudentNumber = '%1' and CourseScoreMap.CourseNumber = '%2';").arg(studNum).arg(courseNum))){
            while(qry.next()){
                recordFound = true;
                QString currScoreString = qry.value(2).toString();
                int currScore = currScoreString.toInt();
                int sum = currScore + scoreInt;
                if(sum > 100){
                    QMessageBox::critical(this, "Updated", QString("Score can't be 100, current value you are assigning: %1; You can add up to %2 points.").arg(sum).arg(scoreInt-(sum-100)));
                    return;
                }

                db.exec(QString("UPDATE dbo.CourseScoreMap SET  Score = '%1' WHERE StudentNumber = '%2' and CourseNumber = '%3';").arg(sum).arg(studNum).arg(courseNum));

                QMessageBox::information(this, "Updated", QString("Score was changed from %1 to %2").arg(currScoreString).arg(currScore+scoreInt));
            }
            if(!recordFound) QMessageBox::critical(this, "404", "No score found for this course and student.");
        }
    }
    else{
        QMessageBox::critical(this, "Critical!", "Something went wrong");
    }



}

void lectorsinfowindow::on_SearchForStudents_clicked()
{
    ui->CheckStudentScoresBox->clear();

    QString studNum = ui->CheckStudentNumber->text();
    QString courseNum = ui->CheckCourseNumber->text();

    if(studNum.isEmpty() || courseNum.isEmpty()){
        QMessageBox::critical(this, "400", "Fields weren't filled.");
        return;
    }

    QSqlQuery qry;
    bool recordFound = false;

    if(db.isOpen()){
        if(qry.exec(QString("SELECT * FROM dbo.CourseScoreMap where CourseScoreMap.StudentNumber = '%1' and CourseScoreMap.CourseNumber = '%2';").arg(studNum).arg(courseNum))){
            while(qry.next()){
                recordFound = true;
                QString score = qry.value(2).toString();

                ui->CheckStudentScoresBox->append("Score : " + score + "\n");
            }
            if(!recordFound) QMessageBox::critical(this, "404", "No score found for this course and student.");
        }
    }
    else{
        QMessageBox::critical(this, "Critical!", "Something went wrong");
    }
}
