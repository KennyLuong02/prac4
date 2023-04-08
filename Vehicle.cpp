#include <string>
#include <ctime>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle() {
    ID = 0;
    timeOfEntry = time(NULL);

}

Vehicle::Vehicle(int ID) {
    this->ID = ID;
    timeOfEntry = time(NULL);

}

int Vehicle::getID() {
    return ID;
}