#include <string>
#include <math.h>
#include <ctime>
#include "Vehicle.h"
#include "Motorbike.h"

using namespace std;

Motorbike::Motorbike():Vehicle() {};

Motorbike::Motorbike(int ID):Vehicle(ID) {};

int Motorbike::getParkingDuration() {
    time_t begin, end;

    begin = getParkingDuration();
    end = time(&end);

    seconds = difftime(end, begin);
    timeReturn = seconds - (seconds * 15 / 100);
    timeReturn = round(timeReturn);
    return timeReturn;
};