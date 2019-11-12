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
	int ClassCheck() { return 1; }
};

