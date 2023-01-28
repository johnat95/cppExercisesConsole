

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
            default:
               std::cout << "Please select an option above by entering a number corresponding to an option";
               continue;
            }
       }
}




