#pragma once
#include "Transport.h"
class Airplane :
	public Transport
{
	int range;
	int carrying;
public:
	Airplane();

	void In();
	void Out()const;
};

