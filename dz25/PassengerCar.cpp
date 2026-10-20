#include "PassengerCar.h"
#include <iostream>

using namespace std;

PassengerCar::PassengerCar(string b, string c, float tank, float consumption) {
    brand = b;
    color = c;
    fuel_tank = tank;
    fuel_consumption = consumption;
}

void PassengerCar::setBrand(string b) {
    brand = b; 
}
void PassengerCar::setColor(string c) {
    color = c; 
}
void PassengerCar::setFuelTank(float tank) 
{ 
    fuel_tank = tank; 
}
void PassengerCar::setFuelConsumption(float consumption) {
    fuel_consumption = consumption; 
}

string PassengerCar::getBrand() const 
{ 
    return brand; 
}
string PassengerCar::getColor() const { 
    return color; 
}
float PassengerCar::getFuelTank() const {
    return fuel_tank; 
}
float PassengerCar::getFuelConsumption() const {
    return fuel_consumption;
}

float PassengerCar::calculateMaxDistance() const {
    if (fuel_consumption <= 0.0f) return 0.0f;
    return (fuel_tank / fuel_consumption) * 100.0f;
}

void PassengerCar::displayInfo() const {
    cout << "Brand: " << brand << "\n"
        << "Color: " << color << "\n"
        << "Fuel tank capacity: " << fuel_tank << " L\n"
        << "Fuel consumption: " << fuel_consumption << " L/100 km\n"
        << "Max distance range: " << calculateMaxDistance() << " km\n";
}