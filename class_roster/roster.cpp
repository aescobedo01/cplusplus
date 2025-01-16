#include <iostream>
#include "roster.h"

using namespace std;

//constructor
Roster::Roster() {
    for (int i = 0; i < 5; i++) {
        //each item in CRA will be assigned with new student object
        classRosterArray[i] = new Student();
    }
}

//destructor
//delete each object in CRA
Roster::~Roster() {
    for (int i = 0; i < 5; ++i) {
        delete classRosterArray[i];
    }
}

//get each id from CRA
string Roster::GetId(int index) {
    string studentId = classRosterArray[index]->getId();
    return studentId;
    }

//parse through each string in student data 
void Roster::parse(string studentDataString) {
    string studentId, firstName, lastName, emailAddress;
    int yearsOld, daysCourse1, daysCourse2, daysCourse3;

    
}
}