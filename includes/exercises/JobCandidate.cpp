#include "JobCandidate.h"
#include <iostream>
#include <string>

using namespace JobCandidate;

bool JobCandidate::evaluateDegreeRequirements(int res){

    if(res-1 == 2 || res-1 == 3){
        return true;
    }
    return false;

}
bool JobCandidate::evaluateExpirienceRequirement(int years){

    if(years > 3 && years < 10){
        return true;
    }
    return false;
}
bool JobCandidate::evaluateLanguageRequirements(bool speaksFrench, bool speaksEnglish){

    if(speaksEnglish && speaksEnglish){
        return true;
    }
    return false;
}
