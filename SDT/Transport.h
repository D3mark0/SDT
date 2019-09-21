#pragma once
class Transport
{
	double speed;
	double distance;
public:
	Transport();
	Transport(double SPEED, double DISTANCE);
	Transport(const Transport& T);
	virtual void In();
	virtual void Out()const;
};

