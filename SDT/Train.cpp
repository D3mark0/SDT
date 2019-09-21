#include<iostream>
using namespace std;
#include "Train.h"

Train::Train()
{
	quantity = rand() & 101;
}

Train::Train(double QUANTITY)
{
	quantity = QUANTITY;
}

Train::Train(const Train& T)
{
	quantity = T.quantity;
}

void Train::In()
{
	cout << "\nQuantity: ";
	cin >> quantity;
	return;
}

void Train::Out() const
{
	cout << "\nQuantity: " << quantity;
	return;
}
