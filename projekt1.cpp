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
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}
