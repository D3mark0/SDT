#pragma once
class Transport
{
	double speed;
	double distance;
public:
	Transport();
	Transport(double SPEED, double DISTANCE);
	Transport(const Transport& T);

	void set_speed(int speed) { this->speed = speed; }
	int get_speed() const { return speed; }
	void set_distance(int distance) { this->distance = distance; }
	int get_distance() const { return distance; }

	virtual void In();
	virtual void Out()const;
};

