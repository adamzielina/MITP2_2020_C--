#include <iostream>
using namespace std;

class student {
private:
    string imie_nazwisko_ = "NO_NAME";
    unsigned int nr_indeksu_ = 0;

public:
    student(string imie_nazwisko, unsigned int nr_indeksu);
    string Opis_ = "student grupy";
    void printOpis();

    void printDane()
    {
        cout << " Metoda printDane klasy bazowej" << endl;
        cout << " imie nazwisko " << imie_nazwisko_ << endl;
        cout << " nr indeksu " << nr_indeksu_ << endl;
    }
};

class funkcyjny {
public:
   void poinformuj_grupe(){cout<<"metoda poinformuj grupe"<<endl;};
   void poinformuj_prowadzacego(){cout<<"metoda poinformuj prowadzacego"<<endl;};
};

class starosta : public student,public funkcyjny
{
private:
    string email_ = "nouser@noemail";

public:
    starosta(string imie_nazwisko, unsigned int nr_indeksu, string email);
    string Opis_ = "starosta grupy";
    void printDane()
    {
        cout << " Metoda printDane klasy starosta" << endl;
        cout << " email	" << email_ << endl;
        student::printDane();
    }
};

starosta::starosta(string imie_nazwisko, unsigned int nr_indeksu, string email) :
  student(imie_nazwisko, nr_indeksu), email_(email)
{
    cout << "Tworzenie obiektu klasy starosta o nazwie: " << Opis_ << endl;
}

student::student(string imie_nazwisko, unsigned int nr_indeksu) : 
  imie_nazwisko_(imie_nazwisko)
{
    nr_indeksu_ = nr_indeksu;
    cout << "Tworzenie obiektu klasy student o nazwie: " << Opis_ << endl;
}

void student::printOpis()
{
    cout << "Opis: " << Opis_ << endl;
}

int main()
{
    starosta star("Aleksandra Nowak", 999, "mail@nomail.dot");
    star.poinformuj_grupe();
    star.poinformuj_prowadzacego();
}
