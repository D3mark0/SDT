#pragma once
#include "Transport.h"
class Ship :
	public Transport
{
public:
	int water;
	enum Types {
		LINER,
		CRUISER,
		TUGBOAT,
		OIL_TANKER,
		YACHT
	};
	Types type;

	Ship();

	void In(ifstream& in);
	void Out(ofstream& out);
};

class ShipFactory : public TransportFactory {
public:
	ShipFactory() :TransportFactory(3) { }

	Transport* Create(int key) {
		if (key == mark)
			return new Ship;
		else
			return nullptr;
	}
};
