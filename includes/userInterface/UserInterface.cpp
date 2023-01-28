
#include "UserInterface.h"

#include <iostream>
#include <ostream>
#include <array>
#include <iomanip>


using namespace UserInterface;


//* Printing Methods

void UserInterface::printMenu(){

    //array hold a list of programs offered
    std::array <std::string, 7> programOptions {"Area of a Circle", "Find Job Candidate", "List Numbers to Arbitrary Limit",
                                        "Dynamic Float Array", "Address of Three Values", "Swap Values", "Six Int Memory"};

    std::cout << UserInterface::MenuInstructions::MAIN_MENU_INSTRUCTION;

    for(int i = 0; i < programOptions.size(); i++)
    {
        //fix string formatting
        int num = i+1;
        std::cout << num << ". " << programOptions[i] << "\n";
    }
}

void UserInterface::printAreaOfCircleEvaluation(double a){
    std::cout << "The area of the circle is " << a << "\n";

}
void UserInterface::printAreaOfCircleEvaluation(double a, int percision){
    std::cout << "The area of the circle is " << std::setprecision(percision) << a << "\n";
}

void UserInterface::printAddressAndValue(std::string label, int &a){
    int *ptr = &a;
    std::cout << label << ": " << *ptr << " at " << ptr << "\n\n";

}
//* Print methods end
//* User Input getters

int UserInterface::getIntUserInput(){
    int res = -1;
    do{
        std::cin >> res;
        //!! Validate integer
    }while(res == -1);
    return res;
}

int UserInterface::getIntUserInput(int limit1, int limit2){
    int res = -1;
    do{
        std::cin >> res;
        //!! Validate integer, check limits
    }while(res == -1);
    return res;
}

double UserInterface::getDoubleUserInput(){

    double res = -1.0;
    do{
        std::cin >> res;
        //!! Validate double
    }while(res == -1.0);

    return res;

}

bool UserInterface::getBoolUserInput(){
    std::string res = "";

    do{
        std::cout << "Please enter y for yes, n for no\n";
        std::cin >> res;

        //is res is not  y or n, set to empty
        if(res.compare("y") != 0 && res.compare("n") != 0){
            res = "";
        }

    }while(res.compare("") == 0);

    return res.compare("y") == 0 ? true:false;

}

std::string UserInterface::getUserStringInput(){

    std::string res;
    std::cin >> res;

    return res;
}












