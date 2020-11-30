// Alex Stoner
// CIS 1202 502
// November 28, 2020

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

#include <iostream>
#include <string>
using namespace std;

int main() {
	Vehicle vehicle;
	Car car;
	Truck truck;

	string inputString;
	int inputInt;

	// Vehicle
	cout << "Vehicle Program" << endl << endl;
	cout << "Vehicle:" << endl;
	cout << "Enter Manufacturer : ";
	cin >> inputString;
	vehicle.setMake(inputString);
	cout << "Enter Year Built : ";
	cin >> inputInt;
	vehicle.setYear(inputInt);
	cout << endl;

	cout << "Vehicle Information:" << endl;
	vehicle.displayInfo();
	cout << endl;

	// Car
	cout << "Car:" << endl;
	cout << "Enter Manufacturer : ";
	cin >> inputString;
	car.setMake(inputString);
	cout << "Enter Year Built : ";
	cin >> inputInt;
	car.setYear(inputInt);
	cout << "Enter the Number of Doors: ";
	cin >> inputInt;
	car.setDoors(inputInt);
	cout << endl;

	cout << "Vehicle Information:" << endl;
	car.displayInfo();
	cout << endl;

	// Truck
	cout << "Truck:" << endl;
	cout << "Enter Manufacturer : ";
	cin >> inputString;
	truck.setMake(inputString);
	cout << "Enter Year Built : ";
	cin >> inputInt;
	truck.setYear(inputInt);
	cout << "Enter the Towing Capacity: ";
	cin >> inputInt;
	truck.setTow(inputInt);
	cout << endl;

	cout << "Vehicle Information:" << endl;
	truck.displayInfo();
	cout << endl;

	system("pause");
	return 0;
}