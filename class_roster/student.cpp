#include "student.h"

using namespace std;

// default student constructor
Student::Student()
{
    // initialize member variables
    this->studentId = "";
    this->firstName = "";
    this->lastName = "";
    this->emailAddress = "";
    this->yearsOld = 0;
    for (int i = 0; i < 3; ++i)
    {
        this->daysCourse[i] = -1;
    }
    // default degree is software unless information is otherwise
    this->degreeProgram = SOFTWARE;
}

// default student constructor
// student constrcutor with parameters
Student::Student(string studentid, string firstname, string lastname, string email, int age, int days[], Degree degree) {
    // give parameter values to member variables
    this->studentId = studentid;
    this->firstName = firstname;
    this->lastName = lastname;
    this->emailAddress = email;
    this->yearsOld = age;
    for (int i = 0; i < 3; ++i) {
        this->daysCourse[i] = days[i];
    }
    this->degreeProgram = degree;
}

//destroy
Student::~Student() {};

//mutators or setters
