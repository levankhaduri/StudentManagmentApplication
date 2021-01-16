#ifndef WELCOMEDIALOG_H
#define WELCOMEDIALOG_H

#include <QDialog>
#include <studentswindow.h>
#include <lectorswindow.h>
#include <courseswindow.h>
#include <userrequests.h>


namespace Ui {
class WelcomeDialog;
}

class WelcomeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WelcomeDialog(QWidget *parent = nullptr);
    ~WelcomeDialog();

private slots:
    void on_StudentsButton_clicked();

    void on_LectorsButton_clicked();

    void on_CoursesButton_clicked();

    void on_UserRequestsButton_clicked();

private:
    Ui::WelcomeDialog *ui;
    StudentsWindow *studentsWindow;
    LectorsWindow *lectorsWindow;
    CoursesWindow *coursesWindow;
    UserRequests *userRequestsWindow;
};

#endif // WELCOMEDIALOG_H
