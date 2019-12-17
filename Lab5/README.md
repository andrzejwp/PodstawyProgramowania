Operacje wejścia/wyjścia
=========================

Podstawowe operacje wejścia / wyjścia, które wykorzystywane były w poprzednich programach to drukowanie na tzw. "standardowe wyjście" (ang. *stdout*), przy pomocy ``cout`` oraz wczytywanie ze "standardowego wejścia" (ang. *stdin*), przy pomocy ``cin``.

Korzystanie z danych zapisanych w pliku zlokalizowanym na dysku jest bardzo podobne,
interfejs jest analogiczny jak przy ``cout`` / ``cin``.

Poniżej przykładowy program zapisujący linię tekstu w pliku.

```
#include <iostream>
#include <fstream>

using namespace std;

int main () {
    ofstream plik;
    plik.open ("plik1.txt");
    plik << "Linia tekstu zapisan do pliku.\n";
    plik.close();
    return 0;
}

```

Zadania
=======

1. Napisz funkcję wczytującą z pliku tekstowego o zadanym formacie (opisany poniżej) zbiór liczb.

2. Zawartość tablicy wczytanej w zad 1 zapisz do nowego pliku, w odwrotnej kolejności.


K - ilosc liczb całkowitych w kolejnych liniach
n0...nk - kolejne liczby całkowite

Format pliku WE:

```
K
n0
n1
...
nk
```

Format pliku WY:

```
nk
nk-1
nk-2
...
n0
```



3(\*). Rozbuduj program wczytujący / zapisujący dane do pliku o możliwość pracy z danymi wielowymiarowymi, tak aby każdy wiersz zapisany w pliku mógł składać się z kilku kolumn. Przykład:

```
123321  Janina  Kowalska    17-12-2019      obecna
321123  Piotr   Nowak       17-12-2019      nieobecny
```
