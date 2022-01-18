//  student.h
//  C867_PA
//  Created by Daniel McCoun on 8/31/21.

#ifndef student_h
#define student_h

#include <iostream>
#include <string>
#include "degree.h"

#endif /* student_h */

using namespace std;


//Req.D1(1of2)-(Create Student class)
class Student {
  private:
    string studentID;
    string firstName;
    string lastName;
    string eMail;
    int age;
    int daysToCompleteArray[3];
    DegreeProgram degreeProgram;
    
    
   public:
    Student();
    //Req.D2d-(constructor using all parameters)
    Student(string studentID, string firstName, string lastName, string eMail, int age, int* daysToCompleteArray, DegreeProgram degreeProgram);


    
    
    //Req.D2a&c(1of2)-(accessors/getters)
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmail();
    int getAge();
    int getDaysToCompleteArray(int i);
    DegreeProgram getDegreeProgram();
    
    
    
    //Req.D2b&c(1of2)-(mutators/setters)
    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string eMail);
    void setAge(int age);
    void setDaysToCompleteArray(int daysToCompleteArray[3]);
    void setDegreeProgram(DegreeProgram degreeProgram);
    
    
    //Req.D2e(1of2)
    void print();
    
};
