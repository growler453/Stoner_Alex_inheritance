//#pragma once
#ifndef VEHICLE_H
#define VEHIVLE_H

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
	string man;
	int year;
public:
	Vehicle();

	void setMan(string);
	void setYear(int);
	string getMan();
	int getYear();
	void displayInfo();
};

#endif