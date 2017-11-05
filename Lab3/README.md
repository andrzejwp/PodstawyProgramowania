Instrukcje warunkowe, pętle
===========================

Instrukcja warunkowa ``if``
---------------------------

Poniżej przedstawiony jest przykładowy program, który wydrukuje na ekranie
informację o tym, czy wprowadzona do zmiennej ``number`` wartość jest parzysta,
czy nieparzysta.

```
int number = 5;

if(number % 2 == 0) {

    cout << "Liczba parzysta" << endl;

} else {

    cout << "Liczba nieparzysta" << endl;

}
```

*Wskazówka - operator ``%`` to operator dzielenia modulo, czyli tzw. "reszta z
dzielenia".*

Instrukcja warunkowa pozwala na tworzenie rozgałęzień w toku wykonywania programu,
z punktu widzenia utrzymania kodu ważne jest jednak, aby unikać nadmiernego
komplikowania programów przez zbyt rozbudowane bloki instrukcji warunkowych:

```
if(number < 5) {

} else if(number > 3 && number < 9) {

  if(number %2 == 0){

  } else {

  }

} else if(number > 12 && number %2 == 0) {

}
```

- taki sposób zapisu logiki aplikacji prowadzi bardzo szybko do powstawania
błędów w funkcjonowaniu oprogramowania.

Pętla ``while``
---------------

Najprostszą pętlą w języku C/C++ jest pętla ``while``:

```
int number = 1;
while(number == 1) {
  cout << number << endl;
}

```

W zapisie takiej pętli znajdują się 2 istotne części:
 - ``(number == 1)`` - warunek, wyrażenie ewaluowane przed każdym wykonaniem pętli
 - ``{ ... }`` - treść pętli, instrukcje wykonywane przy każdym przebiegu pętli.

Istotne jest, że warunek może być praktycznie dowolnym wyrażeniem, pod warunkiem,
że jego wynik jest rzutowalny na typ ``bool``.

Pętla ``do...while``
--------------------

Pętla ``do...while`` różni się od pętli ``while`` chwilą, w której ewaluowany jest
warunek - w przypadku pętli ``while`` odbywa się to przed każdym przebiegiem pętli,
a w pętli ``do...while`` - po.

```
do{
  cout << number << endl;
} while(number > 0)
```

Pętla ``for``
-------------

Najczęściej stosowanym zapisam pętli jest pętla ``for``, która pozwala w sposób
bardziej zwięzły i przejrzysty zapisać informacje o warunkach początkowych, warunku zakończenia oraz kroku aktualizacji pętli.

```
for(int i=0; i < 10; i++){
 cout << i << endl;
}
```

Każda pętla for ma swój równoważny zapis przy pomocy pętli while.

```
int i=0;                          
while(i < 10){                    
  cout << i << endl;            
  i++;
}
```



Ćwiczenia
---------
1. Zdefiniuj w ``main()`` 3 zmienne typu ``int``, przypisz im wartości ``-1``,
``0`` i ``1``, a następnie napisz 3 instrukcje warunkowe, z których każda wydrukuje
na ekranie napis ``zmiennaX == true`` jeżeli spełniony będzie warunek ``if(zmiennaX)``. W jaki sposób rzutowany jest na ``bool`` typ ``int``?

2. Przy pomocy pętli ``while``, ``do...while`` oraz ``for`` rozwiąż to samo zadanie:
wydrukuj na ekranie liczby parzyste z przedziału od 0 do 20. Wykorzystaj operator ``%``.

3. Napisz pętlę ``for``, która wydrukuje na ekranie liczby naturalne od 30 do 20.

4. Napisz pętlę, która będzie dzieliła liczbę ``float bigNumber = 100;`` na 2, tak długo, aż wynik nie będzie mniejszy od ``0.00004``.
