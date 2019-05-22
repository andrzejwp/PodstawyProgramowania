#include <iostream>
#include "Person.h"
using namespace std;


int main(){
    
    Person listOfPeople[5];
    
    for(int i=0; i<5; i++){
        string name;
        int yob;

        cout << "Enter first name: ";
        cin >> name;

        cout << "Enter year of birth: ";
        cin >> yob;

        listOfPeople[i].setFirstName(name);
        listOfPeople[i].setYearOfBirth(yob);
    }

    cout << "List of people entered:" << endl;

    for(int i=0; i<5; i++){
        cout << listOfPeople[i].getFirstName() << ", age " << listOfPeople[i].getAge() << endl;
    }

    return 0;
}