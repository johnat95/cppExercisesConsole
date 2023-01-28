#include <iostream>

#include "ApplicationHelpers.h"

#include "exercises/AreaOfCircle.h"
#include "userInterface/UserInterface.h"

using namespace ApplicationHelpers;

void ApplicationHelpers::handleAreaOfCircle(){

    //asks if users wants to limit percision
        std::cout << UserInterface::AreaOfCircleStrings::PERCISION_QUESTION;
        bool res = UserInterface::getBoolUserInput();

        if(res){

          //askes for how many decimal places to print
          std::cout << UserInterface::AreaOfCircleStrings::DECIMAL_QUESTION;
          int percision = UserInterface::getIntUserInput();

          //askes for radius of circle
          std::cout << UserInterface::AreaOfCircleStrings::RADIUS_QUESTION;

          //get user input and calculate area of circle with percision
          UserInterface::printAreaOfCircleEvaluation(AreaOfCircle::calcAreaOfCircle(
                                                                  UserInterface::getDoubleUserInput()),percision);

        }else{

          //askes for radius of circle
          std::cout << UserInterface::AreaOfCircleStrings::RADIUS_QUESTION;

          //get user input and calculate area of circle
          UserInterface::printAreaOfCircleEvaluation(AreaOfCircle::calcAreaOfCircle(
                                                                         UserInterface::getDoubleUserInput()));

        }

 }
