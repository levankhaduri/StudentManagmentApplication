#ifndef STUDENTSWINDOW_H
#define STUDENTSWINDOW_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class StudentsWindow;
}

class StudentsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit StudentsWindow(QWidget *parent = nullptr);
    ~StudentsWindow();

private slots:

    void on_SearchButton_clicked();

    void on_searchallbutton_clicked();

private:
    Ui::StudentsWindow *ui;
    QSqlDatabase db;
};

#endif // STUDENTSWINDOW_H
