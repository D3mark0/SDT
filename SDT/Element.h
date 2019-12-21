#pragma once
#include "Transport.h"

class Element
{
public:
	Transport* t;
	Element* e;

	Element();

	void Out(ofstream& out);
	void Clear();
};

