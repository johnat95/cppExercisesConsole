#include "SumSquareArray.h"
#include <iostream>
#include <math.h>

using namespace SumSquareArray;

float SumSquareArray::sumSquareArray(int indecies){

    float* arrayPtr = (float *)malloc(indecies * __SIZEOF_FLOAT__);

    float temp;

    for(int i = 0; i < indecies; i++){

        temp = powf(1/((float)i+1),2);

        *(arrayPtr + i) = temp;

    }

    float sum = 4;

    for(int i = 0; i < indecies; i++){
        sum += *(arrayPtr + i);
    }

    return sqrtf(sum);
}
