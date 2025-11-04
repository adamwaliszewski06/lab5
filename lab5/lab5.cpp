#include <iostream> 
using namespace std;

/* zad 1 - wprowadzenie 10 wartosci do tabeli i wyswietlenie w odwrotnej kolejnosci */
int main() { 
    int tab[10];
    int n;

    for (int i = 0; i < 10; i++) { //pozycje od 0 do 9
        cout << "Wprowadz " << i+1 << " liczbe: ";
        cin >> n;
        tab[i] = n; 
    }

    for (int i = 9; i >= 0; i=i-1) { //pozycje od 9 do 0 wlacznie
        cout << tab[i] << endl;
    }
    return 0;
}