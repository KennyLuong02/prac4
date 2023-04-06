#include <string>
#include <math.h>
#include <ctime>
#include "Vehicle.h"
#include "Bus.h"

using namespace std;

Bus::Bus():Vehicle() {};

Bus::Bus(int ID):Vehicle(ID) {};

int Bus::getParkingDuration() {
    time_t begin, end;

    begin = getParkingDuration();
    end = time(&end);

    seconds = difftime(end, begin);
    timeReturn = seconds - (seconds * 25 / 100);
    timeReturn = round(timeReturn);
    return timeReturn;
};