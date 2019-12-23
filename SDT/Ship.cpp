#include "Ship.h"

Ship::Ship()
{
	water = 0;
	type = LINER;
}

void Ship::In(ifstream& in)
{
	int switcher;
	Transport::In(in);
	in >> water >> switcher;
	switch (switcher) {
		case 0:
			type = LINER;
			break;
		case 1:
			type = CRUISER;
			break;
		case 2:
			type = TUGBOAT;
			break;
		case 3:
			type = OIL_TANKER;
			break;
		case 4:
			type = YACHT;
			break;
		default:
			break;
	}
}

void Ship::Out(ofstream& out)
{
	out << "\n***Ship***\nWater: " << water << "\nType: ";

	if (type == LINER)
		out << "Liner";
	else if (type == CRUISER)
		out << "Cruiser";
	else if (type == TUGBOAT)
		out << "Tugboat";
	else if (type == OIL_TANKER)
		out << "Oil tanker";
	else if (type == YACHT)
		out << "Yacht";
	else
		out << "Who knows!";

	Transport::Out(out);
}
