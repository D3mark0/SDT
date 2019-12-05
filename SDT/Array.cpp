#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "Array.h"

int Array::Hash(Element* E)
{
	Transport* t = E->get_t();
	int hash = t->get_speed() % n;
	return hash;
}

Array::Array()
{
	for (int i = 0; i < n; i++)
		array[i] = nullptr;
}

void Array::Clear()
{
	for (int i = 0; i < n; i++)
	{
		if (array[i] != nullptr)
			array[i]->Clear();
	}
}

void Array::PerfectTime(ofstream& out)
{
	for (int i = 0; i < n; i++) {
		if (array[i] != nullptr) {
			out << "\n\n---" << i << " element---" << endl;
			array[i]->PerfectTime(out);
		}
	}
}

void Array::Sort()
{
	Transport* transport1;
	Transport* transport2;
	Element* element1;
	Element* element2;
	Element* elementTemp;

	for (int i = 0; i < n; i++) {
		if (array[i] != nullptr) {
			element1 = array[i]->get_e();
			while (element1 != nullptr) {
				transport1 = element1->get_t();
				element2 = element1->get_e();
				if (element2 != nullptr) {
					transport2 = element2->get_t();
					if (transport1->PerfectTime() > transport2->PerfectTime()) {
						element1->set_e(element2->get_e());
						element2->set_e(element1);
						element1 = element1->get_e();
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

void Array::Add(Transport* T)
{
	Element* E = new Element;
	E->set_t(T);
	int hash = Hash(E);
	E->set_e(array[hash]);
	array[hash] = E;
}

void Array::In(ifstream& in)
{
	Transport* T = nullptr;

	while (!in.eof()) { 
		T = T->Create(in);
		Add(T);
	}
}

void Array::Out(ofstream& out) {
	for (int i = 0; i < n; i++) {
		if (array[i] != nullptr) {
			out << "\n\n---" << i << " element---" << endl;
			array[i]->Out(out);
		}
	}
}
