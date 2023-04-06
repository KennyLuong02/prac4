#include <string>
#include <ctime>

using namespace std;

class Vehicle {
    private:
        time_t timeOfEntry;
        int ID;

    public:
        int getID();
        Vehicle(int ID);
        Vehicle();
        virtual int getParkingDuration() = 0;

};