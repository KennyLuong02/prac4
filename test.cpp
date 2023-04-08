#include <iostream>
#include <string>
#include <math.h>
#include <ctime>
#include <unistd.h>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main() {
    cout << "Welcome to my carpark" << endl;

    Vehicle* fixedParkingArray[10];

    fixedParkingArray[0] = new Car(1);
    cout << "Car 1 just in" << endl;
    sleep(3);
    fixedParkingArray[1] = new Car(2);
    cout << "Car 2 just in" << endl;
    sleep(3);
    fixedParkingArray[2] = new Car(3);
    cout << "Car 3 just in" << endl;
    sleep(3);
    fixedParkingArray[3] = new Car(4);
    cout << "Car 4 just in" << endl;
    sleep(3);
    fixedParkingArray[4] = new Bus(5);
    cout << "Bus 5 just in" << endl;
    sleep(3);
    fixedParkingArray[5] = new Bus(6);
    cout << "Bus 6 just in" << endl;
    sleep(3);
    fixedParkingArray[6] = new Motorbike(7);
    cout << "Motorbike 7 just in" << endl;
    sleep(3);
    fixedParkingArray[7] = new Motorbike(8);
    cout << "Motorbike 8 just in" << endl;
    sleep(3);

    cout << "time for 1 " << fixedParkingArray[0]->getParkingDuration() << " seconds" << endl;
    cout << "time for 2 " << fixedParkingArray[1]->getParkingDuration() << " seconds" << endl;
    cout << "time for 3 " << fixedParkingArray[2]->getParkingDuration() << " seconds" << endl;
    cout << "time for 4 " << fixedParkingArray[3]->getParkingDuration() << " seconds" << endl;
    cout << "time for 5 " << fixedParkingArray[4]->getParkingDuration() << " seconds" << endl;
    cout << "time for 6 " << fixedParkingArray[5]->getParkingDuration() << " seconds" << endl;
    cout << "time for 7 " << fixedParkingArray[6]->getParkingDuration() << " seconds" << endl;
    cout << "time for 8 " << fixedParkingArray[7]->getParkingDuration() << " seconds" << endl;

    return 0;

}