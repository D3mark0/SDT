#include<iostream>
#include<fstream>
using namespace std;
#include "Airplane.h"

Airplane::Airplane()
{
	range = 0;
	carrying = 0;
}

void Airplane::In(ifstream& in)
{
	Transport::In(in);
	in >> range >> carrying;
}

void Airplane::Out(ofstream& out)
{
	out << "\n***Airplane***\nRange: " << range << "\nCarrying: " << carrying;
	Transport::Out(out);
}
