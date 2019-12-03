#include <iostream>
using namespace std;
int main(){


   int liczba = 5;
   int *wskLiczba;

   cout << liczba << endl;
   cout << *wskLiczba << endl;

   cout << sizeof(liczba) << endl;
   cout << sizeof(wskLiczba) << endl;


   cout << &liczba << endl;
   cout << wskLiczba << endl;


   wskLiczba = &liczba;

   cout << &liczba << endl;
   cout << wskLiczba << endl;

   cout << liczba << endl;
   cout << *wskLiczba << endl;

   liczba = 6;
   cout << "po liczba=6" << endl;

   cout << liczba << endl;
   cout << *wskLiczba << endl;

   *wskLiczba = 7;
   cout << "po wskLiczba=7" << endl;
   
   cout << liczba << endl;
   cout << *wskLiczba << endl;



   return 0;
}
