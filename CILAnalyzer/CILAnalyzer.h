// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the CILANALYZER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// CILANALYZER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef CILANALYZER_EXPORTS
#define CILANALYZER_API __declspec(dllexport)
#else
#define CILANALYZER_API __declspec(dllimport)
#endif

// This class is exported from the CILAnalyzer.dll
class CILANALYZER_API CCILAnalyzer {
public:
	CCILAnalyzer(void);
	// TODO: add your methods here.
};

extern CILANALYZER_API int nCILAnalyzer;

CILANALYZER_API int fnCILAnalyzer(void);
