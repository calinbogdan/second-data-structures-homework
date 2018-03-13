#include "Lista.h"
#include <iostream>
#include <stdexcept>

template class Lista<int>;

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

	if (index == 0)
	{
		_head = _head->next;
	}
	else
	{
		Nod<T>* nod = _head;
		while (counter != index)
		{
			nod = nod->next;
			counter++;
		}

		nod->next = nod->next->next;
	}	
	_count--;
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

template<typename T>
bool Lista<T>::isEmpty()
{
	return _head == NULL;
}

template<typename T>
void Lista<T>::inverse()
{
	Nod<T> *current = _head, *next, *prev = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	_head = prev;
}

template<typename T>
void Lista<T>::insertAfter(T value, int index)
{
	if (index > _count - 1)
		insert(value);
	else
	{
		int counter = 0;
		Nod<T> *nod = _head;
		while (counter != index)
		{
			nod = nod->next;
			counter++;
		}
		
		Nod<T> *newNode = new Nod<T>(value);
		newNode->next = nod->next;
		nod->next = newNode;
		_count++;
	}
}

template<typename T>
void Lista<T>::insertTimesAfter(T value, int index, int times)
{
	if (index + 1 > _count)
	{
		for (int i = 0; i < times; i++)
		{
			insertAfter(value, _count - 1);
		}
	}
	else
	{
		Nod<T> *nod = _head;
		int counter = 0;
		while (counter != index)
		{
			nod = nod->next;
			counter++;
		}

		for (int i = 0; i < times; i++)
		{
			insertAfter(value, counter + i);
		}
	}
}
