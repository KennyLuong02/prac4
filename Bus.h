#include <string>
#include <ctime>
#include "Vehical.h"

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