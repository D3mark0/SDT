#pragma once
#include "Transport.h"

class Element
{
	Transport *t;
	Element *e;
public:
	Element();
	Element(Transport T);
	Element(const Element& E);

	void set_t(Transport T) { this->t = &T; }
	Transport *get_t() const { return t; }
	void set_e(Element E) { this->e = &E; }
	Element *get_e() const { return e; }
};

