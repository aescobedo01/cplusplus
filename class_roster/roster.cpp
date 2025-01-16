#include <iostream>
#include "roster.h"

using namespace std;

// constructor
Roster::Roster()
{
    for (int i = 0; i < 5; i++)
    {
        // each item in CRA will be assigned with new student object
        classRosterArray[i] = new Student();
    }
}

// destructor
// delete each object in CRA
Roster::~Roster()
{
    for (int i = 0; i < 5; ++i)
    {
        delete classRosterArray[i];
    }
}

// get each id from CRA
string Roster::GetId(int index)
{
    string studentId = classRosterArray[index]->getId();
    return studentId;
}

// parse through each string in student data
void Roster::parse(string studentDataString)
{
    string studentId, firstName, lastName, emailAddress;
    int yearsOld, daysCourse1, daysCourse2, daysCourse3;

    if (lastIndex < 5)
    {
        lastIndex++;

        // initialize variables
        // only needs to be initialized once
        int rhs = studentDataString.find(",");
        int lhs = rhs + 1;

        // id
        string id = studentDataString.substr(0, rhs);
        classRosterArray[lastIndex]->setId(id);
        cout << id << endl;

        // first name
        lhs = rhs + 1;
        rhs = studentDataString.find(",", lhs);
        string fname = studentDataString.substr(lhs, rhs - lhs);
        classRosterArray[lastIndex]->setFName(fname);
        cout << fname << endl;

        // last name
        lhs = rhs + 1;
        rhs = studentDataString.find(",", lhs);
        string lname = studentDataString.substr(lhs, rhs - lhs);
        classRosterArray[lastIndex]->setLName(lname);
        cout << lname << endl;

        // email
        lhs = rhs + 1;
        rhs = studentDataString.find(",", lhs);
        string email = studentDataString.substr(lhs, rhs - lhs);
        classRosterArray[lastIndex]->setEmail(email);
        cout << email << endl;

        // age
        lhs = rhs + 1;
        rhs = studentDataString.find(",", lhs);
        int age = stoi(studentDataString.substr(lhs, rhs - lhs));
        classRosterArray[lastIndex]->setAge(age);
        cout << age << endl;

        // days in each course
        // day 1
        lhs = rhs + 1;
        rhs = studentDataString.find(",", lhs);
        daysCourse1 = stoi(studentDataString.substr(lhs, rhs - lhs));

        // day 2
        lhs = rhs + 1;
        rhs = studentDataString.find(",", lhs);
        daysCourse2 = stoi(studentDataString.substr(lhs, rhs - lhs));

        // day3
        lhs = rhs + 1;
        rhs = studentDataString.find(",", lhs);
        daysCourse3 = stoi(studentDataString.substr(lhs, rhs - lhs));

        // set days in each course
        classRosterArray[lastIndex]->setDays(daysCourse1, daysCourse2, daysCourse3);

        cout << daysCourse1 << ", " << daysCourse2 << ", " << daysCourse3 << endl;

        // degree program
        lhs = rhs + 1;
        rhs = studentDataString.find(",", lhs);
        string type = studentDataString.substr(lhs, rhs - lhs);
        if (type == "SOFTWARE")
        {
            classRosterArray[lastIndex]->setDegree(SOFTWARE);
            cout << "SOFTWARE" << endl;
        }
        else if (type == "SECURITY")
        {
            classRosterArray[lastIndex]->setDegree(SECURITY);
            cout << "SECURITY" << endl;
        }
        else if (type == "NETWORK")
        {
            classRosterArray[lastIndex]->setDegree(NETWORK);
            cout << "NETWORK" << endl;
        }
        else
        {
            cout << "Degree does not exist" << endl;
        }
        cout << endl;
    }
}