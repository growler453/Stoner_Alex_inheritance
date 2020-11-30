//#pragma once
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
	int doors;
public:
	Car();

	void setDoors(int);
	int getDoors();
	void displayInfo();
};

#endif