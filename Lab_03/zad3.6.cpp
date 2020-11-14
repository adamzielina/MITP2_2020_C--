#include <iostream>
#include <stdio.h>
using namespace std;

class Vector {
public:
    friend Vector operator+(Vector o1,Vector o2);
    Vector(double);
    Vector(double,double);
    Vector(double,double,double);
    int dimension_;
    void inf(){cout<<data_[0]<<endl<<data_[1]<<endl<<data_[2]<<endl;}
private:
    double data_[3];
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

Vector operator+(Vector o1,Vector o2){
   Vector c(0,0,0);
   c.data_[0]=o1.data_[0]+o2.data_[0];
   c.data_[1]=o1.data_[1]+o2.data_[1];
   c.data_[2]=o1.data_[2]+o2.data_[2];
   return c;
}

int main(){
    Vector r2(1.0,1.0,1.0);//R3
    Vector r3(1.0,1.0,1.0);//R3
    Vector R=r2+r3;
    R.inf();
}
