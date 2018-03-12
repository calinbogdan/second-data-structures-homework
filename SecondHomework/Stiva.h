#pragma once
#include "Nod.h"

template <class T>
class Stiva
{
	private:
		Nod<T>* _peak;
	public:
		Stiva(int useless);
		void push(T value);
		void pop();
		bool isEmpty();
		T top();
};

