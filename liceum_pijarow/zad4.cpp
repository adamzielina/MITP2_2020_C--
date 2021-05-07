#include <iostream>
#include <string>
using std::string;
using std::cout; using std::endl;

string  zad4 (string slowo){

        int j = 0;
        int z=0;
        string wyn = slowo;

        for(int i= slowo.size()-1; i> slowo.size()/2-1; i--){
                if (slowo.size()%2!=0 && slowo.size()/2-0.5==i)
                        wyn[j] = slowo[z];

                else{
                        wyn[j]= slowo[z];
                        wyn[j+1] = slowo [i];
        cout <<j <<endl;
        cout << slowo<<endl;
        cout<<wyn<<endl;
        cout <<i <<endl;
        cout <<slowo[i] <<endl;

                        j+=2;
                        z++;
                }
        }
        return  wyn;

}
