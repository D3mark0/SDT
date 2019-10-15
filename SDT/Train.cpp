#include<iostream>
using namespace std;
#include "Train.h"

Train::Train()
{
	quantity = 0;
}

void Train::In()
{
	Transport::In();
	cout << "\nQuantity: ";
	cin >> quantity;
	return;
}

void Train::Out() const
{
	cout << "\n***Train***\nQuantity: " << quantity;
	Transport::Out();
	return;
}
