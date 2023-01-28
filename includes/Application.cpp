

#include <iostream>

#include "exercises/AreaOfCircle.h"
#include "userInterface/UserInterface.h"

#include "Application.h"

using namespace Application;
using namespace UserInterface;


void Application::App::start(){

    UserInterface::printMenu();

 bool running = true;
 while (running)
 {
     int res = UserInterface::getIntUserInput();

     switch (res)
     {

     case 0://ends the program
              running = false;break;

     case 1://handles AreaOfCircle operations
              handleAreaOfCircle();break;

     default:

        std::cout << "Please select an option above by entering a number corresponding to an option";
        continue;

     }
 }
}


void handleAreaOfCircle(){

        //asks if users wants to limit percision
            std::cout << UserInterface::AreaOfCircleStrings::PERCISION_QUESTION;
            bool res = UserInterface::getBoolUserInput();

            if(res){

              //askes for how many decimal places to print
              std::cout << UserInterface::AreaOfCircleStrings::DECIMAL_QUESTION;
              int percision = UserInterface::getIntUserInput();

              //askes for radius of circle
              std::cout << UserInterface::AreaOfCircleStrings::RADIUS_QUESTION;
              double radius = UserInterface::getDoubleUserInput();
              UserInterface::printAreaOfCircleEvaluation(radius,percision);

            }else{

              double radius = UserInterface::getDoubleUserInput();
              UserInterface::printAreaOfCircleEvaluation(radius);

            }

 }

