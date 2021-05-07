#include <iostream>
#include "zadanie.h"
#include <string>
using std::string;

string zad1 (string slowo){
        int j = 0;
        string wyn = slowo;
        for(int i=slowo.size()-1; i>= 0; i--){
                wyn[j]= slowo[i];
                j++;
        }
        return  wyn;
}
