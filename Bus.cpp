#include <string>
#include <math.h>
#include <ctime>
#include "Vehicle.h"
#include "Bus.h"

using namespace std;

Bus::Bus():Vehicle() {}

Bus::Bus(int ID):Vehicle(ID) {}

int Bus::getParkingDuration() {
    time_t currentTime = time(NULL);
    seconds = difftime(currentTime, timeOfEntry);
    timeReturn = round(timeReturn * 0.75);
    return timeReturn;
}