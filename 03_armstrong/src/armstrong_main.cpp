#include <iostream>
#include <string>

bool isArmstrongNumber(int number)
{
	
	int sum = 0;
	int tempNumber = number;

	while (tempNumber != 0) {

		sum += pow(tempNumber % 10, 3);
		tempNumber /= 10;

	}

	if (sum == number) {
		return true;
	}
	return false;

}

void printIsArmstrong(int number)
{
	if (isArmstrongNumber(number))
	{
		std::cout << "Armstrong" << std::endl;
	}
	else
	{
		std::cout << "NOT Armstrong" << std::endl;
	}
}

int main(int argc, char *argv[])
{
	// What is this program expected to do?
	// - Shows whether an argument is an armstrong number.
	// (what?)
	// -	An Armstrong number is a number that is equal to the sum of cubes of its digits.
	//		For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
	//		Let's try to understand why 153 is an Armstrong number:
	//			1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
	//
	// How to launch it?
	// - Execute the binary and pass a parameter to it?
	// - E.g. Open CMD in bin/Debug or bin/Release
	//		  03_armstrong.exe 1		=> Output: Armstrong
	//		  03_armstrong.exe 2		=> Output: NOT Armstrong
	//		  03_armstrong.exe 			=> Output: No program arguments found.
	//		  03_armstrong.exe ABC		=> Undefined output (do whatever).
	//		  03_armstrong.exe 153		=> Output: Armstrong
	//		  03_armstrong.exe 154		=> Output: NOT Armstrong
	//

	// Make sure there are some program arguments available.
	if (argc <= 1)
	{
		std::cout << "No program arguments found." << std::endl;
		return 1;
	}

	for (size_t index = 1; index < argc; index++) {
		std::string argumentAsString = argv[index];
		printIsArmstrong(std::stoi(argumentAsString));
	}


	return 0;
}