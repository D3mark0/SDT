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

void Airplane::Out(ofstream& out) const
{
	out << "\n***Airplane***\nRange: " << range << "\nCarrying: " << carrying;
	Transport::Out(out);
}

void Airplane::MultiMethod(Transport* other, ofstream& out)
{
	other->MMAirplane(out);
}

void Airplane::MMAirplane(ofstream& out)
{
	out << "\nAirplane and Airplane" << endl;
}

void Airplane::MMTrain(ofstream& out)
{
	out << "\nTrain and Airplane" << endl;
}
