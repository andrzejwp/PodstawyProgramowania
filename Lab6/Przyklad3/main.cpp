#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Faculty.h"

using namespace std;

void printPerson(Person p){
    if(p.getTypeOfPerson() == "student"){
        cout << "Student: ";
    } else if (p.getTypeOfPerson() == "faculty"){
        cout << "Faculty: ";
    } else {
        cout << "Person :";
    }

    cout << p.getFirstName() << ", age " << p.getAge() << endl;
}

int main(){
    
    Person listOfPeople[2];
    Student listOfStudents[2];
    Faculty listOfFaculty[2];

    for(int i=0; i<2; i++){
        string name;
        int yob;

        cout << "Enter first name: ";
        cin >> name;

        cout << "Enter year of birth: ";
        cin >> yob;
        
        listOfPeople[i].setFirstName(name);
        listOfPeople[i].setYearOfBirth(yob);
    }

    for(int i=0; i<2; i++){
        string name;
        int yob;

        cout << "Enter student first name: ";
        cin >> name;

        cout << "Enter year of birth: ";
        cin >> yob;
        
        listOfStudents[i].setFirstName(name);
        listOfStudents[i].setYearOfBirth(yob);
    }
    
    for(int i=0; i<2; i++){
        string name;
        int yob;

        cout << "Enter student first name: ";
        cin >> name;

        cout << "Enter year of birth: ";
        cin >> yob;
        
        listOfFaculty[i].setFirstName(name);
        listOfFaculty[i].setYearOfBirth(yob);
    }

    cout << "List of people entered:" << endl;

    for(int i=0; i<6; i++){
        if(i<2){
            printPerson(listOfPeople[i%2]);
        } else if (i<4){
            printPerson(listOfStudents[i%2]);
        } else {
            printPerson(listOfFaculty[i%2]);
        }
    }

    return 0;
}