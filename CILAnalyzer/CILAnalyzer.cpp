// CILAnalyzer.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "CILAnalyzer.h"


// This is an example of an exported variable
CILANALYZER_API int nCILAnalyzer=0;

// This is an example of an exported function.
CILANALYZER_API int fnCILAnalyzer(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see CILAnalyzer.h for the class definition
CCILAnalyzer::CCILAnalyzer()
{
	return;
}
