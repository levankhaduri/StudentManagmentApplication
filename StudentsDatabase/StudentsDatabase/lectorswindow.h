#ifndef LECTORSWINDOW_H
#define LECTORSWINDOW_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
class LectorsWindow;
}

class LectorsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LectorsWindow(QWidget *parent = nullptr);
    ~LectorsWindow();

private slots:
    void on_SearchButton_clicked();

    void on_SearchAllButton_clicked();

private:
    Ui::LectorsWindow *ui;
    QSqlDatabase db;
};

#endif // LECTORSWINDOW_H
