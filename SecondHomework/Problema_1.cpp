#include <iostream>
#include "Stiva.h"

int main()
{
	Stiva<int> intStack = Stiva<int>();
	
	int count;
	std::cin >> count;

	int number;

	for (int i = 0; i < count; i++)
	{
		std::cin >> number;
		intStack.push(number);
	}

	for (int i = 0; i < count; i++)
	{
		std::cout << intStack.top();
		intStack.pop();
	}

	return 0;
}