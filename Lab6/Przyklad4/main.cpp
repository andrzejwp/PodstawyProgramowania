#include <iostream>
#include "Person.h"
#include "Student.h"


using namespace std;

void printPerson(Person *p){
    cout << p->getForPrint() << ", age " << p->getAge() << endl;
}

int main(){
    
    Person *listOfPeople[4];

    for(int i=0; i<2; i++){
        string name;
        int yob;

        cout << "Enter first name: ";
        cin >> name;

        cout << "Enter year of birth: ";
        cin >> yob;
        listOfPeople[i] = new Person();
        listOfPeople[i]->setFirstName(name);
        listOfPeople[i]->setYearOfBirth(yob);
    }

    for(int i=0; i<2; i++){
        string name;
        int yob;

        cout << "Enter student first name: ";
        cin >> name;

        cout << "Enter year of birth: ";
        cin >> yob;
        listOfPeople[2+i] = new Student();
        listOfPeople[2+i]->setFirstName(name);
        listOfPeople[2+i]->setYearOfBirth(yob);
    }
    

    cout << "List of people entered:" << endl;

    for(int i=0; i<4; i++){
        printPerson(listOfPeople[i]);
    }

    // Co stanie się gdy wykonamy rzutowanie?
    cout << ((Student*)listOfPeople[3])->getForPrint() << endl;

    return 0;
}
