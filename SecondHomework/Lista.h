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
		bool isEmpty();
		void inverse();
		void insertAfter(T value, int index);
		void insertTimesAfter(T value, int index, int times);
};

