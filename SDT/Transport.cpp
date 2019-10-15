#include<iostream>
using namespace std;
#include "Transport.h"

Transport::Transport()
{
	speed = 0;
	distance = 0;
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
