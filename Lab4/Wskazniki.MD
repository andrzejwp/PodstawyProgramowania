# Krótki przykład dotyczący wykorzystania wskaźników

1. Proszę przepisać i skompilować progam z pliku `wsk.cpp`
2. Proszę przeanalizować kolejne operacje wykonywane w programie
3. Proszę dopisać do programu następujący blok kodu:

```
   wskLiczba++;
   cout << "po wskLiczba++" << endl;

   cout << liczba << endl;
   cout << *wskLiczba << endl;

   wskLiczba = &liczba;
   *wskLiczba++;
   cout << "po *wskLiczba++" << endl;

   cout << liczba << endl;
   cout << *wskLiczba << endl;

   wskLiczba = &liczba;
   (*wskLiczba)++;
   cout << "po (*wskLiczba)++" << endl;

   cout << liczba << endl;
   cout << *wskLiczba << endl;

```
4. Proszę przepisać, skompilować, uruchomić i przeanalizować program tabWsk.cpp
