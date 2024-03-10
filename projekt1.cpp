#include <iostream>
#include<cmath>

using namespace std;

bool czy_pierwsza(int liczba){
    bool wynik = true;
    if(liczba <= 1){
        wynik = false;
    } else if(liczba == 2 || liczba == 3){
        return wynik;
    } else if(liczba%2 == 0 || liczba%3 == 0){
        wynik = false;
    } else{
        for(int i = 5; i <= sqrt(liczba); i++){
            if(liczba%i == 0){
                wynik = false;
                break;
            }
        }
    }
    return wynik;
}

int main() {
    int a;
    cout << "Podaj liczbe calkowita ";
    cin >> a;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. Sprawdz czy jest liczba pierwsza" << endl;
        cin >> wyjscie;
        if(wyjscie == 1){
            cout << "Liczba " << a;
            if(czy_pierwsza(a)){
                cout << " jest liczba pierwsza." << endl;
            } else{
                cout << " nie jest liczba pierwsza." << endl;
            }
        }
    } while(wyjscie != 0);
    return 0;
}
