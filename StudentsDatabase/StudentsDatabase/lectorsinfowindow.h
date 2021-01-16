#ifndef LECTORSINFOWINDOW_H
#define LECTORSINFOWINDOW_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
class lectorsinfowindow;
}

class lectorsinfowindow : public QDialog
{
    Q_OBJECT

public:
    explicit lectorsinfowindow(QWidget *parent = nullptr);
    QString LectorId;
    ~lectorsinfowindow();

private slots:
    void on_ReadyButton_clicked();

    void on_SubmitScoreButton_clicked();

    void on_SearchForStudents_clicked();

private:
    Ui::lectorsinfowindow *ui;
    QSqlDatabase db;
};

#endif // LECTORSINFOWINDOW_H
