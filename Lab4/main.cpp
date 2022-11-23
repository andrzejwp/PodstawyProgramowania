#include "iostream"

using namespace std;

int main() {

    cout << "#####Zad1#####" << endl;

    cout << "Podaj Liczbę" << endl;
    double liczba;
    cin >> liczba;
    cout << "oto twoja liczba" << endl;
    cout << liczba << endl;

    cout << "#####Zad2#####" << endl;

    double calkowite[10] = {};

    for (int i = 0; i < 10; ++i) {
        calkowite[i] = i + 1;
    }
    for (int i = 0; i < 10; ++i) {
        cout << calkowite[i] << endl;
    }
    cout << "#####Zad3#####" << endl;
    double tab[10] = {};
    cout << "podaj 10 liczb" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> tab[i];
    }
    cout << "oto podane liczby" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << tab[i] << endl;
    }
    cout << "#####Zad4#####" << endl;
    double suma;
    double srednia;
    for (int i = 0; i < 10; ++i) {
        suma = suma + tab[i];
    }
    srednia = suma / 10;
    double najwieksza = tab[1];
    for (int i = 0; i < 10; ++i) {
        if (najwieksza < tab[i]) {
            najwieksza = tab[i];
        }
    }
    double najmniejsza = tab[1];
    for (int i = 0; i < 10; ++i) {
        if (najmniejsza > tab[i]) {
            najmniejsza = tab[i];
        }
    }
    cout << "najwieksza liczba" << endl;
    cout << najwieksza << endl;
    cout << "najmniejsza liczba" << endl;
    cout << najmniejsza << endl;
    cout << "srednia liczb" << endl;
    cout << srednia << endl;
}