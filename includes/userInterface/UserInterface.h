#ifndef USER_INTERFACE
#define USER_INTERFACE

#include <string>


namespace UserInterface{

//* Printing Methods

    void printMenu(); //starts the user interface

    void printAreaOfCircleEvaluation(double area);//prints area of circle evaluation

    void printAreaOfCircleEvaluation(double area, int percision);//prints area of circle evaluation with percision

    void printAddressAndValue(std::string label, int &a); //prints the address and value of a variable

//* Print methods end
//* User Input getters

    int getIntUserInput(); //gets and validates user integer input

    int getIntUserInput(int limit1, int limit2); //gets and validates user integer input between limits

    double getDoubleUserInput();// get and validate user double input

    bool getBoolUserInput(); //gets and validates user bool input

    std::string getUserStringInput(); //gets and validates user string input



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
    constexpr const char* DECIMAL_QUESTION = "How many decimel places would you like to show?\n";
    constexpr const char* RADIUS_QUESTION = "What is the radius of the circle?\n";

} // namespace AreaOfCircleStrings

namespace JobCandidateStrings
{
    constexpr const char* LANG_QUESTION = "Do you speak French and English?\n";
    constexpr const char* YEARS_QUESTION = "How many years of expirience do you have?\n";
    constexpr const char* DEGREE_QUESTION = "What degree do you hold? Enter one of numbers correponding to your highest degree:\n";
    constexpr const char* DEGREE_OPTIONS = "1. None, 2. Associate, 3. Bachelor, 4. Master, 5. Doctor, 6. Professional.\n";
    constexpr const char* FAIL = "\nI'm sorry, you are not qualified.\n\n";
    constexpr const char* SUCCESS = "\nCongratulations, you are qualified!\n\n";

} // namespace JobCandidateStrings

namespace OneToArbitraryLimitStrings
{
    constexpr const char* PROGRAM_EXPLINATION = "This program will count all numbers from one to the limit you provide,\n"
                                                "excluding multiples of 6 and 17.\n";
    constexpr const char* NUMBER_QUESTION = "What number do you want to count to?\n";

} // namespace OneToArbitraryLimitStrings

namespace SwapValuesStrings
{
    constexpr const char* ENTER_VALUES = "Enter two integers and this program will print their addresses,\n"
                                            "then swap the values. The addresses will remain the same.\n";
} // namespace SwapValuesStrings

namespace DynamicArrayAllocationStrings
{
    constexpr const char* ARRAY_LENGTH_QUESTION = "How many idecies do you want to allocate? The values will be 1/(i+1)^2\n"
                                                    " where i is the index. The values will be summed, and the square root\n"
                                                    "of that sum will be printed.\n";
} // namespace DynamicArrayAllocationStrings

namespace ThreeValueAddressesStrings
{
    constexpr const char* PROGRAM_EXPLINATION = "You will be prompted for a double, and int, and a string; Their addresses\n"
                                                "and values will be printed to the console.\n";
} // namespace ThreeValueAddressesStrings

namespace SixIntMemAllocStrings
{
    constexpr const char* NUMBER_PROMPT = "Enter 6 integers to allocate to memeory, they will be printed in reverse order.\n";
} // namespace SixIntMemAllocStrings

}


#endif
