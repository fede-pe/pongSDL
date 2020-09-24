#include<iostream>
#include "sumPairNumbers.h"


int main()
{
	std::cout << "Hello world in Cpp" << std::endl;

	std::cin.get();

    double numberA, numberB, numberC;

    std::cout << "Hello! Please enter 2 numbers:\n" << std::endl;

    std::cin >> numberA >> numberB;

    // sum of two numbers in stored in variable sumOfTwoNumbers

    numberC = sumNumbers(numberA, numberB);

    // Prints sum 
    std::cout << numberA << " + " << numberB << " = " << numberC << std::endl;

    return 0;
}