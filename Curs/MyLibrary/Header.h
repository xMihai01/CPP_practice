#pragma once

#ifdef MYLIBRARY_EXPORT
	#define MYLIBRARY_API __declspec(dllexport)
#else
	#define MYLIBRARY_API __declspec(dllimport)
#endif


// bool MYLIBRARY_API workingWithStrings();		
// when above definition fails, we can always use the last option available:
//bool __declspec(dllexport) workingWithStrings();

class MYLIBRARY_API myClass
{
public:
	static bool workingWithStrings();
};

// see also: https://docs.microsoft.com/en-us/cpp/build/exporting-c-functions-for-use-in-c-or-cpp-language-executables?view=msvc-160