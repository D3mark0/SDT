#pragma once
#include "Transport.h"

class Element
{
	Transport *t;
	Element *e;
public:
	Element();

	void set_t(Transport* T) { t = T; }
	Transport* get_t() const { return t; }
	void set_e(Element* E) { e = E; }
	Element* get_e() const { return e; }

	void Out(ofstream& out);
	void Clear();
};

