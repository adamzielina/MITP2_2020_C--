#include <iostream>
#include <cstring>
using namespace std;

class circle{
   private:
      float radius;
      float area;
      float circumference;
   public:
      circle(float r):radius(r),area(3.14*r*r){}
      void inf(){cout<<radius<<endl<<area<<endl;}
};

int main(){
   circle o1(4);
   o1.inf();
}
