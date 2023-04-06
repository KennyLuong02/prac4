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
        bool parkVehicle(Vehicle *ptr); /*, time_t timeOfEntry);*/
        bool unparkVehicle(int ID);

        //
        int countOverstayingVehicle(int maxParkingDuration);

};