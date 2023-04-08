#ifndef __PARKINGLOT_H__
#define __PARKINGLOT_H__
#include <string>
#include <ctime>
#include "Vehicle.h"

using namespace std;

class ParkingLot {
    private:
        int capacity;
        int numberOfVehicles;

    public:
        //
        ParkingLot();
        ParkingLot(int cap);
        
        //
        Vehicle **vehicles;

        int getCount();
        bool parkVehicle(Vehicle *ptr);
        bool unparkVehicle(int ID);

        //
        int countOverstayingVehicle(int maxParkingDuration);

};
#endif