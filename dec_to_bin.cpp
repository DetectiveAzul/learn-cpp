//============================================================================
// Name        : learn-cpp.cpp
// Author      : Cian
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <cmath>

/*
 * Write a program that asks the user to input a number between 0 and 255. Print this number as an 8-bit binary number (of the form #### ####).
 * Don’t use any bitwise operators.
 *
 * Hint: Use method 2. Assume the largest power of 2 is 128.
 * Hint: Write a function to test whether your input number is greater than some power of 2. If so, print ‘1’ and return
 * your number minus the power of 2.
 *
 */

int inputNumber() {
	int input;
	bool isInRange = false;

	while (!isInRange) {
			std::cout << "Please, introduce an integer between 0 and 255" << std::endl;
			std::cin >> input;
			isInRange = (input >= 0 && input <= 255);
	}

	std::cout << "Your selected number is: " << input << std::endl;
	return input;
}

int isGreaterThanPowerOf(int number, int power) {
	int powerOfTwo = std::pow(2, power);
	if (number >= powerOfTwo) {
		number -= powerOfTwo;
		std::cout << "1";
	} else {
		std::cout << "0";
	}
	return number;
}



int main() {
	int input = inputNumber();
	int currentNumber = input;
	int largestPowerOfTwo = 7;

	while(largestPowerOfTwo >= 0) {
		currentNumber = isGreaterThanPowerOf(currentNumber, largestPowerOfTwo);
		--largestPowerOfTwo;
	}

	return 0;
}
