#include "WeightDecorator.h"

void Init(WeightDecorator& wd, double weight, Transport* t) {
	wd.weight = 0;
	wd.t = t;
}

WeightDecorator* CreateWeightDecorator() {
	WeightDecorator* wd = new WeightDecorator;
	Init(*wd, 0, 0);
	return wd;
}

WeightDecorator* CreateWeightDecoratorAndInit(double weight, Transport* t) {
	WeightDecorator* wd = CreateWeightDecorator();
	Init(*wd, weight, t);
	return wd;
}

void In(ifstream& in, WeightDecorator& wd) {
	wd.t->In(in);
	in >> wd.weight;
}

void Out(ofstream& out, WeightDecorator& wd) {
	wd.t->Out(out);
	out << "\nWeight: " << wd.weight << endl;
}