#include "Nod.h"

template class Nod<int>;

template <typename T>
Nod<T>::Nod(T value)
{
	info = value;
}



