# StudentManagmentApplication
Student Database Managment, Dekstop app made with C++, SQL, QT - GUI

SMDM is a project made with c++, SQL, QT.

I advise you to download QT Creator to easily navigate through project files and redesign GUI if you want to.

To make it run you will need a database which you can create through script I included in the root of the folder, run this script on SSMS as a query.

Code is pretty messy, had 3-4 days to do my project, so I rushed everything.


========================================================Steps to run application correctly=============================================================
1. Create database with given script. script location : ((StudentManagmentApplication\DBScript.sql))
2. Change connection string in SqlDatabase.h file which will be in ((StudentsDatabase\StudentsDatabase\SqlDatabase.h))

===============================================================About Project=========================================================================

User types: Student, Lecturer and Admin.

=========Admin===========

Seed data:
username: Admin
password: Admin

1. Can add students, lecturers, courses.
2. Manages user requests / Can reject any student or lecturer trying to register.
2.1 if admin will approve request student/lecturer record will be created in db and user will be approved and ready to sign in.
2.2 if admin rejects user request, user willn't be able to sign in.  
3. can assign courses to lecturers.
4. can assign a student to the course.

=========Lecturer===========

1. Can rate a student. / Max score : 100
2. See the courses he is teaching.

=========Student===========

1. See the courses he is learning.
2. See the basic info about his year.
