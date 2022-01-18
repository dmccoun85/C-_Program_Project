//  main.cpp
//  C867_PA
//  Created by Daniel McCoun - Started on 8/31/21.

#include <iostream>
#include <string>
#include "roster.h"

using namespace std;


//Req.F
int main() {
   
    //Req.A
    const string studentData[5] ={
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Daniel,McCoun,dmccoun@wgu.edu,35,20,10,30,SOFTWARE"};
    
    
    
    //Req.F1
    cout << "Course Title: Scripting and Programming-Applications-C867" << endl;
    cout << "Programming Language: C++" << endl;
    cout << "WGU Student ID: 001535645" << endl;
    cout << "Student Name: Daniel C. McCoun" << endl;
    cout << endl;
    cout << endl;

    //Req.F2/F3(1of2)
    Roster classRoster;
    for (int i = 0; i < 5; i++) {
         classRoster.parse(studentData[i]);
    }
    
    
    cout << "Display All Students:" << endl;
    classRoster.printAll();
    cout << endl;
    cout << endl;
    
    
    cout << "Print Invalid Emails:" << endl;
    classRoster.printInvalidEmails();
    cout << endl;
    cout << endl;
    
    
    cout << "Display Student's Average Days In Course:" << endl;
    for (int i = 0; i < 5; i++)
        classRoster.printAverageDaysInCourse(classRoster.getStudentID(i));
    cout << endl;
    cout << endl;
    
    
    cout << "Display Students By Degree Program:" << endl;
    classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);
    cout << endl;
    cout << endl;
    
    
    cout << "Remove Student A3:" << endl;
    classRoster.remove("A3");
    cout << endl;
    cout << endl;
    
    
    cout << "Display All Students After Removing Student A3:" << endl;
    classRoster.printAll();
    cout << endl;
    cout << endl;
    
    
    cout << "Remove Student A3 Again:" << endl;
    classRoster.remove("A3");
    cout << endl;
    cout << endl;
    
   
}
    

    
    
    

