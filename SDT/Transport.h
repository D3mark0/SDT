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
	virtual void Out(ofstream& out)const;

	Transport* Create(ifstream& in);
};
