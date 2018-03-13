#include <iostream>
#include "Lista.h"

int main()
{
	Lista<int>* intList = new Lista<int>();

	for (int i = 9; i >= 0; i--)
	{
		intList->insert(i);
	}

	(*intList).print();

	intList->removeAt(8);

	intList->print();

	intList->inverse();
	intList->print();

	intList->inverse();
	intList->print();

	intList->insertAfter(20, 5);
	intList->print();

	intList->insertAfter(20, 20);
	intList->print();

	intList->insertTimesAfter(27, 8, 5);
	intList->print();

	intList->insertTimesAfter(29, 25, 5);
	intList->print();


	return 0;
}