#include <iostream>
#include <string>
#include <math.h>
#include <ctime>
#include <unistd.h>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main() {
    int n;
    cout << "How many vehicles do you want to park?" << endl;
    cin >> n;

    Vehicle* vehicleArray[n];

    for (int i = 0; i < n; i++) {
        string vehicle;
        int theID;
        cout << "Please enter your vehicle and ID: ";
        cin >> vehicle;
        cin >> theID;
        if (vehicle == "Car") {
            vehicleArray[i] = new Car(theID);
            // sleep(3);
        } else if (vehicle == "Bus") {
            vehicleArray[i] = new Bus(theID);
            // sleep(3);
        } else if (vehicle == "Motorbike") {
            vehicleArray[i] = new Motorbike(theID);
            // sleep(3);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << "The vehicle duration is: " << vehicleArray[i]->getParkingDuration() << endl;
    }

    delete[] vehicleArray;
    
    return 0;
}