#include <iostream>

#include "ApplicationHelpers.h"

#include "exercises/AreaOfCircle.h"
#include "exercises/JobCandidate.h"
#include "exercises/SwapValues.h"

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

    passing = JobCandidate::evaluateDegreeRequirements();

    if(passing){
      passing = JobCandidate::evaluateExpirienceRequirement();
    }else{
      std::cout << UserInterface::JobCandidateStrings::FAIL;
    }


    if(passing){
      passing = JobCandidate::evaluateLanguageRequirements();
    }else{
      std::cout << UserInterface::JobCandidateStrings::FAIL;
    }

  //final success check
    if(passing){
      std::cout << UserInterface::JobCandidateStrings::SUCCESS;
    }else{
      std::cout << UserInterface::JobCandidateStrings::FAIL;
    }

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

 void ApplicationHelpers::handleDynamicFloatArray(){

 }

 void ApplicationHelpers::handleListOneToArbitrary(){

 }

 void ApplicationHelpers::handleSixIntMemory(){

 }

 void ApplicationHelpers::handleThreeValueAddresses(){

 }
