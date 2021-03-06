// OddOrEven.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "odd.h"

int main()
{
	int number{ userNumber() };
	printEven(number);
}

void printEven(int number)
{
	std::cout << number << " is " << ((isEven(number)) ? "even." : "odd");
	/*if (isEven(number))
		std::cout << number << " is even";
	else
		std::cout << number << " is odd";*/
}

bool isEven(int number)
{
	return (number % 2) == 0;
}

int userNumber()
{
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}
