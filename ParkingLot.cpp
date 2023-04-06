#include <string>
#include <ctime>
#include "ParkingLot.h"
#include "Vehicle.h"

using namespace std;

// class ParkingLot {
//     private:
//         int capacity;
//         int numberOfVehicles;
// };

//
ParkingLot::ParkingLot() {};

Parkinglot::ParkingLot(int cap) {

};

ParkingLot::ParkingLot(Vehicle *vehicles) {

};

int ParkingLot::getCount();

bool ParkingLot::parkVehicle(int ID); /*, time_t timeOfEntry);*/

bool ParkingLot::unparkVehicle(int ID);

//
int ParkingLot::maxParkingDuration();

int ParkingLot::countOverstayingVehicle(int maxParkingDuration);