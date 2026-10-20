#include "CargoCar.h"
#include <iostream>

using namespace std;

CargoCar::CargoCar(string b, string c, float tank, float consumption, float capacity)
    : PassengerCar(b, c, tank, consumption) {
    cargo_capacity = capacity;
    cout << "[CargoCar constructor called for " << brand << "]\n";
}

CargoCar::~CargoCar() {
    cout << "[CargoCar destructor called for " << brand << "]\n";
}

void CargoCar::setCargoCapacity(float capacity) {
    cargo_capacity = capacity; 
}
float CargoCar::getCargoCapacity() const 
{ 
    return cargo_capacity;
}


float CargoCar::calculateTransportCost(float fuel_price) const {
    if (cargo_capacity <= 0.0f) return 0.0f;
    return (((fuel_consumption / 100.0f) * fuel_price) / cargo_capacity);
}

void CargoCar::displayInfo() const {
    PassengerCar::displayInfo();
    cout << "Cargo capacity: " << cargo_capacity << " tons\n";
}