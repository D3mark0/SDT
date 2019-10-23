#pragma once
#include "Transport.h"
class Ship :
	public Transport
{
	int water;
	enum Types {
		LINER,
		CRUISER,
		TUGBOAT,
		OIL_TANKER,
		YACHT
	};
	Types type;
public:
	Ship();

	void In(ifstream& in);
	void Out(ofstream& out)const;
};

