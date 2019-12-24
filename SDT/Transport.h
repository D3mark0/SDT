#include<fstream>
using namespace std;
#pragma once
class Transport
{
public:
	int speed;
	int distance;

	Transport();

	virtual void In(ifstream& in);
	virtual void Out(ofstream& out);
	virtual int ClassCheck() = 0;
};

class TransportFactory
{
public:
	TransportFactory(int m);
	static Transport* Make(int key);
	static Transport* In(ifstream& in);
	virtual Transport* Create(int key) = 0;

protected:
	int mark;
	static TransportFactory* top;
	TransportFactory* next;
};
