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
    capacity = 0;
    numberOfVehicles = 0;
}

ParkingLot::ParkingLot(int cap) {
    vehicles = new Vehicle*[cap];
    capacity = cap;
    numberOfVehicles = 0;
}

bool ParkingLot::unparkVehicle(int ID) {
    for(int i = 0; i < capacity; i++) {
        if (vehicles[i]->getID() == ID) {
            vehicles[i] = nullptr;

            numberOfVehicles--;
            return true;
        }
    }

    cout << "Vehicle not in the lot" << endl;
    return false;
}

int ParkingLot::countOverstayingVehicle(int maxParkingDuration) {
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

bool ParkingLot::parkVehicle(Vehicle * ptr) {
    for (int i = 0; i < capacity; i++) {
        if (vehicles[i] != nullptr) {
            vehicles[numberOfVehicles] = ptr;
            numberOfVehicles++;
            return true;
        } else {
            cout << "The lot is full" << endl;
            return false;
        }
    }

    return false;
}
