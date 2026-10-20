#pragma once
#include "PassengerCar.h"

using namespace std;

class CargoCar : public PassengerCar {
private:
    float cargo_capacity;

public:
    CargoCar(string b, string c, float tank, float consumption, float capacity);
    ~CargoCar() override;

    void setCargoCapacity(float capacity);
    float getCargoCapacity() const;

    float calculateTransportCost(float fuel_price) const;
    void displayInfo() const override;
};