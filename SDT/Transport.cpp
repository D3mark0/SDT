#include<iostream>
#include<fstream>
using namespace std;
#include "Transport.h"
#include "Train.h"
#include "Airplane.h"
#include "Ship.h"

Transport::Transport()
{
	speed = 0;
	distance = 0;
}

Transport* Transport::Create(ifstream& in)
{
	Transport* T;
	int k;
	in >> k;
	switch (k) {
		case 1:
			T = new Train;
			break;
		case 2:
			T = new Airplane;
			break;
		case 3:
			T = new Ship;
			break;
		default:
			return 0;
	}

	T->In(in);
	return T;
}

void Transport::In(ifstream& in)
{
	in >> speed >> distance;
}

void Transport::Out(ofstream& out) const
{
	out << "\nSpeed: " << speed << "\nDistance: " << distance;
}
