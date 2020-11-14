#include <iostream>
#include <stdio.h>
using namespace std;

class Vector {
public:
    Vector(double);
    Vector(double,double);
    Vector(double,double,double);
    void metoda(void);
    void metoda(Vector);
    int dimension_;
private:
    double data_[3] = { 0, 0, 0 };
};

Vector::Vector(double element1)
{
    cout << "\n Tworzenie obiektu klasy Vector w przestrzeni R1 :" << endl;
    dimension_ = 1;
    data_[0] = element1;
}

Vector::Vector(double element1,double element2)
{
    cout << "\n Tworzenie obiektu klasy Vector w przestrzeni R2 :" << endl;
    dimension_ = 2;
    data_[0] = element1;
    data_[1]=element2;
}

Vector::Vector(double element1,double element2,double element3)
{
    cout << "\n Tworzenie obiektu klasy Vector w przestrzeni R3 :" << endl;
    dimension_ = 3;
    data_[0] = element1;
    data_[1]=element2;
    data_[2]=element3;
}

void Vector::metoda(void){
    for(int i=0;i<dimension_;i++)
        cout<<data_[i]<<endl;
    cout<<"obiekt o wymiarze: "<<dimension_<<endl;
}

void Vector::metoda(Vector z){
   for(int i=0;i<z.dimension_;i++)
      cout<<z.data_[i]<<endl;
   cout<<"obiekt o wymiarze: "<<z.dimension_<<endl;
}

int main(){
    Vector r1(1.0); // R1
    cout << "Obiekt klasy Vector o wymiarze:" << r1.dimension_ << endl;
    Vector r2 (1.0,1.0);//R2
    cout << "Obiekt klasy Vector o wymiarze:" << r2.dimension_ << endl;
    Vector r3(1.0,1.0,1.0);//R3
    cout << "Obiekt klasy Vector o wymiarze:" << r3.dimension_ << endl;
    r1.metoda();
    r2.metoda();
    r3.metoda();
    r1.metoda(r3);
    r2.metoda(r2);
    r3.metoda(r1);
}
