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

    ParkingLot parking(2);
    Vehicle* pTempVehicle = nullptr;

    for (int i = 0; i < n; i++) {
        string vehicle;
        int theID;

        cout << "Please enter your vehicle and ID: ";
        cin >> vehicle;
        cin >> theID;
        if (vehicle == "Car") {
            pTempVehicle = new Car(theID);
            if (parking.parkVehicle(pTempVehicle) == true)
            {
                cout << "Parked Car OK" << endl;
            }
            // a = parking[i]->parkVehicle(Car(theID));
            // sleep(1);
        } else if (vehicle == "Bus") {
            pTempVehicle = new Bus(theID);
            parking.parkVehicle(pTempVehicle);
            // a = parking[i]->parkVehicle(Bus(theID));
            // sleep(1);
        } else if (vehicle == "Motorbike") {
            pTempVehicle = new Motorbike(theID);
            parking.parkVehicle(pTempVehicle);
            // a = parking[i]->parkVehicle(Motorbike(theID));
            // sleep(1);
        }
    }

    int theID;
    cout << "Please enter the vehicle you want to unpark: ";
    cin >> theID;
    parking.unparkVehicle(theID); //problem

    // parking->~ParkingLot();

    return 0;
}