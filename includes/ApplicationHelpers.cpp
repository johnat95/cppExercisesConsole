#include <iostream>

#include "ApplicationHelpers.h"

#include "exercises/AreaOfCircle.h"
#include "exercises/JobCandidate.h"
#include "exercises/SwapValues.h"
#include "exercises/OneToArbitrary.h"
#include "exercises/SixIntMemeory.h"
#include "exercises/SumSquareArray.h"
#include "exercises/AdressOFThreeValues.h"

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

 void ApplicationHelpers::handleJobCandidate(){

  bool passing = true;

    //print questions to console
    std::cout << UserInterface::JobCandidateStrings::DEGREE_QUESTION;
    std::cout << UserInterface::JobCandidateStrings::DEGREE_OPTIONS;


    passing = JobCandidate::evaluateDegreeRequirements(UserInterface::getIntUserInput());

    if(passing){

      std::cout << UserInterface::JobCandidateStrings::YEARS_QUESTION;

      passing = JobCandidate::evaluateExpirienceRequirement(UserInterface::getIntUserInput());

    }else{

      goto fail;

    }

    if(passing){

      std::cout << "Do you speak French?\n";
      bool a = UserInterface::getBoolUserInput();

      std::cout << "Do you speak English?\n";
      bool b = UserInterface::getBoolUserInput();

      passing = JobCandidate::evaluateLanguageRequirements(a,b);
    }else{

      goto fail;

    }

    if(passing){
      std::cout << UserInterface::JobCandidateStrings::SUCCESS;
    return;
    }

    fail:
      std::cout << UserInterface::JobCandidateStrings::FAIL;
      return;

 }

 void ApplicationHelpers::handleSwapValues(){

  std::cout << UserInterface::SwapValuesStrings::ENTER_VALUES;

  std::cout << "First Number: ";
  int a = UserInterface::getIntUserInput();

  std::cout << "Second Number: ";
  int b = UserInterface::getIntUserInput();

  std::cout << "Before:\n";
  UserInterface::printAddressAndValue("a",a);
  UserInterface::printAddressAndValue("b",b);

  SwapValues::swapValues(a,b);

  std::cout << "After:\n";
  UserInterface::printAddressAndValue("a",a);
  UserInterface::printAddressAndValue("b",b);



 }

 void ApplicationHelpers::handleSumSquareArray(){

  std::cout << UserInterface::DynamicArrayAllocationStrings::ARRAY_LENGTH_QUESTION;

  std::cout << "Number of indecies: ";

  printf("%f\n", SumSquareArray::sumSquareArray(UserInterface::getIntUserInput()));

 }

 void ApplicationHelpers::handleListOneToArbitrary(){

  std::cout << UserInterface::OneToArbitraryLimitStrings::PROGRAM_EXPLINATION;
  std::cout << UserInterface::OneToArbitraryLimitStrings::NUMBER_QUESTION;

  OneToArbitrary::produceNumbersandWrite(UserInterface::getIntUserInput());

 }

 void ApplicationHelpers::handleSixIntMemory(){

  std::cout << UserInterface::SixIntMemAllocStrings::NUMBER_PROMPT;

  SixIntegerMemory::printArrayReverse( SixIntegerMemory::getInts(6),6);

 }

 void ApplicationHelpers::handleThreeValueAddresses(){

  std::string s;
  int i;
  double d;

  std::cout << UserInterface::ThreeValueAddressesStrings::PROGRAM_EXPLINATION;

  std::cout << "Enter a string: ";
  s = UserInterface::getUserStringInput();

  std::cout << "Enter an integer: ";
  i = UserInterface::getIntUserInput();

  std::cout << "Enter an Double: ";
  d = UserInterface::getDoubleUserInput();

  std::cout << "\n\n";

  ThreeAddresses::printAdresses(s,i,d);

  std::cout << "\n\n";


 }
