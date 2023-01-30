#if !defined(JOB_CANDIDATE)
#define JOB_CANDIDATE

namespace JobCandidate{

    enum AcademicDegree {none, associate, bachelor, master, doctor, professional};

    bool evaluateDegreeRequirements(int res); //evaluates the candidates degree

    bool evaluateLanguageRequirements(bool speaksFrench, bool speaksEnglish); //evaluates the candidates languge knowledge

    bool evaluateExpirienceRequirement(int years); //evaluates the candidates years of expirience

}


#endif // JOB_CANDIDATE
