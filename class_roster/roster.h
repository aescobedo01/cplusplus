#pragma once 

#include "student.h"
#include <string>
#include <iostream>
#include "degree.h"

using namespace std;

class Roster {
    public:

    //student object array of pointers
    Student* classRosterArray[5];
    //declare variable 
    int lastIndex = -1;

    //default roster constructor
    //destructor
    Roster();
    ~Roster();

    //declare methods to print all information
    //assignn parameters to member variables
    string GetId(int index);
    void parse(string const studentDataString);
    bool remove(string studentId);
    void add(string studentId, string firstName, string lastName, string emailAddress, int yearsOld, int daysCourse1, int daysCourse2, int daysCourse3, Degree degreeProgram);
	void printAll() const;
	void printAverageDaysInCourse(string studentId) const;
	void printInvalidEmails() const;
	void printByDegreeProgram(Degree degreeProgram) const;
	
};