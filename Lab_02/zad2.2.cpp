#include <iostream>
#include <cstring>
using namespace std;

class circle {
   public:
      circle (float);
      void inf_(void);
      float radius_;
};

circle::circle (float rad){
   radius_=rad;
}

void circle::inf_(void){
   cout<<"radius: "<<radius_<<endl;
}

int main (){
   circle o1(4),o2(5);
   o1.inf_();
   o2.inf_();
   return 0;
}
