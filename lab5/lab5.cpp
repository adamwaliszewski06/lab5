#include <iostream> 
#include <random>
using namespace std;

/* zad 1 - wprowadzenie 10 wartosci do tabeli i wyswietlenie w odwrotnej kolejnosci 
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
*/

/* zad 2 - Napisz program, który zerowemu elementowi tablicy przypisze wartość zero, a pierwszemu elementowi
 tablicy przypisze wartość jeden (tab[0] = 0, tab[1] = 1), następnie wyznaczy kolejne liczby Fibonacciego. Niech
 użytkownik określi ile kolejnych liczb chce wyznaczyć 

int main() {
    int n;
    cout << "Podaj ile kolejnych liczb Fibonacciego wyznaczyc: ";
    cin >> n;
 
    if (n < 2) {
        cout << "Liczba musi byc wieksza lub rowna 2" << endl;
		return 1; //return 1 = program zakonczyl sie bledem
	}
    else {
        int* table = new int[n]; // dynamiczna tablica o rozmiarze n
        table[0] = 0;
        table[1] = 1;
        cout << table[0] << endl;
        cout << table[1] << endl;
        for (int i = 2; i < n; i++) {
            table[i] = table[i - 1] + table[i - 2]; //kolejne liczby sa suma dwoch poprzednich
            cout << table[i] << endl;
        }
    }
	return 0; //return 0 = program zakonczyl sie poprawnie
}
*/

/* zad 3 - Napisz program, który wygeneruje tablicę i wypełni ją 10 losowymi elementami typu int. Następnie:
 1. Oblicz wartość średnią liczb znajdujących się w tablicy i wypisz ile jest elementów mniejszych od obliczonej
 wartości średniej.
 2. Znajdź element najmniejszy i największy w tablicy 

float srednia(int tab[], int rozmiar);
int maksimum(int tab[], int rozmiar);
int minimum(int tab[], int rozmiar);

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(-900, 900);

    int tab[10];

    for (int i = 0; i < 10; ++i) {
        tab[i] = dist(gen);}

    cout << "Wygenerowane 10 losowych liczb:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "tab[" << i << "] = " << tab[i] << endl;}

    cout << "Srednia wartosc liczb w tablicy wynosi: " << srednia(tab, 10) << endl;
	cout << "Najmniejszy element w tablicy to: " << minimum(tab, 10) << endl;
	cout << "Najwiekszy element w tablicy to: " << maksimum(tab, 10) << endl;
}

float srednia(int tab[], int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; ++i) {
        suma += tab[i];
    }
    return suma / rozmiar;}

int maksimum(int tab[], int rozmiar) {
    int maks = tab[0];
    for (int i = 1; i < rozmiar; ++i) {
        if (tab[i] > maks) {
            maks = tab[i];}}
    return maks;}

int minimum(int tab[], int rozmiar) {
    int min = tab[0];
    for (int i = 1; i < rozmiar; ++i) {
        if (tab[i] < min) {
            min = tab[i];}}
    return min;}
    */

/* zad 4 -  Napisz program, który prosi użytkownika o podanie wymiaru macierzy (użytkownik określa liczbę wierszy
 i kolumn), następnie program prosi użytkownika o wprowadzenie wartości dla poszczególnych komórek zadanej
 macierzy i wyświetla ją 

int main() {
    int** macierz;
	int w, k; // liczby wierszy i kolumn
	cout << "Podaj liczbe wierszy macierzy: ";
	cin >> w;
	cout << "Podaj liczbe kolumn macierzy: ";   
	cin >> k;
    macierz = new int* [w]; //przydzielenie pamięci na okreslona liczbe wierszy

    for (int i = 0; i < w; i++)
        macierz[i] = new int[k]; //przydzielenie dla każdego wiersza po k komórek

	for (int i = 0; i < w; i++) { //dla kazdego wiersza
		for (int j = 0; j < k; j++) { //dla kazdej kolumny
            cout << "Podaj element macierzy na pozycji [" << i << "][" << j << "]: ";
            cin >> macierz[i][j];
		}
        }
    cout << "Wprowadzona macierz:  " << endl;
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            cout << macierz[i][j] << " ";
        }  
		cout << endl; //po wypisaniu kazdego wiersza przechodzi do nowej linii
    }
	return 0;
}
*/

/* zad 5 - Napisz program, który pozwala użytkownikowi na wprowadzenie n liczb rzeczywistych do tablicy 10
elementowej, gdzie n jest z zakresu [0,10]. Jeśli użytkownik wprowadzi mniej niż 10 liczb, to dopełnij tablicę
 zerami (przykładowo jeśli użytkownik poda 4 liczby, to 6 pozostałych elementów tablicy przyjmuje wartość 0).
 Dla tak przygotowanej tablicy oblicz wartość średnią, maksymalną i minimalną 

float srednia(int tab[], int rozmiar);
int maksimum(int tab[], int rozmiar);
int minimum(int tab[], int rozmiar);

int main() {
    int tab[10];
    int n, liczba;
	cout << "Ile liczb chcesz wprowadzic (0-10): ";
	cin >> n;

    for (int i = 0; i < n; i++) { 
        cout << "Wprowadz " << i + 1 << " liczbe: ";
        cin >> liczba;
        tab[i] = liczba;
    }

    for (int i = n; i < 10; i++) { 
        tab[i] = 0;
	}

    for (int i = 0; i < 10; i++) {
        cout << tab[i] << endl;
    }

	cout << endl;
    cout << "Srednia wartosc liczb w tablicy wynosi: " << srednia(tab, 10) << endl;
    cout << "Najmniejszy element w tablicy to: " << minimum(tab, 10) << endl;
    cout << "Najwiekszy element w tablicy to: " << maksimum(tab, 10) << endl;

    return 0;
}

float srednia(int tab[], int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; ++i) {
        suma += tab[i];
    }
    return suma / rozmiar;
}

int maksimum(int tab[], int rozmiar) {
    int maks = tab[0];
    for (int i = 1; i < rozmiar; ++i) {
        if (tab[i] > maks) {
            maks = tab[i];
        }
    }
    return maks;
}

int minimum(int tab[], int rozmiar) {
    int min = tab[0];
    for (int i = 1; i < rozmiar; ++i) {
        if (tab[i] < min) {
            min = tab[i];
        }
    }
    return min;
}
*/

/* zad 6 - */