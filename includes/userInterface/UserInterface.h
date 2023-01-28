#ifndef USER_INTERFACE
#define USER_INTERFACE

#include <string>


namespace UserInterface{

//* Printing Methods

    void printMenu(); //starts the user interface

    void printAreaOfCircleEvaluation(double area);//prints area of circle evaluation

    void printAreaOfCircleEvaluation(double area, int percision);//prints area of circle evaluation with percision

//* Print methods end
//* User Input getters

    int getIntUserInput(); //gets and validates user integer input

    double getDoubleUserInput();// get and validate user double input

    bool getBoolUserInput(); //gets and validates user bool input

//* User input getters end
//* String constants

namespace MenuInstructions
{
     constexpr const char* MAIN_MENU_INSTRUCTION = "Hi! Which program would you like to run?\n"
                                    "Please enter a number (1,2,3) to select an option. Enter 0 to quit.\n\n";

} // namespace MenuInstructions

namespace AreaOfCircleStrings
{

    constexpr const char* PERCISION_QUESTION = "Do you want to set percision?\n";
    constexpr const char* DECIMAL_QUESTION = "How many decimel places?\n";
    constexpr const char* RADIUS_QUESTION = "What is the radius of the circle?\n";

} // namespace AreaOfCircleStrings



}
#endif
