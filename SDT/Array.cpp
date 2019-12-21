#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "Array.h"

int Array::Hash(Element* E)
{
	Transport* t = E->t;
	int hash = t->speed % n;
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

void Array::Add(Transport* T)
{
	Element* E = new Element;
	E->t = T;
	int hash = Hash(E);
	E->e = array[hash];
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
