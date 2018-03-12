#pragma once

template <typename T>
struct Nod
{
	public:
		T info;
		Nod<T>* next;
		Nod(T value);
};
