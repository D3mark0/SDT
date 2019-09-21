#pragma once
#include "Transport.h"
class Airplane :
	public Transport
{
	double range;
	double carrying;
public:
	Airplane();
	Airplane(double RANGE, double CARRYING);
	Airplane(const Airplane& A);

	void In();
	void Out()const;
};

