#include "AdressOFThreeValues.h"
#include <string>
#include <iostream>

using namespace ThreeAddresses;

void ThreeAddresses::printAdresses(std::string s, int i, double d){

    std::string* sPtr = &s;
    std::cout << "Integer: " << *sPtr << " at " << sPtr << "\n";

    int *iPtr = &i;
    std::cout << "String: " << *iPtr << " at " << iPtr << "\n";

    double* dPtr = &d;
    std::cout << "Double: " << *dPtr << " at " << dPtr << "\n";

}

