#include<iostream>
#include<fstream>
using namespace std;
#include "Transport.h"
#include "Train.h"
#include "Airplane.h"

Transport::Transport()
{
	speed = 0;
	distance = 0;
}

void Transport::In(ifstream& in)
{
	in >> speed >> distance;
}

void Transport::Out(ofstream& out)
{
	out << "\nSpeed: " << speed << "\nDistance: " << distance;
}

TransportFactory* TransportFactory::top = nullptr;

TransportFactory::TransportFactory(int m) : mark(m)
{
	this->next = top;
	top = this;
}

Transport* TransportFactory::Make(int key)
{
	Transport* t = nullptr;
	TransportFactory* tmp = top;

	while (tmp) {
		t = tmp->Create(key);
		if (t) return t;
		tmp = tmp->next;
	}
	return nullptr;
}

Transport* TransportFactory::In(ifstream& in)
{
	Transport* t = nullptr;
	int k;
	in >> k;
	t = Make(k);
	if (t)
		t->In(in);
	return t;

}