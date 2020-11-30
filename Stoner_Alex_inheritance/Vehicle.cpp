#include "Vehicle.h"

Vehicle::Vehicle() {
	make = "";
	year = 0;
}

void Vehicle::setMake(string m) {
	make = m;
}

void Vehicle::setYear(int y) {
	year = y;
}

string Vehicle::getMake() {
	return make;
}

int Vehicle::getYear() {
	return year;
}

void Vehicle::displayInfo() {
	cout << "Manufacturer: " << make << endl;
	cout << "Year Built: " << year << endl;
}