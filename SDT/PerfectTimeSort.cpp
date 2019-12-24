#include "Transport.h"
#include "Element.h"
#include "Array.h"

double PerfectTime(Transport* t);

void ptSort(Array* arr)
{
	Transport* transport1;
	Transport* transport2;
	Element* element1;
	Element* element2;
	Element* elementTemp;

	int n = arr->n;
	for (int i = 0; i < n; i++) {
		if (arr->array[i] != nullptr) {
			element1 = arr->array[i]->e;
			while (element1 != nullptr) {
				transport1 = element1->t;
				element2 = element1->e;
				if (element2 != nullptr) {
					transport2 = element2->t;
					if (PerfectTime(transport1) < PerfectTime(transport1)) {
						element1->e = element2->e;
						element2->e = element1;
						element1 = element1->e;
					}
					else {
						element1 = element2;
					}
				}
				else {
					element1 = element2;
				}
			}
		}
	}
}