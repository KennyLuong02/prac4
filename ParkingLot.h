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
        Vehicle *vehicles;
        ParkingLot(Vehicle *vehicles);

        int getCount();
        bool parkVehicle(int ID); /*, time_t timeOfEntry);*/
        bool unparkVehicle(int ID);

        //
        int maxParkingDuration();
        int countOverstayingVehicle(int maxParkingDuration);

};