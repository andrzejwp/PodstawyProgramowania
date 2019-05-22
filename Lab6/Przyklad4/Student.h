#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {

    public:
    
    Student(){
        typeOfPerson = "student";
    }

    string getForPrint();
};

string Student::getForPrint(){
    return "Student " + firstName;
}
#endif