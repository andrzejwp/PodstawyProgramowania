Korzystanie z kompilatora, etapy kompilacji
===========================================

1. Napisz najprostszy program, skompiluj go i uruchom:

  prog1.cpp:
  ```
  int main() {
     return 0;
  }

  ```

  g++ prog1.cpp
  ./a.out

2. Uruchom manualnie kolejne etapy kompilacji:

  - sprawdź wersję kompilatora: ``g++ --version``
  ```
  g++ (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4
  Copyright (C) 2013 Free Software Foundation, Inc.
  This is free software; see the source for copying conditions.  There is NO
  warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  ```
  w tym przypadku wersja kompilatora to ``4.8.4`` - ta informacja będzie potrzebna
  później.

  - uruchom preprocesor: ``g++ -E prog1.cpp -o prog1.preprocessed``
  - obejrzyj wynik działania preprocesora: ``cat prog1.preprocessed``
  - uruchom kompilator, nie asembluj: ``g++ -S prog1.cpp -o prog1.compiled``
  - obejrzyj wynik: ``cat prog1.compiled``
  - uruchom kompilator + asembler: ``g++ -c prog1.cpp -o prog1.compiled-assembled``
  - obejrzyj wynik: ``cat prog1.compiled-assembled``
  - obejrzyj lepiej: ``nm prog1.compiled-assembled``
  - linker - uwaga, ścieżki są poprawne dla wersji gcc ``4.8.4``: ``ld -dynamic-linker /lib64/ld-linux-x86-64.so.2 -o prog1 /usr/lib/x86_64-linux-gnu/crt1.o /usr/lib/x86_64-linux-gnu/crti.o /usr/lib/gcc/x86_64-linux-gnu/4.8.4/crtbegin.o prog1.compiled-assembled -L/usr/lib/gcc/x86_64-linux-gnu/4.8.4 -lstdc++ -lc /usr/lib/gcc/x86_64-linux-gnu/4.8.4/crtend.o /usr/lib/x86_64-linux-gnu/crtn.o``

3. Napisz program, który będzie składał się z 3 plików:
 - main.cpp
 - funkcje.cpp
 - funkcje.h

 Program main powinien korzystać z funkcji ``int dodaj(int,int)`` definiowanej w pliku źródłowym ``funkcje.cpp``.
 Skompiluj pliki ``main.cpp`` i ``funkcje.cpp`` osobno, niezależnie od siebie: ``g++ -c main.cpp -o main.o``, ``g++ -c funkcje.cpp -o funkcje.o``
 Wykonaj polecenie ``nm funkcje.o`` oraz ``nm main.o`` aby sprawdzić jakie symbole
 eskportowane są przez poszczególne pliki ``.o``.
 Wykonaj operację linkowania obiektów ``main.o`` i ``funkcje.o``.

4. Najczęstsze błędy
 W przypadku dużej części popełnianych przez programistów błędów narzędzia kompilatora umożliwiają szybkie wykrycie i poprawienie problematycznego kodu.
 Konieczne jest jednak opanowanie umiejętności czytania ze zrozumieniem informacji dotyczących błędów zwracanych w procesie kompilacji, co nie powinno jednak być trudne.
 Przykładowy opis błędu:
 ```
 prog3.cpp: In function ‘int main()’:
 prog3.cpp:6:14: error: ‘dodja’ was not declared in this scope
      dodja(a,b);
                    ^
 ```              
 kluczowe informacje to:
 - cyfra 6 w ciągu ``prog3.cpp:6:14`` - mówi o numerze linii gdzie pojawił się błąd
 - opis błędu ``'dodja' was not declared in this scope`` - informujący o tym, że symbol ``dodja`` nie jest zadeklarowany
 - znak karetki ``^`` ilustrujący miejsce napotkania błędu

 Ćwiczenia:
 ----------
 - w programie prog1.cpp usuń nawias klamrowy zamykający definicję funkcji main, przeprowadź kompilację, zapoznaj się z błędem
 - w programie prog3.cpp usuń średnik (``;``) w linii ``int b=5;``, przeprowadź kompilację, zapoznaj się z błędem
 - w programie prog3.cpp zrób tzw. czeski błąd w nazwie wywoływanej funkcji - ``dodja`` zamiast ``dodaj``, przeprowadź kompilację, zapoznaj się z błędem
 - przeprowadź inspekcję wyniku działania poszczególnych etapów kompilacji dla bardziej złożonych programów (np. takich zawierających pętle, instrukcje warunkowe itd)
