#ifndef USERREQUESTS_H
#define USERREQUESTS_H

#include <QDialog>
#include <SqlDatabase.h>

namespace Ui {
class UserRequests;
}

class UserRequests : public QDialog
{
    Q_OBJECT

public:
    explicit UserRequests(QWidget *parent = nullptr);
    ~UserRequests();

private slots:
    void on_SeeRequestsButton_clicked();

    void on_ApproveButton_clicked();

    void on_RejectButton_clicked();

private:
    Ui::UserRequests *ui;
    QSqlDatabase db;
};

#endif // USERREQUESTS_H
