#include <string>
#include <ctime>
#include "ParkingLot.h"
#include "Vehical.h"

using namespace std;

// class ParkingLot {
//     private:
//         int capacity;
//         int numberOfVehicles;
// };

//
ParkingLot::ParkingLot() {};

ParkingLot::ParkingLot(Vehicle *vehicles) {

};

int ParkingLot::getCount();

bool ParkingLot::parkVehicle(int ID); /*, time_t timeOfEntry);*/

bool ParkingLot::unparkVehicle(int ID);

//
int ParkingLot::maxParkingDuration();

int ParkingLot::countOverstayingVehicle(int maxParkingDuration);