#pragma once
#include "Transport.h"
class Airplane :
	public Transport
{
	int range;
	int carrying;
public:
	Airplane();

	void In(ifstream& in);
	void Out(ofstream& out)const;

	virtual void MultiMethod(Transport* other, ofstream& out);
	virtual void MMAirplane(ofstream& out);
	virtual void MMTrain(ofstream& out);
};

