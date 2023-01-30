#include "OneToArbitrary.h"
#include <string>
#include <iostream>

using namespace OneToArbitrary;

void OneToArbitrary::produceNumbersandWrite(int limit){

    int writeCount = 0;

    for(int i = 1; i <= limit; i++){


        //skip multiples
        if(i%6 == 0 || i%17 == 0){
            continue;
        }else{
            writeCount++;
            std::cout << i << " | ";
        }
        if(writeCount%10 == 0){
            std::cout << '\n';
        }

    }

}
