#include <iostream>
#include <cstring>
using namespace std;
//Skladowe publiczne i prywatne
class pracownik {
public:
int wprowadz(char *, long, float);
void inf_o_prac(void);
int zmien_pensje(float);
long podaj_id(void);
private:
char imie_nazwisko[64];
long ident_prac;
float zarobki;
};
int pracownik::wprowadz(char* nazwisko_prac, long id_prac, float 
zarobki_prac) {
strcpy (imie_nazwisko, nazwisko_prac);
ident_prac = id_prac;
zarobki = zarobki_prac;
return(0);
}
void pracownik::inf_o_prac(void) {
cout << "Imie i nazwisko: " << imie_nazwisko << endl;
cout << "Identyfikator: " << ident_prac << endl;
cout << "Zarobki: " << zarobki << endl;
}
int pracownik::zmien_pensje(float nowa_pensja) {
if (nowa_pensja < 15000) {
zarobki = nowa_pensja;
return(0);
}
else
return(-1);
}
long pracownik::podaj_id(void) {
return (ident_prac);
}
int main(void) {
pracownik informatyk;
if (informatyk.wprowadz("Jan Kowalski", 101101, 4000) == 0){
cout << "Wartosci przypisane skladowym dla pracownika:" << endl;
informatyk.inf_o_prac();
}
if (informatyk.zmien_pensje(5000.00) == 0) {
cout << "---------------- \nNowa pensja pracownika" << endl;
informatyk.inf_o_prac();
}
else
cout << "Nieporawne zarobki!" << endl;
}
