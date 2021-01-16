#ifndef CLASSES_H
#define CLASSES_H

#include <bits/stdc++.h>
#include <QString>

using namespace std;

class Lector {
private:
    QString IdNumber;
    QString Name;
    QString DegreeStatus;
    QString Mail;
    QString PhoneNum;

public:
    Lector() {

    }

    Lector(QString idNumber, QString name, QString degreeStatus, QString mail, QString phoneNum) {
        IdNumber = idNumber;
        Name = name;
        DegreeStatus = degreeStatus;
        Mail = mail;
        PhoneNum = phoneNum;
    }

    QString getIdNumber() {
        return IdNumber;
    }

    QString getName() {
        return Name;
    }

    QString getDegreeStatus() {
        return DegreeStatus;
    }

    QString getMail() {
        return Mail;
    }

    QString getPhoneNum() {
        return PhoneNum;
    }

    QString printInfo() {
        QString result;
        QString name = "Lector Name : " + Name + "\n";
        QString id = "Id Number : " + IdNumber + "\n";
        QString degreeStatus = "Degree Status : " + DegreeStatus + "\n";
        QString mail = "Email : " + Mail + "\n";
        QString phoneNum = "Phone Number : " + PhoneNum + "\n";

        result.append(name + id + degreeStatus + mail + phoneNum);

        return result;
    }
};

class Course {
private:
    QString IdNumber;
    QString Name;
    QString LecturerId;
    int StudentScore = 0;

public:
    Course() {

    }
    Course(QString idNumber, QString name, QString lectorId) {
        IdNumber = idNumber;
        Name = name;
        LecturerId = lectorId;
    }

    QString getIdNumber() {
        return IdNumber;
    }

    QString getName() {
        return Name;
    }

    void setStudentScore(int score) {
        StudentScore = score;
    }

    QString getLectorId() {
        return LecturerId;
    }

    int getStudentScore() {
        return StudentScore;
    }

    QString printInfo() {
        //add
        QString result;

        result += "========== Course ==========\n";
        result += "Id : " + IdNumber + "\n";
        result += "Name : " + Name + "\n";
        result += "--------- Lecturer -----------\n";

        return result;
    }
};

class Student {
private:
    QString RegistrationNum;
    QString FullName;
    Course Courses[6];
    double GPA;
    QString Mail;
    int CourseCount = 0;

public:
    Student(QString registrationNum, QString fullName, QString mail) {
        RegistrationNum = registrationNum;
        FullName = fullName;
        Mail = mail;
    }

    QString getRegistrationNum() {
        return RegistrationNum;
    }

    QString getfullName() {
        return FullName;
    }

    QString getMail() {
        return Mail;
    }

    void addCourse(Course course) {
        Courses[CourseCount++] = course;
        return;
    }

    void setCourseScore(QString courseId, int score) {
        for (int i = 0; i < CourseCount; i++) {
            if (Courses[i].getIdNumber() == courseId)
            {
                Courses[i].setStudentScore(score);
                break;
            }
        }
        return;
    }

    QString getData(){
        QString result;

        result += "Id Number : " + RegistrationNum + "\n";
        result += "Full Name : " + FullName + "\n";
        result += "EMail : " + Mail + "\n";

        return result;
    }

    void printCourses() {
        cout << "Courses : " << endl;

        for (int i = 0; i < CourseCount; i++) {
            Courses[i].printInfo();
        }
    }

    void calculateGpa() {
        int sum = 0, totalScore = CourseCount * 100;

        if (CourseCount == 0) return;

        for (int i = 0; i < CourseCount; i++) {
            sum += Courses[i].getStudentScore();
        }

        double gpa = ((double)sum / totalScore) * 4;
        cout << "GPA : " << gpa << endl;
        GPA = gpa;
    }
};

class UserAccount {
private:
    QString Id;
    QString UserName;
    QString PassWord;
    QString UserType;
    QString Email;
    QString PhoneNum;
    QString Status;
    QString FullName;

public:
    UserAccount() {

    }

    UserAccount(QString id, QString userName, QString passWord, QString userType, QString email, QString phoneNum, QString status, QString fullName) {
        Id = id;
        UserName = userName;
        PassWord = passWord;
        UserType = userType;
        Email = email;
        PhoneNum = phoneNum;
        Status = status;
        FullName = fullName;
    }

    QString getUserType()
    {
        return UserType;
    }

    QString getId()
    {
        return Id;
    }

    QString getStatus()
    {
        return Status;
    }

    QString getFullName()
    {
        return FullName;
    }

    QString getMail()
    {
        return Email;
    }

    QString getPhoneNum()
    {
        return PhoneNum;
    }

    QString getData()
    {
        QString result;


        result += "======== " + UserType.toUpper() + "=======" +"\n";
        result += "Id Number : " + Id + "\n";
        result += "Full Name : " + FullName + "\n";
        result += "User Name : " + UserName + "\n";
        result += "Email : " + Email + "\n";
        result += "Phone Number : " + PhoneNum + "\n";

        return result;
    }
};


#endif // CLASSES_H
