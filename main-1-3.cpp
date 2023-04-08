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

    ParkingLot *parking[n];

    for (int i = 0; i < n; i++) {
        string vehicle;
        int theID;
        bool a;

        cout << "Please enter your vehicle and ID: ";
        cin >> vehicle;
        cin >> theID;
        if (vehicle == "Car") {
            a = parking[i]->parkVehicle(Vehicle *Car(theID)); //issue
            // sleep(3);
        } else if (vehicle == "Bus") {
            a = parking[i]->parkVehicle(Bus(theID));
            // sleep(3);
        } else if (vehicle == "Motorbike") {
            a = parking[i]->parkVehicle(Motorbike(theID));
            // sleep(3);
        }
    }

    cout << "The number of overstaying vehicles are: " << parking.countOverstayingVehicle(15) << endl; //problem

    return 0;
}