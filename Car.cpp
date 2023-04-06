#include <string>
#include <math.h>
#include <ctime>
#include "Vehical.h"
#include "Car.h"

using namespace std;

Car::Car():Vehicle() {};

Car::Car(int ID):Vehicle(ID) {};

int Car::getParkingDuration() {
    time_t begin, end;

    begin = getParkingDuration();
    end = time(&end);

    seconds = difftime(end, begin);
    timeReturn = seconds - (seconds * 10 / 100);
    timeReturn = round(timeReturn);
    return timeReturn;
};