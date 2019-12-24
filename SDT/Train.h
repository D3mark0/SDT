#pragma once
#include "Transport.h"
class Train :
	public Transport
{
public:
	int quantity;

	Train();

	void In(ifstream& in);
	void Out(ofstream& out);
};

class TrainFactory : public TransportFactory {
public:
	TrainFactory() :TransportFactory(1) { }

	Transport* Create(int key) {
		if (key == mark)
			return new Train;
		else
			return nullptr;
	}
};
