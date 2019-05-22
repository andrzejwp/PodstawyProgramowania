#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person {

    protected:
    int yearOfBirth;
    int monthOfBirth;
    int dayOfBirth;
    int socialSecurityNumber;
    string firstName;
    string lastName;
    string typeOfPerson;

    public:
    Person(){
        typeOfPerson = "person";
    }
    int getAge();
    string getFirstName();
    string getLastName();
    void setFirstName(string);
    void setLastName(string);
    void setYearOfBirth(int);
    string getTypeOfPerson();
    string getForPrint();
};

string Person::getForPrint(){
    if(typeOfPerson == "person"){
        return "Person " + firstName;
    } else {
        return "SomethingElse " + firstName;
    }
}

int Person::getAge(){
    return 2019-yearOfBirth;
}

string Person::getFirstName(){
    return firstName;
}

string Person::getLastName(){
    return lastName;
}

string Person::getTypeOfPerson(){
    return typeOfPerson;
}

void Person::setFirstName(string _firstName){
    firstName = _firstName;
}

void Person::setYearOfBirth(int _yearOfBirth){
    yearOfBirth = _yearOfBirth;
}

#endif