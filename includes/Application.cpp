

#include <iostream>

#include "exercises/AreaOfCircle.h"
#include "userInterface/UserInterface.h"
#include "ApplicationHelpers.h"

#include "Application.h"

using namespace Application;
using namespace UserInterface;


void Application::start(){

       bool running = true;
       while (running)
       {
                UserInterface::printMenu();
                int res = UserInterface::getIntUserInput();

                switch (res)
                {
                case 0://ends the program
                         running = false;break;

                case 1://handles AreaOfCircle operations
                        ApplicationHelpers::handleAreaOfCircle();break;

                case 2://handles Job Candidate operations
                        ApplicationHelpers::handleJobCandidate();break;

                case 3://handles List Numbers to Arbitrary Limit
                        ApplicationHelpers::handleListOneToArbitrary();break;

                case 4://handles Dynamic Float Array
                        ApplicationHelpers::handleSumSquareArray();break;

                case 5://handles Addressing of 3 values
                        ApplicationHelpers::handleThreeValueAddresses();break;

                case 6://handle swap values
                        ApplicationHelpers::handleSwapValues();break;

                case 7: //handles six int memory allocation
                        ApplicationHelpers::handleSixIntMemory();break;

                default:
                   std::cout << "Please select an option above by entering a number corresponding to an option";
                   continue;
                }
       }
}




