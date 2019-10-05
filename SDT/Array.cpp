#include "Array.h"

int Array::Hash(Element E)
{
	Transport *t = E.get_t();
	int hash = (*t).get_speed % 7;
	return hash;
}

Array::Array()
{
	for (int i = 0; i < n; i++)
		array[i] = &Element();
}

Array::~Array()
{
	delete[] array;
}

void Array::Add(Transport T)
{
	Element E(T);
	int hash = Hash(E);
	if (array[hash]->get_e == nullptr)
		array[hash] = &E;
	else
	{
		Element* search;
		search = array[hash];
		while (search->get_e != nullptr)
			search = &search->get_e;

		&search->set_e = search;
	}
}
