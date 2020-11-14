#include <iostream>
#include <cstring>
using namespace std;
//Deklarowanie metody klasy na zewnatrz klasy
class psy {
public:
char rasa[30];
int srednia_waga;
int srednia_wysokosc;
void inf_o_psie(void);
};
void psy::inf_o_psie(void) {
cout << "Rasa: " << rasa << endl;
cout << "Srednia waga: " << srednia_waga << endl;
cout << "Srednia wysokosc: " << srednia_wysokosc << endl;
}
int main(void) {
psy balbina, fred;
strcpy (balbina.rasa, "Dalmatynczyk");
balbina.srednia_waga = 58;
balbina.srednia_wysokosc = 24;
strcpy (fred.rasa, "Owczarek szetlandzki");
fred.srednia_waga = 22;
fred.srednia_wysokosc = 15;
balbina.inf_o_psie();
fred.inf_o_psie();
}
