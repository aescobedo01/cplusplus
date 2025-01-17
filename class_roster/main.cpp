#include <iostream>
#include <string>
#include <array>
#include "roster.h"
#include "student.h"

using namespace std;

int main()
{
    // print out to the screen, via the app, the course title
    // programming language, wgu student id, and name
    cout << "C867: Scripting & Programming - Applications" << endl;
    cout << "C++" << endl;
    cout << "012202209" << endl;
    cout << "Escobedo" << endl;
    cout << endl;

    // student array
    const std::string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Ana,Escobedo,myemailaddress@gmail.com,23,20,21,22,SOFTWARE"
    };

// classroster is an instance of roster class
//using pointer to access members of a class
Roster* classRoster = new Roster();

//for loop to parse through studentData
for (int i = 0; i < 5; i++) {
    classRoster->parse(studentData[i]);
}

//print all
classRoster->printAll();

//print all invalid emails
classRoster->printInvalidEmails();

//loop through classRosterArray to find avg num of days in each course
for (int i = 0; i < 5; i++) {
    classRoster->printAverageDaysInCourse(classRoster->GetId(i));
}

//separate each student by degree type
classRoster->printByDegreeProgram(SECURITY);
classRoster->printByDegreeProgram(NETWORK);
classRoster->printByDegreeProgram(SOFTWARE);

//REMOVE STUDENT A3, then print everyone except a3
classRoster->remove("A3");
classRoster->printAll();

//parse again and it will say student a3 not found
classRoster->remove("A3");

delete classRoster;

system("pause>0");

return 0;
}