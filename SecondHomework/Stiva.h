#pragma once
#include "Nod.h"

template <typename T>
class Stiva
{
	private:
		Nod<T>* peak;
	public:
		Stiva();
		void push(T value);
		void pop();
		bool isEmpty();
		T top();
};

