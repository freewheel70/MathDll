// MathDll.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "MathDll.h"


// This is an example of an exported variable
MATHDLL_API int nMathDll=0;

// This is an example of an exported function.
MATHDLL_API int fnMathDll(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CMathDll::CMathDll()
{
    return;
}
