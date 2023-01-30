#include "SixIntMemeory.h"
#include <iostream>
#include <string>

using namespace SixIntegerMemory;

int* SixIntegerMemory::getInts(int indecies){


    int *arrayPtr = (int *)malloc(indecies * __SIZEOF_INT__);

    std::string temp;

    for(int i = 0; i < 6; i++){
        std::cout << "Number " << i+1 << ": ";

        std::cin >> *(arrayPtr + i);
    }

    return arrayPtr;

}

void SixIntegerMemory::printArrayReverse(int* arrayPtr, int indecies){

    for(int i = indecies-1; i >= 0; i--){
        std::cout << *(arrayPtr + i ) << " | ";
    }

    std::cout << "\n";

    free(arrayPtr);

}
