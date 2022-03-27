// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the MATHDLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// MATHDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef MATHDLL_EXPORTS
#define MATHDLL_API __declspec(dllexport)
#else
#define MATHDLL_API __declspec(dllimport)
#endif

// This class is exported from the dll
class MATHDLL_API CMathDll {
public:
	CMathDll(void);
	// TODO: add your methods here.
};

extern MATHDLL_API int nMathDll;

MATHDLL_API int fnMathDll(void);
