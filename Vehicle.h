#ifndef __VEHICLE_H__
#define __VEHICLE_H__
#include <string>
#include <ctime>

using namespace std;

class Vehicle {
    private:
        // time_t timeOfEntry;
        int ID;

    protected:
        time_t timeOfEntry;

    public:
        int getID();
        Vehicle(int ID);
        Vehicle();
        virtual int getParkingDuration() = 0;

        virtual ~Vehicle();

};
#endif