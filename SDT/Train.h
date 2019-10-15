#pragma once
#include "Transport.h"
class Train :
	public Transport
{
	int quantity;
public:
	Train();

	void In();
	void Out()const;
};

