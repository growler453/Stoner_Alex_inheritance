//#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
	int tow;
public:
	Truck();

	void setTow(int);
	double getTow();
	void displayInfo();
};

#endif