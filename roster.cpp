//  roster.cpp
//  C867_PA
//  Created by Daniel McCoun on 8/31/21.

#include <iostream>
#include <string>
#include "roster.h"



using namespace std;

//Req.F5
Roster::~Roster() {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr) {
            delete classRosterArray[i];
            classRosterArray[i] = nullptr;
        }
    }
}



//Req.E2a&b
void Roster::parse(string row) {
    size_t rhs = row.find(",");
    string studentID = row.substr(0, rhs);
    
    size_t lhs = rhs + 1;
    rhs = row.find(",", lhs);
    string firstName = row.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = row.find(",", lhs);
    string lastName = row.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = row.find(",", lhs);
    string eMail = row.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = row.find(",", lhs);
    int age = stoi(row.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = row.find(",", lhs);
    int daysInCourse1 = stoi(row.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = row.find(",", lhs);
    int daysInCourse2 = stoi(row.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = row.find(",", lhs);
    int daysInCourse3 = stoi(row.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = row.find(",", lhs);
    string strDegreeProgram = row.substr(lhs, rhs - lhs);
    
    DegreeProgram degreeProgram = DegreeProgram::SECURITY;
    if (strDegreeProgram == "SECURITY") {
        degreeProgram = DegreeProgram::SECURITY;
    }
    else if (strDegreeProgram == "NETWORK"){
        degreeProgram = DegreeProgram::NETWORK;
    }
    else if (strDegreeProgram == "SOFTWARE") {
        degreeProgram = DegreeProgram::SOFTWARE;
    }
    //Req. F3(2of2)
    add(studentID, firstName, lastName, eMail, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
}



//Req.E3
void Roster::add(string studentID, string firstName, string lastName, string eMail, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
   
    int daysToCompleteArray[] = {daysInCourse1, daysInCourse2, daysInCourse3};
    
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] == nullptr) {
            classRosterArray[i] = new Student(studentID, firstName, lastName, eMail, age, daysToCompleteArray, degreeProgram);
            break;
        }
    }
}
    
    

//Req.E3b
void Roster::remove(string studentID) {
    bool x = false;
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr) {
        string theID = classRosterArray[i]->getStudentID();
        if (theID == studentID) {
            delete classRosterArray[i];
            classRosterArray[i] = nullptr;
            x = true;
        }
    }
}
    if (x)
    cout << "Student ID " << studentID << " was removed." << endl;
    
    if (!x)
    cout << "Student ID " << studentID << " was not found." << endl;
}



//Req.E3a(1of2)
void Roster::printAll() {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr) {
            classRosterArray[i]->print();
        }
    }
}



// Req.E3d (1of2)
void Roster::printAverageDaysInCourse(string studentID) {
    for (int i = 0; i < 5; i++) {
        if (studentID == classRosterArray[i]->getStudentID()) {
           int c1 = classRosterArray[i]->getDaysToCompleteArray(0);
           int c2 = classRosterArray[i]->getDaysToCompleteArray(1);
           int c3 = classRosterArray[i]->getDaysToCompleteArray(2);
            
           int average = ((c1 + c2 + c3) / 3);
        
           cout << "Student ID: " << studentID << ", averages " << average << " days in a course." << endl;
        }
    }
}



// Req.E3d (2of2)
string Roster::getStudentID(int i) {
  return this->classRosterArray[i]->getStudentID();

}



//Req.E3e
void Roster::printInvalidEmails() {
    for (int i = 0; i < 5; i++) {
    string currentEmail = classRosterArray[i]->getEmail();
        if (currentEmail.find('@') == string::npos) {
            cout << currentEmail << " - Is missing a \"@\"." << endl;}
        if (currentEmail.find('.') == string::npos) {
                cout << currentEmail << " - Is missing a \".\"." << endl;}
        if( currentEmail.find(' ') != string::npos) {
            cout << currentEmail << " - Cannot have a \"space\"." << endl;}
}
}



void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for (int i = 0; i < 5; i++) {
        if (degreeProgram == classRosterArray[i]->getDegreeProgram()) {
            classRosterArray[i]->print();
        }
    }
}
