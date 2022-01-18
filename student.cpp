//  student.cpp
//  C867_PA
//  Created by Daniel McCoun on 8/31/21.

#include <iostream>
#include <string>
#include "student.h"

using namespace std;



//Req.D1(2of2)?-(Create Student class)
Student::Student(string studentID, string firstName, string lastName, string eMail, int age, int* daysToCompleteArray, DegreeProgram degreeProgram) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->eMail = eMail;
    this->age = age;
    this->daysToCompleteArray[0] = daysToCompleteArray[0];
    this->daysToCompleteArray[1] = daysToCompleteArray[1];
    this->daysToCompleteArray[2] = daysToCompleteArray[2];
    this->degreeProgram = degreeProgram;
}
    


//Req.D2a&c(2of2)-(accessors/getters)
string Student::getStudentID(){
    return studentID;
}


string Student::getFirstName() {
    return firstName;
}


string Student::getLastName() {
    return lastName;
}


string Student::getEmail() {
    return eMail;
}


int Student::getAge() {
    return age;
}


int Student::getDaysToCompleteArray(int i) {
    return daysToCompleteArray[i];
}

//IS getDegreeProgram CORRECT??????????????????????????????????????????????????????
DegreeProgram Student::getDegreeProgram() {
    return degreeProgram;
}



//Req.D2b&c(2of2)-(mutators/setters)
void Student::setStudentID(string studentID) {
    this->studentID = studentID;
}


void Student::setFirstName(string firstName) {
    this->firstName = firstName;
}


void Student::setLastName(string lastName){
    this->lastName = lastName;
}


void Student::setEmail(string eMail) {
    this->eMail = eMail;
}


void Student::setAge(int age) {
    this->age = age;
}


void Student::setDaysToCompleteArray(int daysToCompleteArray[]) {
    this->daysToCompleteArray[0] = daysToCompleteArray[0];
    this->daysToCompleteArray[1] = daysToCompleteArray[1];
    this->daysToCompleteArray[2] = daysToCompleteArray[2];
}


void Student::setDegreeProgram(DegreeProgram degreeProgram) {
    this->degreeProgram = degreeProgram;
}





//Req.D2e & E3a(2of2)
void Student::print() {
    cout << studentID << '\t';
    cout << "First Name: " << firstName << '\t';
    cout << "Last Name: " << lastName << '\t';
    cout << "Age: " << age << '\t';
    cout << "Days In Course: " << daysToCompleteArray[0] << ", " << daysToCompleteArray[1] << ", " << daysToCompleteArray[2] << '\t';
    cout << "Degree Program: ";
    
    if ((int)degreeProgram == 0) {
        cout << "SECURITY";}

    else if ((int)degreeProgram == 1) {
        cout << "NETWORK";}

    else if ((int)degreeProgram == 2) {
        cout << "SOFTWARE";}
    cout << endl;
}
