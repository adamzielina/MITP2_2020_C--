#include <iostream>
#include <string>
using std::string;

string  zad5 (string slowo){

        int j = 0;
        string wyn = slowo;
        int error;

        for(int i=2; i< slowo.size();i++){

            error =0;

            for (int z = 2; z<i; z++){

                if (i%z ==0)
                    error = 1;

            }

            if (error==0){

                    wyn[j]= slowo[i];
                    j++;

            }

        }

        wyn[j] = slowo[0];
        j++;

        wyn[j] = slowo[1];
        j++;


        for(int i=2; i< slowo.size();i++){

            error =0;
            for (int z = 2; z<i; z++){

                if (i%z ==0)

                    error = 1;
            }

            if (error==1){

                    wyn[j]= slowo[i];
                    j++;
            }

        }

        return  wyn;

}

