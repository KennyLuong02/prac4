#include <iostream>
#include <string>
#include <ctime>
#include "ParkingLot.h"
#include "Vehicle.h"
#include "Motorbike.h"
#include "Bus.h"
#include "Car.h"

using namespace std;

ParkingLot::ParkingLot() {
    vehicles = nullptr;
    capacity = 0;
    numberOfVehicles = 0;
}

ParkingLot::ParkingLot(int cap) {
    vehicles = new Vehicle*[cap];
    for (int i = 0; i < cap; i++)
    {
        vehicles[i] = nullptr;
    }
    capacity = cap;
    numberOfVehicles = 0;
}

bool ParkingLot::unparkVehicle(int ID) {
    for(int i = 0; i < capacity; i++) {
        if (vehicles[i]->getID() == ID) {
            delete vehicles[i];
            vehicles[i] = nullptr;
            numberOfVehicles--;
            return true;
        }
    }

    cout << "Vehicle not in the lot" << endl;
    return false;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
    int counter = 0;

    for(int i = 0; i < capacity; i++) {
        if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
            counter++;
        }
    }
    return counter;
}

int ParkingLot::getCount() {
    return numberOfVehicles;
}

bool ParkingLot::parkVehicle(Vehicle * ptr) 
{
    for (int i = 0; i < capacity; i++) 
    {
        if (vehicles[i] == nullptr) 
        {
            vehicles[i] = ptr;
            numberOfVehicles++;
            return true;
        }
    }

    cout << "The lot is full" << endl;
    return false;
}

ParkingLot::~ParkingLot() {
    delete[] vehicles;
}