#pragma once
#include "Element.h"
#include "Transport.h"

class Array
{
public:
	static const int n = 7;
	Element* array[n];

	int Hash(Element* E);

	Array();

	void Add(Transport* T);
	void In(ifstream& in);
	void Out(ofstream& out);
	void Clear();
};
