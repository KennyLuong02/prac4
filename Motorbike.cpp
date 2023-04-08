#include <string>
#include <math.h>
#include <ctime>
#include "Vehicle.h"
#include "Motorbike.h"

using namespace std;

Motorbike::Motorbike():Vehicle() {}

Motorbike::Motorbike(int ID):Vehicle(ID) {}

int Motorbike::getParkingDuration() {
    time_t currentTime = time(NULL);
    seconds = difftime(currentTime, timeOfEntry);
    timeReturn = round(timeReturn * 0.85);
    return timeReturn;
}