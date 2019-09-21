#include<iostream>
using namespace std;
#include "Transport.h"

Transport::Transport()
{
	speed = rand() & 101;
	distance = rand() & 101;
}

Transport::Transport(double SPEED, double DISTANCE)
{
	speed = SPEED;
	distance = DISTANCE;
}

Transport::Transport(const Transport& T)
{
	speed = T.speed;
	distance = T.distance;
}

void Transport::In()
{
	cout << "\nSpeed: ";
	cin >> speed;
	cout << "\nDistance: ";
	cin >> distance;
	return;
}

void Transport::Out() const
{
	cout << "\nSpeed: " << speed << "\nDistance: " << distance;
	return;
}
