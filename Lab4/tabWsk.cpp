#include <iostream>
using namespace std;

int main(){


   int tablica[10] = {1,2,3,4,5,6,7,8,9,10};

   cout << "[0]=" << tablica[0] << endl;
   cout << "[1]=" << tablica[1] << endl;


   cout << tablica << endl;
   cout << *tablica << endl;
   
   int *wskTab = tablica;

   cout << wskTab << endl;
   cout << *wskTab << endl;


   cout << "[0]=" << wskTab[0] << endl;
   cout << "[1]=" << wskTab[1] << endl;

   wskTab++;

   cout << "[0]=" << wskTab[0] << endl;
   cout << "[1]=" << wskTab[1] << endl;


   return 0;
}
