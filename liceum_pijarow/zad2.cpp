#include <iostream>
#include <string>
using std::string;


string  zad2 (string slowo){

        int j = 0;
        string wyn = slowo;

        for(int i=1; i<slowo.size();i+=2){

                wyn[j]= slowo[i];
                j++;

        }

        for(int i=0; i<slowo.size() ;i+=2){

                wyn[j]= slowo[i];
                j++;

        }


        return  wyn;

}
