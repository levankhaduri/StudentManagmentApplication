#ifndef SQLDATABASE_H
#define SQLDATABASE_H

#include <QSqlDatabase>

class Database
{
private:
    QSqlDatabase db;


public:
    void InitConnection()
    {
        QString serverName = "DESKTOP-PU3UENC";
        QString dbName = "StudentsManagmentDB";

        db = QSqlDatabase::addDatabase("QODBC");

        db.setConnectOptions();

        QString dsn = QString("DRIVER={SQL SERVER};SERVER=%1;DATABASE=%2;User Id=DESKTOP-PU3UENC\\User;Password=;").arg(serverName).arg(dbName);

        db.setDatabaseName(dsn);

        db.open();
    }

    QSqlDatabase GetDBInstance()
    {
        QSqlDatabase db = QSqlDatabase::database();

        return db;
    }
};

#endif // SQLDATABASE_H
