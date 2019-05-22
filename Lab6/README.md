# Dziedziczenie, interfejsy, polimorfizm

W folderze `Przyklad1` znajduje się prosty program, który korzysta z klasy `Person` określonej w następujący sposób:

```
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
```

Program główny korzysta z klasy `Person` definiując tablicę 5 elementów tej klasy

```
Person listOfPeople[5];
```

a następnie pozwalając uzytkownikowi uzupełnić dane dla poszczególnych elementów tablicy:

```
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
```

Problemy:
1. W jaki sposób umozliwić przechowywanie informacji o osobach odrózniając od siebie Studentów i Pracowników?
2. W jaki sposób umozliwić odmienne drukowanie dla Studenta i dla Pracownika?