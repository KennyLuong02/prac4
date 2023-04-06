#include <string>
#include <ctime>
#include "ParkingLot.h"
#include "Vehicle.h"
#include "Motorbike.h"
#include "Bus.h"
#include "Car.h"

using namespace std;

//
ParkingLot::ParkingLot() {
    capacity = 0;
    numberOfVehicles = 0;
};

Parkinglot::ParkingLot(int cap) {
    vehicles = new Vehicle[cap];
    capacity = cap;
    numberOfVehicles = 0;
};

//
ParkingLot::ParkingLot(Vehicle *vehicles) {

};

bool ParkingLot::unparkVehicle(int ID) {
    for(int i = 0; i < numberOfVehicles; i++) {
        if (vehicles[i].getID() == ID) {
            vehicles[i] = 0;

            //

            numberOfVehicles--;
        }
    } else {
        return false;
    }

    return true;
};

//
int ParkingLot::maxParkingDuration();

int ParkingLot::countOverstayingVehicle(int maxParkingDuration) {
    int counter = 0;

    for(int i = 0; i < numberOfVehicles; i++) {
        if (vehicles[i].getParkingDuration > maxParkingDuration) {
            counter++;
        }
    }
};








int ParkingLot::getCount() {
    return numberOfVehicles;
};

bool ParkingLot::parkVehicle(int ID) {
    if (numberOfVehicles < capacity) {
        vehicles[numberOfVehicles] = Vehicle(ID);
        return true;
    } else {
        return false;
    }

};

