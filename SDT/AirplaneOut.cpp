#include "Transport.h"
#include "Airplane.h"
#include "Train.h"
#include "Element.h"
#include "Array.h"

void aoElement(Element* el, ofstream& out)
{
	if (el->t != nullptr) {
		if (el->t->ClassCheck() == 2)
			el->t->Out(out);
	}
	if (el->e != nullptr) {
		aoElement(el->e, out);
	}
}

void aoArray(Array* arr, ofstream& out)
{
	int n = arr->n;
	for (int i = 0; i < n; i++) {
		if (arr->array[i] != nullptr) {
			out << "\n\n---" << i << " element---" << endl;
			aoElement(arr->array[i], out);
		}
	}
}

//void AirplaneOut(TransportFactory* tf) {
//	TransportFactory
//}/