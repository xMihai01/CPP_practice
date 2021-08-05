#include "Header.h"

#include <string>
#include <iostream>
#include <utility>

using namespace std;

bool myClass::workingWithStrings()
{
	string myStr(10, '\0');
	cout << " string length: " << myStr.length() << endl;		// get the size of a string
	cout << " C style, same string: " << strlen(myStr.c_str()) << endl;

	// different ways to initialize strings
	string s1;			// declaration
	s1 = " value ";		// initialization

	string s2("abcdef");		// declare and initialize a string, c style
	string s3(s1);				// instantiate new object with value form existing one
	string s4(s2, 3);			// instantiate starting from given input position, 3
	string s5(s2, 3, 2);		// sub-string from s2, given as input
	string s6(20, '-');			// instatiate a new string of specific length with a specific character

	// different operations
	s6 = s4;			// assigning value from s4 to s6;

	s2[0] = 'X';		// accesing elements by their index, and we modify their stored value
	s2[1] = 'Y';

	s3.append(s5);		// appending elements to a given string
	//s4 = s4 + s6; 
	s4 += s6; 


	// strings and comparison
	bool flag1 = (s1 == s2);
	bool flag2 = (s6 == s2);

	cout << "compare two strings: " << endl;
	cout << s1.compare(s2) << endl;

	s1 = "ABC";
	s2 = "abc";
	cout << s1.compare(s2) << endl;

	swap(s1, s2);		// exchange the content of the two variables
	cout << s1.compare(s2) << endl;
	// classic swap
	/* 
	string temp = s1;
	s1 = s2;
	s2 = temp;
	*/

	s2 = s1;
	cout << s1.compare(s2) << endl;

	// finding elements in string
	//string myStr("Hello, World,");	// already defined, no need to define it again
	myStr = "Hello, World,";
	string comma(",");
	cout << "Find array in string " << myStr.find(comma) << endl;
	cout << "Find array in string starting from given position " << myStr.find(comma, 6) << endl;
	string customString("Find array in string starting from given position ");
	

	for(int i = 0; i < customString.length() /*customString.size()*/; ++i)
	{
		customString.find('t', i);
		cout << " " << customString.find('t', i); 
 	}
	// TODO update the algorithm to show only the index of found position, not for every iteration of the algorithm
	int position;

	return true;
}