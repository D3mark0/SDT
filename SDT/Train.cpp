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

void Train::Out(ofstream& out)
{
	out << "\n***Train***\nQuantity: " << quantity;
	Transport::Out(out);
}

namespace {
	TrainFactory tf;
}