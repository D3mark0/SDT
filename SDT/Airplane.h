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
	void Out(ofstream& out);
};

class AirplaneFactory : public TransportFactory {
public:
	AirplaneFactory() :TransportFactory(2) { }

	Transport* Create(int key) {
		if (key == mark)
			return new Airplane;
		else
			return nullptr;
	}
};