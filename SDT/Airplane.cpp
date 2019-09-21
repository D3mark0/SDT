#include<iostream>
using namespace std;
#include "Airplane.h"

Airplane::Airplane()
{
	range = rand() & 101;
	carrying = rand() & 101;
}

Airplane::Airplane(double RANGE, double CARRYING)
{
	range = RANGE;
	carrying = CARRYING;
}

Airplane::Airplane(const Airplane& A)
{
	range = A.range;
	carrying = A.carrying;
}

void Airplane::In()
{
	cout << "\nRange: ";
	cin >> range;
	cout << "\nCarrying: ";
	cin >> carrying;
	return;
}

void Airplane::Out() const
{
	cout << "\nRange: " << range << "\nCarrying: " << carrying;
	return;
}
