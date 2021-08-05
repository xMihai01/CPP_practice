#include "Header.h"

#include <string>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
	
	// workingWithStrings();
	// call static method from class, no need to have an object defined of that specific class
	myClass::workingWithStrings();


	std::vector<int> myVector;

	for (int i = 0; i < 10; ++i)
		myVector.push_back(i);		// push elements into vector

	std::vector<float> myFloatVector {0.1, 0.2, .3, .4};

	return 0;
}


