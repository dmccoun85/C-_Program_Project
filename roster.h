//  roster.h
//  C867_PA
//  Created by Daniel McCoun on 8/31/21.

#ifndef roster_h
#define roster_h

#include <iostream>
#include <string>
#include "student.h"
#include "degree.h"

#endif /* roster_h */

using namespace std;


class Roster {
    private:
    //Req.E1
    Student* classRosterArray[5] = {nullptr, nullptr, nullptr, nullptr, nullptr};
   

    public:
    
        ~Roster();
    
        void parse(string);
    
        void add(string StudentID, string firstName, string lastName, string eMail, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    
        void remove(string studentID);
    
        void printAll();
    
        void printAverageDaysInCourse(string studentID);
    
        void printInvalidEmails();
    
        void printByDegreeProgram(DegreeProgram degreeProgram);
    
        string getStudentID (int i);
};



