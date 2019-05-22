#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person {

    private:
    int yearOfBirth;
    int monthOfBirth;
    int dayOfBirth;
    int socialSecurityNumber;
    string firstName;
    string lastName;

    public:
    Person(){}
    int getAge();
    string getFirstName();
    string getLastName();
    void setFirstName(string);
    void setLastName(string);
    void setYearOfBirth(int);
};

int Person::getAge(){
    return 2019-yearOfBirth;
}

string Person::getFirstName(){
    return firstName;
}

string Person::getLastName(){
    return lastName;
}

void Person::setFirstName(string _firstName){
    firstName = _firstName;
}

void Person::setYearOfBirth(int _yearOfBirth){
    yearOfBirth = _yearOfBirth;
}

#endif