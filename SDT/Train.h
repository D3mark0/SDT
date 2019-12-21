#pragma once
#include "Transport.h"
class Train :
	public Transport
{
public:
	int quantity;

	Train();

	void In(ifstream& in);
	void Out(ofstream& out)const;
};

