#include "Element.h"

Element::Element()
{
	t = nullptr;
	e = nullptr;
}

void Element::Out(ofstream& out) {
	if (t != nullptr) {
		t->Out(out);
	}
	if (e != nullptr) {
		e->Out(out);
	}
}

void Element::Clear() {
	if (e != nullptr) {
		e->Clear();
		delete e;
	}
	delete t;
}

void Element::PerfectTime(ofstream& out)
{
	if (t != nullptr) {
		out << "\nPerfect time: " << t->PerfectTime();
	}
	if (e != nullptr) {
		e->Out(out);
	}
}
