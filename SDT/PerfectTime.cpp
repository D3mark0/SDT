//------------------------------------------------------------------------------
// Perimeter.cpp - содержит реализацию функции вычисления периметра.
// Использует прямой доступ к полям производных классов
// И динамическую идентификацию типов во время выполнения.
//------------------------------------------------------------------------------

#include "Transport.h"
#include "Airplane.h"
#include "Train.h"
#include "Element.h"
#include "Array.h"

double PerfectTime(Transport* t)
{
	return (1.0 * t->distance) / (1.0 * t->speed);
}

void ptElement(Element* el, ofstream& out)
{
	if (el->t != nullptr) {
		out << "\nPerfect time: " << PerfectTime(el->t);
	}
	if (el->e != nullptr) {
		ptElement(el->e, out);
	}
}

void ptArray(Array* arr, ofstream& out)
{
	int n = arr->n;
	for (int i = 0; i < n; i++) {
		if (arr[i] != nullptr) {
			out << "\n\n---" << i << " element---" << endl;
			ptElement(arr[i], out);
		}
	}
}
