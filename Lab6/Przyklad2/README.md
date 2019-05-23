# Dziedziczenie

W przypadku gdy zachodzi konieczność rozbudowania programu o mozliwość odrózniania Studentów od Pracowników mozna posłuzyć się następującym rozwiązaniem, lub jego odmianą:

1. Rozbudowanie klasy `Person` o pole `typeOfPerson`

```
class Person {
    // ...

    string typeOfPerson;

    // ...
}
```

2. Ustawienie odpowiednich wartości dla tego pola w konstruktorach klas `Student`, `Faculty` i `Person`

```
class Person{
    
    // ...

    public:
    Person(){
        typeOfPerson = 'person';
    }
    // ...
}
```

3. Wykorzystanie wartości pola `typeOfPerson` do implementacji odmiennego zachowania dla studentów i pracowników.

```
void printPerson(person){
    if(person.getTypeOfPerson() == 'student'){
        cout << "Student : " << person.getFirstName();
    }
}
```

Problemy:
1. Przenalizować czytelność kodu źródłowego

Ćwiczenia:
1. Rozbudować program o obsługę klasy `Faculty`

