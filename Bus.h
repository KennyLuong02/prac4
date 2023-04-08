#ifndef __BUS_H__
#define __BUS_H__
#include <string>
#include <ctime>
#include "Vehicle.h"

using namespace std;

class Bus: public Vehicle {
    private:
        double seconds;
        int timeReturn;

    public:
        Bus();
        Bus(int ID);
        int getParkingDuration();

};
#endif