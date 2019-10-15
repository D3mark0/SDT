#include<iostream>
using namespace std;
#include "Airplane.h"

Airplane::Airplane()
{
	range = 0;
	carrying = 0;
}

void Airplane::In()
{
	Transport::In();
	cout << "\nRange: ";
	cin >> range;
	cout << "\nCarrying: ";
	cin >> carrying;
	return;
}

void Airplane::Out() const
{
	cout << "\n***Airplane***\nRange: " << range << "\nCarrying: " << carrying;
	Transport::Out();
	return;
}
