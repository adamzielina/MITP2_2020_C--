#include <iostream>
#include <cstring>
using namespace std;

class circle {
   public:
      float circumference ();
      float area();
      float radius_;
};

float circle::circumference (){
   return 2*3.14*radius_;
}

float circle::area (){
   return 3.14*radius_*radius_;
}

int main (){
   circle o1,o2;
   o1.radius_=4;
   o2.radius_=5;
   cout<<"area 1&2: "<<endl<<o1.area()<<endl<<o2.area()<<endl;
   cout<<"circumference 1&2"<<endl<<o1.circumference()<<endl<<o2.circumference()<<endl;
   return 0;
}
