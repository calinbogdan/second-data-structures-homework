#pragma once
#include "Nod.h"

template <typename T>
class Lista
{
	private:
		Nod<T>* _head;
		int _count;

	public:
		Lista();
		void insert(T info);
		void removeAt(int index);
		void print();
};

