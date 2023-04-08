#include <string>
#include <math.h>
#include <ctime>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

Car::Car():Vehicle() {}

Car::Car(int ID):Vehicle(ID) {}

int Car::getParkingDuration() {
    time_t currentTime = time(NULL);
    seconds = difftime(currentTime, timeOfEntry);
    timeReturn = round(timeReturn * 0.9);
    return timeReturn;
}