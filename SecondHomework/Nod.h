#pragma once

template <typename T>
class Nod
{
	private:
		T info;
		Nod<T>* next;

	public:
		Nod(T value);
};
