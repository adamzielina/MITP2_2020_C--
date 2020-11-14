#include <iostream>
#include <cmath>
using namespace std;

class Vector {
public:
    friend double f1(Vector);
    Vector(double);
    Vector(double,double);
    Vector(double,double,double);
    int dimension_;
private:
    double data_[3] = { 0, 0, 0 };
};

Vector::Vector(double element1)
{
    dimension_ = 1;
    data_[0] = element1;
}

Vector::Vector(double element1,double element2)
{
    dimension_ = 2;
    data_[0] = element1;
    data_[1]=element2;
}

Vector::Vector(double element1,double element2,double element3)
{
    dimension_ = 3;
    data_[0] = element1;
    data_[1]=element2;
    data_[2]=element3;
}

double f1(double*tab){
   return sqrt(*tab*(*tab)+*(tab+1)*(*(tab+1))+*(tab+2)*(*(tab+2)) );
}

double f1(Vector obiekt){
   return sqrt(obiekt.data_[0]*obiekt.data_[0]+obiekt.data_[1]*obiekt.data_[1]+obiekt.data_[2]*obiekt.data_[2]);
}

int main(){
    Vector r3(1.0,2.0,1.0);//R3
    double tab[3]={1.0,2.0,1.0};
    cout<<"modul wektora : "<<f1(tab)<<endl;
    cout<<"modul wektora : "<<f1(r3)<<endl;
}
