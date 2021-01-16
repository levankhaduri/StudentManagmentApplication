#include "welcomedialog.h"
#include "ui_welcomedialog.h"
#include <QPixmap>

WelcomeDialog::WelcomeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WelcomeDialog)
{
    ui->setupUi(this);

    QPixmap pix("D:\\StudentsDatabase\\StudentsDatabase\\Logo.png");

    ui->Logo->setPixmap(pix.scaled(610, 300));
}

WelcomeDialog::~WelcomeDialog()
{
    delete ui;
}

void WelcomeDialog::on_StudentsButton_clicked()
{
    studentsWindow = new StudentsWindow(this);
    studentsWindow->show();
}

void WelcomeDialog::on_LectorsButton_clicked()
{
    lectorsWindow = new LectorsWindow(this);
    lectorsWindow->show();
}

void WelcomeDialog::on_CoursesButton_clicked()
{
    coursesWindow = new CoursesWindow(this);
    coursesWindow->show();
}

void WelcomeDialog::on_UserRequestsButton_clicked()
{
    userRequestsWindow = new UserRequests(this);
    userRequestsWindow->show();
}
