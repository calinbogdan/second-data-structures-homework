#include "Stiva.h"
#include "Nod.h"
#include <iostream>

template class Stiva<int>;

template<class T>
Stiva<T>::Stiva(int useless)
{
	_peak = NULL;
}

template<class T>
void Stiva<T>::push(T value)
{
	Nod<T>* node = new Nod<T>(value);
	(*node).next = _peak;
	_peak = node;
}

template<class T>
void Stiva<T>::pop()
{
	if (!isEmpty())
	{
		Nod<T>* node = _peak;		
		_peak = _peak->next;
		delete node;
	}
}

template<class T>
bool Stiva<T>::isEmpty()
{
	return _peak == NULL;
}

template<class T>
T Stiva<T>::top()
{
	return _peak->info;
}

