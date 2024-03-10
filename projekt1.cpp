#include <iostream>

using namespace std;

int silnia(int liczba){
    int wynik = 1;
    if(liczba == 0){
        return wynik;
    } else{
        for(int i = 1; i <= liczba; i++){
            wynik = wynik * i;
        }
        return wynik;
    }
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. Silnia" << endl;
        cin >> wyjscie;
        if(wyjscie == 1){
            cout << "Wynik: " << a << "! = " << silnia(a) << endl;
        }
    } while(wyjscie != 0);
    return 0;
}
