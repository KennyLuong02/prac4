#include <string>
#include <ctime>
#include "Vehical.h"

using namespace std;

class Motorbike: public Vehicle {
    private:
        int seconds;
        int timeReturn;

    public:
        Motorbike();
        Motorbike(int ID);
        int getParkingDuration();

};