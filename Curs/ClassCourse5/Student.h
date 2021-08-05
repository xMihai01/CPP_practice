#pragma once

#include "Header.h"
#include <iostream>

// take over the implemntation...
// see why this implementation is not exported from the library? 
// see linker errors

class __declspec(dllexport) Student: public Person
{
private:
	std::string university;
public:
	Student() {};
	Student(std::string university, int age, std::string name)
		: university(university), Person(age, name)
	{};
	
	bool Info()
	{
		std::cout << "Info from student class" << std::endl;
		return true;
	}
};

