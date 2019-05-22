# Interfejsy, polimorfizm

Finalne rozwiązanie poruszanego w poprzednich przykładach zagadnienia wymaga zastosowania tzw. polimorfizmu. Jest to technika wykorzystywana w programowaniu obiektowym w języku C++, która pozwala na opóźnienie rozwiązywania typów i przeniesienie ich do etapu wykonywania programu (z etapu kompilacji, jak to odbywa się tradycyjnie). Po wprowadzeniu dość prostej modyfikacji w programie - uzyskujemy oczekiwane działanie.

```
    virtual string getForPrint()=0;
```

Natomiast nie poprzestajemy na określeniu metody `getForPrint()` jako metody wirtualnej - tworzymy dedykowany interfejs, dzięki czemu nasz program stanie się programem w pełni obiektowym.

```
void printPerson(IPrintable *p){
    cout << p->getForPrint() << endl;
}
```