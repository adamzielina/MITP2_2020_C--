#include <iostream>
#include <cstring>
using namespace std;

class circle {
   public:
      circle ();
      ~circle (void){};
      void inf_(void){cout<<*radius_<<endl;};
      float *radius_;
};

circle::circle(){
   radius_= new float;
}

int main (){
   circle o1,o2;
   float i=5,j=6;
   o1.radius_=&i;
   o2.radius_=&j;
   o1.inf_();
   o2.inf_();
   return 0;
}
