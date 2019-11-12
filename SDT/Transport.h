#include<fstream>
using namespace std;
#pragma once
class Transport
{
	int speed;
	int distance;
public:
	Transport();

	void set_speed(int speed) { this->speed = speed; }
	int get_speed() const { return speed; }
	void set_distance(int distance) { this->distance = distance; }
	int get_distance() const { return distance; }

	virtual void In(ifstream& in);
	virtual void Out(ofstream& out)const;
	virtual int ClassCheck() { return -1; };

	Transport* Create(ifstream& in);
};
