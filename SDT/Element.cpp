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
		e->PerfectTime(out);
	}
}

void Element::Sort(Element* array, int n)
{
	if (t != nullptr) {
		Element* E = new Element;
		E->set_t(t);
		double temp = t->PerfectTime() + 0.5;
		int hash = (int)temp;
		hash = hash % n;
		E->set_e(array);
		array = E;
	}
	if (e != nullptr) {
		e->Sort(array, n);
	}
}
