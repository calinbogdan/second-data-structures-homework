#include "Stiva.h"

template <typename T>
Stiva::Stiva()
{
	peak = NULL;
}

template<typename T>
void Stiva<T>::push(T value)
{
	Nod<T>* node = new Nod<T>(info);
	(*node).next = peak;
	peak = node;
}

template<typename T>
void Stiva<T>::pop()
{
	if (!isEmpty())
	{
		Nod<T>* node = peak;		
		peak = peak->next;
		delete node;
	}
}

template<typename T>
bool Stiva<T>::isEmpty()
{
	return peak == NULL;
}

template<typename T>
T Stiva<T>::top()
{
	return peak->info;
}

