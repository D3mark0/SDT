#include<iostream>
#include<fstream>
using namespace std;
#include "Train.h"

Train::Train()
{
	quantity = 0;
}

void Train::In(ifstream& in)
{
	Transport::In(in);
	in >> quantity;
}

void Train::Out(ofstream& out) const
{
	out << "\n***Train***\nQuantity: " << quantity;
	Transport::Out(out);
}

void Train::MultiMethod(Transport* other, ofstream& out)
{
	other->MMTrain(out);
}

void Train::MMAirplane(ofstream& out)
{
	out << "\nAirplane and Train" << endl;
}

void Train::MMTrain(ofstream& out)
{
	out << "\nTrain and Train" << endl;
}
