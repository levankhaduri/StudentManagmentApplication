#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <SqlDatabase.h>

bool CheckUserAccount(QString userName = "", QString email = "", QString number = ""){
    Database dbModel;
    QSqlDatabase db = dbModel.GetDBInstance();
    QSqlQuery qry;

    bool isInstance = false;

    if(db.isOpen()){
          if(qry.exec(QString("SELECT * FROM dbo.UserAccounts where UserAccounts.UserName = '%1' or UserAccounts.Mail = '%2' or UserAccounts.PhoneNumber = '%3';")
                      .arg(userName).arg(email).arg(number))){
              while(qry.next()){
                  isInstance = true;
              }
          }
    }

    return isInstance;
}



#endif // FUNCTIONS_H
