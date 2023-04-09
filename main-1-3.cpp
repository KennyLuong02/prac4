#include <iostream>
#include <string>
#include <math.h>
#include <ctime>
#include <unistd.h>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

using namespace std;

int main() {
    int n = 10;

    ParkingLot parking(n);
    Vehicle *ptr = nullptr;

    for (int i = 0; i < n; i++) {
        string vehicle;
        int theID;

        cout << "Please enter your vehicle and ID: ";
        cin >> vehicle;
        cin >> theID;
        if (vehicle == "Car") {
            ptr = new Car[theID];
            parking.parkVehicle(ptr);
            // sleep(3);
        } else if (vehicle == "Bus") {
            ptr = new Bus[theID];
            parking.parkVehicle(ptr);
            // sleep(3);
        } else if (vehicle == "Motorbike") {
            ptr = new Motorbike[theID];
            parking.parkVehicle(ptr);
            // sleep(3);
        }
    }

    cout << "The number of overstaying vehicles are: " << parking.countOverstayingVehicles(15) << endl;

    return 0;
}