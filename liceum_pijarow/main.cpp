
#include <iostream>
#include "zadanie.h"
using namespace std;

int main (){

        string slowo = "KAWA Z MLEKIEM";
        string wynik;
        wynik = zad4(slowo);
        cout << slowo<<endl;
        cout << wynik<<endl<<endl;

        slowo = "ELEMENTARZ";
        wynik = zad4(slowo);
        cout << slowo<<endl;
        cout << wynik<<endl<<endl;

        slowo = "KLASA ROZSZERZONA";
        wynik = zad4(slowo);
        cout << slowo<<endl;
        cout << wynik<<endl;
        return 0;
}
