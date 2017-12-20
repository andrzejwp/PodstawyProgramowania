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
