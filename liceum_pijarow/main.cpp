#include <iostream>
#include "zadanie.h"
using namespace std;

// g++ -o zadanie main.cpp zad5.o zad4.o zad3.o zad2.o zad1.o


int main (){

        string slowo;
        string wynik;
        cout << "kod 1"<<endl;
        slowo = "KAWA Z MLEKIEM";
        wynik = zad1(slowo);
        cout << slowo<<endl;
        cout << wynik<<endl<<endl;



        slowo = "ELEMENTARZ";
        wynik = zad1(slowo);
        cout << slowo<<endl;
        cout << wynik<<endl<<endl;

        slowo = "KLASA ROZSZERZONA";
        wynik = zad1(slowo);
        cout << slowo<<endl;
        cout << wynik<<endl<<endl;
    cout << "kod 2"<<endl;
         slowo = "KAWA Z MLEKIEM";

        wynik = zad2(slowo);
        cout << slowo<<endl;
        cout << wynik<<endl<<endl;

         slowo = "ELEMENTARZ";

        wynik = zad2(slowo);
        cout << slowo<<endl;
        cout << wynik<<endl<<endl;

         slowo = "KLASA ROZSZERZONA";

        wynik = zad2(slowo);
        cout << slowo<<endl;
        cout << wynik<<endl<<endl;
    cout << "kod 3"<<endl;
         slowo = "KAWA Z MLEKIEM";

        wynik = zad3(slowo);
        cout << slowo<<endl;
        cout << wynik<<endl<<endl;

        slowo = "ELEMENTARZ";
        wynik = zad3(slowo);
        cout << slowo<<endl;
        cout << wynik<<endl<<endl;

        slowo = "KLASA ROZSZERZONA";
        wynik = zad3(slowo);
        cout << slowo<<endl;
        cout << wynik<<endl<<endl;
    cout << "kod 4"<<endl;
         slowo = "KAWA Z MLEKIEM";

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
        cout << wynik<<endl<<endl;
    cout << "kod 5"<<endl;
         slowo = "KAWA Z MLEKIEM";

        wynik = zad5(slowo);
        cout << slowo<<endl;
        cout << wynik<<endl<<endl;

        slowo = "ELEMENTARZ";
        wynik = zad5(slowo);
        cout << slowo<<endl;
        cout << wynik<<endl<<endl;

        slowo = "KLASA ROZSZERZONA";
        wynik = zad5(slowo);
        cout << slowo<<endl;
        cout << wynik<<endl;
    cout << "kod 5"<<endl;
         slowo = "KAWA Z MLEKIEM";

        wynik = zad5(slowo);
        cout << slowo<<endl;
        cout << wynik<<endl<<endl;

        slowo = "ELEMENTARZ";
        wynik = zad5(slowo);
        cout << slowo<<endl;
        cout << wynik<<endl<<endl;

        slowo = "KLASA ROZSZERZONA";
        wynik = zad5(slowo);
        cout << slowo<<endl;
        cout << wynik<<endl;

        return 0;
}

