#include "Car.h"

Car::Car() {
	doors = 2;
}

void Car::setDoors(int num) {
	doors = num;
}

int Car::getDoors( ) {
	return doors;
}

void Car::displayInfo() {
	Vehicle::displayInfo();

	cout << "Doors: " << doors << endl;
}