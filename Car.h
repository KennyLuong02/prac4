#ifndef __CAR_H__
#define __CAR_H__
#include <string>
#include <ctime>
#include "Vehicle.h"

using namespace std;

class Car: public Vehicle {
    private:
        double seconds;
        int timeReturn;

    public:
        Car();
        Car(int ID);
        int getParkingDuration();

};
#endif