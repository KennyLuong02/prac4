#include <string>
#include <ctime>
#include "Vehical.h"

using namespace std;

class Car: public Vehicle {
    private:
        int seconds;
        int timeReturn;

    public:
        Car();
        Car(int ID);
        int getParkingDuration();

};