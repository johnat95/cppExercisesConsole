#include "SwapValues.h"

using namespace SwapValues;

void SwapValues::swapValues(int &a, int &b){

    int *ptrA = &a;
    int *ptrB = &b;

    //dereference a, storing the value of a in temp
    int temp = *ptrA;

    //dereference *b into ptr a
    *ptrA = *ptrB;

    //set value of ptr b to temp
    *ptrB = temp;


}

