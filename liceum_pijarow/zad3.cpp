#include <iostream>
#include <string>
using std::string;


string  zad3 (string slowo){

        int j = 0;
        string wyn = slowo;

        if (slowo.size()%2==0){
                for(int i=slowo.size()-2; i>=0;i-=2){

                        wyn[j]= slowo[i];
                        j++;

                }

                for(int i=1; i<slowo.size();i+=2){

                        wyn[j]= slowo[i];
                        j++;

                }
        }

        else{
                for(int i=slowo.size()-1; i>=0;i-=2){

                        wyn[j]= slowo[i];
                        j++;

                }

                for(int i=1; i<slowo.size();i+=2){

                        wyn[j]= slowo[i];
                        j++;

                }
        }

        return  wyn;

}
