#pragma once
#include "Transport.h"

struct WeightDecorator : Transport {
	double weight;
	Transport* t;
};

void Init(WeightDecorator& wd, double weight, Transport* t);

WeightDecorator* CreateWeightDecorator();
WeightDecorator* CreateWeightDecoratorAndInit(double weight, Transport* t);
void In(ifstream& in, WeightDecorator& wd);
void Out(ofstream& out, WeightDecorator& wd);