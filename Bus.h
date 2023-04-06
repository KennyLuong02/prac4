#include <string>
#include <ctime>
#include "Vehicle.h"

using namespace std;

class Bus: public Vehicle {
    private:
        int seconds;
        int timeReturn;

    public:
        Bus();
        Bus(int ID);
        int getParkingDuration();

};