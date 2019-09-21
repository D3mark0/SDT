#pragma once
#include "Transport.h"
class Train :
	public Transport
{
	double quantity;
public:
	Train();
	Train(double QUANTITY);
	Train(const Train& T);

	void In();
	void Out()const;
};

