#ifndef STUDENTSINFOWINDOW_H
#define STUDENTSINFOWINDOW_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
class StudentsInfoWindow;
}

class StudentsInfoWindow : public QDialog
{
    Q_OBJECT

public:
    explicit StudentsInfoWindow(QWidget *parent = nullptr);
    QString StudentId;
    ~StudentsInfoWindow();

private slots:
    void on_CourseInfoButton_clicked();

    void on_Ready_clicked();

private:
    Ui::StudentsInfoWindow *ui;
    QSqlDatabase db;
};

#endif // STUDENTSINFOWINDOW_H
