#include <iostream>
#include <string>
#include <math.h>
#include <ctime>
#include "Vehicle.h"
#include "Car.h"
#include "ParkingLot.h"

using namespace std;

int main() {
    ParkingLot parkinglot[5];
    Car* c1= new Car(20);

    parkinglot.parkVehicle(c1);

    return 0;
}