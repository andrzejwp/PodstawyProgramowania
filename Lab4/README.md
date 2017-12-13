Korzystanie z tablic
====================

```
#include <iostream>

using namespace std;

int main() {

    int arrayOfNumbers[5] = {1,2,3,4,5};

    for(int i=0; i<5; i++){
        cout << arrayOfNumbers[i] << endl;
    }

    return 0;
}
```

Powyższy program poprawnie odczytuje w pętli kolejne elementy 5-elementowej tablicy liczb typu ``int``.
Jednym z najczęściej pojawiających się błędów w programach pisanych w języku C/C++ jest przekroczenie
zakresu pamięci zarezerwowanego dla danej tablicy, np. w wyniku niepoprawnego użycia licznika pętli w 
odwołaniu do elementu tablicy.


Proszę skompilować i kilkukrotnie wywołać poniższy program, aby przekonać się jak zachowuje się program
drukujący na ekranie wartości nie należące do zakresu tablicy:


```
#include <iostream>

using namespace std;

/*
 * Program demonstruje zachowanie w przypadku przekroczenia 
 * zakresu pamięci zarezerwowanej dla tablicy
 *
 */

int main() {

    int arrayOfNumbers[5] = {1,2,3,4,5};

    for(int i=-50; i<=15; i++){
 
        if (i==0) { 
            cout << "----- BEGIN ARRAY -----" << endl;
        }

        if (i==5) {
            cout << "----- END ARRAY ------" << endl;
        }

        cout << arrayOfNumbers[i] << endl;
    }

    return 0;
}
```

Zadania:
=======

1. Napisz program, który wczyta ze standardowego wejścia liczbę, a następnie wydrukuje ją na ekranie.
2. Napisz program, który wypełni tablicę 10-elementową kolejnymi liczbami całkowitymi, począwszy od 1.
3. Napisz program, który wypełni tablicę 10-elementową kolejnymi liczbami wczytywanymi ze standardowego wejścia.
4. Program z poprzedniego zadania rozbuduj - napisz funkcje, które obliczą wartość średnią, namniejszą i największą z podanej tablicy.
