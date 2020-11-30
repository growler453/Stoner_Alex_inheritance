#include "Truck.h"

Truck::Truck() {
	tow = 0;
}

void Truck::setTow(int t) {
	tow = t;
}

double Truck::getTow() {
	return tow;
}

void Truck::displayInfo() {
	Vehicle::displayInfo();

	cout << "Towing Capacity: " << tow << endl;
}