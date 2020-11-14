#include <iostream>
#include <cstring>
using namespace std;

class circle{
   private:
      float radius;
      float area;
      float circumference;
   public:
      void setRadius(float r);
      float getRadius();
      circle(float r):area(3.14*r*r){
         setRadius(r);
      }
      void inf(){cout<<radius<<endl<<area<<endl;}
};

void circle::setRadius(float r){
   radius=r;
}

float circle::getRadius(){
   return radius;
}

int main(){
   circle o1(4);
   o1.inf();
   o1.setRadius(10);
   cout<<o1.getRadius()<<endl;
}
