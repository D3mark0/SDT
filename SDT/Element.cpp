#include "Element.h"

Element::Element()
{
	t = nullptr;
	e = nullptr;
}

void Element::Out() {
	if (t != nullptr) {
		t->Out();
	}
	if (e != nullptr) {
		e->Out();
	}
}

void Element::Clear() {
	if (e != nullptr) {
		e->Clear();
		delete e;
	}
	delete t;
}
