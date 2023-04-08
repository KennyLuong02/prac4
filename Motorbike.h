#ifndef __MOTORBIKE_H__
#define __MOTORBIKE_H__
#include <string>
#include <ctime>
#include "Vehicle.h"

using namespace std;

class Motorbike: public Vehicle {
    private:
        double seconds;
        int timeReturn;

    public:
        Motorbike();
        Motorbike(int ID);
        int getParkingDuration();

};
#endif