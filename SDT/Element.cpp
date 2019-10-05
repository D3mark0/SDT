#include "Element.h"

Element::Element()
{
	t = nullptr;
	e = nullptr;
}

Element::Element(Transport T)
{
	t = &T;
	e = nullptr;
}

Element::Element(const Element& E)
{
	t = E.t;
	e = E.e;
}
