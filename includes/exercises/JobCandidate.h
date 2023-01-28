#if !defined(JOB_CANDIDATE)
#define JOB_CANDIDATE

namespace JobCandidate{

    enum AcademicDegree {none, associate, bachelor, master, doctor, professional,last_enum};

    bool evaluateDegreeRequirements(); //evaluates the candidates degree

    bool evaluateLanguageRequirements(); //evaluates the candidates languge knowledge

    bool evaluateExpirienceRequirement(); //evaluates the candidates years of expirience

}


#endif // JOB_CANDIDATE
