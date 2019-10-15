#pragma once
#include "Element.h"
#include "Transport.h"

class Array
{
	static const int n = 7;
	Element* array[n];

	int Hash(Element* E);
public:
	Array();

	void Add(Transport* T);
	void Out();
	void Clear();
};
