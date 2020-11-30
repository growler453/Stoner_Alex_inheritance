//#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
	string make;
	int year;
public:
	Vehicle();

	void setMake(string);
	void setYear(int);
	string getMake();
	int getYear();
	void displayInfo();
};

#endif