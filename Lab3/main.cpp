// Aleksander Chohura Grupa: 3

#include <iostream>

#pragma clang diagnostic push
#pragma ide diagnostic ignored "UnreachableCode"
#pragma ide diagnostic ignored "ConstantConditionsOC"
using namespace std;

int main() {
    cout << "##### Zad 1 #####" << endl;
    int minusOne = -1;
    int zero = 0;
    int one = 1;

    if (minusOne) {
        cout << "minusOne == true" << endl;
    }

    if (zero) {
        cout << "zero == true" << endl;
    }

    if (one) {
        cout << "one == true" << endl;
    }

    cout << "##### Zad 2 #####" << endl;
    cout << "pętla while" << endl;

    int i = 0;
    while (i <= 20) {
        if ((i + 1) % 2) {
            cout << i << endl;
        }
        i++;
    }

    cout << "pętla do...while" << endl;
    i = 0;
    do {
        if ((i + 1) % 2) {
            cout << i << endl;
        }
        i++;
    } while (i <= 20);

    cout << "pętla for" << endl;

    for (int i = 0; i <= 20; i++) {
        if ((i + 1) % 2) {
            cout << i << endl;
        }
    }

    cout << "##### Zad 3 #####" << endl;

    for (int i = 30; i >= 20; i--) {

        cout << i << endl;
    }

    cout << "##### Zad 4 #####" << endl;
    int counter = 0;
    float bigNumber = 100;
    while (bigNumber >= 0.00004) {
        counter++;
        bigNumber = bigNumber / 2;
    }
    cout << "liczba podzieleń:" << endl;
    cout << counter << endl;
    cout << "liczba bigNumber po podzieleniu" << endl;
    cout << bigNumber << endl;
}


