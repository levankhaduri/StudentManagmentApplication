QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    courseswindow.cpp \
    lectorsinfowindow.cpp \
    lectorswindow.cpp \
    main.cpp \
    mainwindow.cpp \
    studentsinfowindow.cpp \
    studentswindow.cpp \
    userrequests.cpp \
    welcomedialog.cpp

HEADERS += \
    Classes.h \
    Functions.h \
    Hashing.h \
    SqlDatabase.h \
    courseswindow.h \
    lectorsinfowindow.h \
    lectorswindow.h \
    mainwindow.h \
    studentsinfowindow.h \
    studentswindow.h \
    userrequests.h \
    welcomedialog.h

FORMS += \
    courseswindow.ui \
    lectorsinfowindow.ui \
    lectorswindow.ui \
    mainwindow.ui \
    studentsinfowindow.ui \
    studentswindow.ui \
    userrequests.ui \
    welcomedialog.ui

TRANSLATIONS += \
    StudentsDatabase_ka_GE.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
