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
            a = parking[i]->parkVehicle(Car(theID)); //issue
            // sleep(1);
        } else if (vehicle == "Bus") {
            a = parking[i]->parkVehicle(Bus(theID));
            // sleep(1);
        } else if (vehicle == "Motorbike") {
            a = parking[i]->parkVehicle(Motorbike(theID));
            // sleep(1);
        }
    }

    int theID;
    bool a;
    cout << "Please enter the vehicle you want to unpark: ";
    cin >> theID;
    a = parking->unparkVehicle(theID); //problem

    return 0;
}