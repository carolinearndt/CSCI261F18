#include <iostream>
#include <string>
#include "Godzilla.h"
using namespace std;


int main() {
    srand(time(0));
    double health, power;

    cout << "Enter Mechagodzilla's Health: ";
    cin >> health;

    cout << "Enter Mechagodzilla's power: ";
    cin >> power;

    Godzilla Mechagodzilla ("Mechagodzilla", health, power);

    Godzilla Godzilla;

    cout << "Name: " << Godzilla.getName() << "\nHealth: " << Godzilla.getHealth()<< "\nPower: " << Godzilla.getPower() << endl;
    cout << "Name: " << Mechagodzilla.getName() << "\nHealth: " << Mechagodzilla.getHealth() << "\nPower: " << Mechagodzilla.getPower();
    cout << endl;



    return 0;
}