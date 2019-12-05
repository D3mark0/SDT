#pragma once
#include "Transport.h"
class Train :
	public Transport
{
	int quantity;
public:
	Train();

	void In(ifstream& in);
	void Out(ofstream& out)const;

	virtual void MultiMethod(Transport* other, ofstream& out);
	virtual void MMAirplane(ofstream& out);
	virtual void MMTrain(ofstream& out);
	virtual void MMShip(ofstream& out);
};

