#pragma once
#include "Transport.h"
class Airplane :
	public Transport
{
public:
	int range;
	int carrying;

	Airplane();

	void In(ifstream& in);
	void Out(ofstream& out)const;
};

