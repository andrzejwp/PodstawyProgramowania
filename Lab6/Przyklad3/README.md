# Interfejsy, polimorfizm

Rozwiązanie zaprezentowane w folderze `Przyklad2` jest dalekie od ideału. Narusza wiele dobrych praktyk programowania obiektowego, a dodatkowo nakłada na programistę konieczność tworzenia skomplikowanych i nieczytelnych konstrukcji logicznych aby osiągnąć zamierzony efekt działania (np. funkcja `printPerson`). Kolejnym istotnym problemem jest konieczność utrzymywania wielu tablic, z których kazda dedykowana jest określonemu typowi (`listOfPeople`, `listOfStudents` itd.).

Zacznijmy od rozwiązania tego ostatniego problemu. Rozwazmy program, w którym wszystkie obiekty byłyby przechowywane w jednej tablicy, jak w programie `main-common-array.cpp`. Istotne, ze tablica `listOfPeople` musi stać się tablicą wskaźników, natomiast moze (i powinna) nadal być określona typem `Person`.

```
Person *listOfPeople[4];
```

Taka konstrukcja upraszcza nieco program, ale nadal niezbędne jest utrzymanie logiki w funkcji `printPerson`:

```
void printPerson(Person *p){
    if(p->getTypeOfPerson() == "student"){
        cout << "Student: ";
    } else {
        cout << "Person :";
    }
    cout << p->getFirstName() << ", age " << p->getAge() << endl;
}
```

Czy mozemy przesunąć tę odpowiedzialność do klasy `Person`? Tak, bardzo prosty sposób przedstawiony został w programie `main-common-array-print-in-person.cpp`:

```

string Person::getForPrint(){
    if(typeOfPerson == "person"){
        return "Person " + firstName;
    } else {
        return "SomethingElse " + firstName;
    }
}

```

Tak skonstruowany program posiada jednak istotny problem - wymaga zmian w klasie `Person` w momencie dodawania nowych klas (np. `Faculty`).

> Ćwiczenie: rozbuduj program `main-common-array-print-in-person.cpp` o pracę z klasą `Faculty` z wcześniejszych przykładów.

Oczywistym rozwiązaniem tego problemu wydaje się być przesunięcie odpowiedzialności za ich nalezyte funkcjonowanie do klas potomnych.

```
string Student::getForPrint(){
    return "Student " + firstName;
}
```

Intuicyjnie - moglibyśmy oczekiwać następującego zachowania programu:

```
Enter first name: Pers1
Enter year of birth: 1900
Enter first name: Pers2
Enter year of birth: 2000
Enter student first name: Stud1
Enter year of birth: 1090
Enter student first name: Stud2
Enter year of birth: 2005
List of people entered:
Person Pers1, age 119
Person Pers2, age 19
Student Stud1, age 929
Student Stud2, age 14
```

tak się jednak nie stanie. W rzeczywistości zobaczymy następujący rezultat:

```
Enter first name: Pers1
Enter year of birth: 1900
Enter first name: Pers2
Enter year of birth: 2000
Enter student first name: Stud1
Enter year of birth: 1090
Enter student first name: Stud2
Enter year of birth: 2005
List of people entered:
Person Pers1, age 119
Person Pers2, age 19
SomethingElse Stud1, age 929
SomethingElse Stud2, age 14
```

Na finalne rozwiązanie problemu wskazuje jednak umieszczona w przykładzie linia

```
 // Co stanie się gdy wykonamy rzutowanie?
 cout << ((Student*)listOfPeople[3])->getForPrint() << endl;
```
