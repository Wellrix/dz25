#pragma once
#include <string>

using namespace std;

class PassengerCar {
protected:
    string brand;
    string color;
    float fuel_tank;
    float fuel_consumption;

public:
    PassengerCar(string b, string c, float tank, float consumption);
    virtual ~PassengerCar() = default;

    void setBrand(string b);
    void setColor(string c);
    void setFuelTank(float tank);
    void setFuelConsumption(float consumption);

    string getBrand() const;
    string getColor() const;
    float getFuelTank() const;
    float getFuelConsumption() const;

    float calculateMaxDistance() const;
    virtual void displayInfo() const;
};