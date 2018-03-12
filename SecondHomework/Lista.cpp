#include "Lista.h"

template<typename T>
Lista<T>::Lista()
{
	_head = NULL;
	_count = 0;
}

template<typename T>
void Lista<T>::insert(T info)
{
	Nod<T>* nod = new Nod<T>(info);
	nod->next = _head;
	_head = nod;
	_count++;
}

template<typename T>
void Lista<T>::removeAt(int index)
{
	int counter = 0;

	if (!(_count - 1 >= index))
		throw std::exception("The index you've provided is higher than the number of elements in this list.");

	Nod<T>* nod = _head;
	while (counter != index)
	{
		nod = nod->next;
		counter++;
	}

	nod = nod->next;
}

template<typename T>
void Lista<T>::print()
{
	Nod<T>* start = _head;
	for (int i = 0; i < _count; i++)
	{
		std::cout << start->info << " ";
		start = start->next;
	}

	std::cout << std::endl;
}
