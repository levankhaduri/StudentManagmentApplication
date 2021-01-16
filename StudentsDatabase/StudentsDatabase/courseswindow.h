#ifndef COURSESWINDOW_H
#define COURSESWINDOW_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
class CoursesWindow;
}

class CoursesWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CoursesWindow(QWidget *parent = nullptr);
    ~CoursesWindow();

private slots:
    void on_SearchByIdButton_clicked();

    void on_pushButton_2_clicked();

    void on_AddCourseButton_clicked();

    void on_AddStudentCourseButton_clicked();

private:
    Ui::CoursesWindow *ui;
    QSqlDatabase db;
};

#endif // COURSESWINDOW_H
