#include <iostream>
#include <string>
#include "Godzilla.h"
using namespace std;


int main() {
    srand(time(0));
    double health, power;

    cout << "Enter Godzilla's Health: ";
    cin >> health;

    cout << "Enter Godzilla's Power: ";
    cin >> power;

    Godzilla godzilla("Godzilla", health, power);
    Godzilla mechagodzilla("Mechagodzilla", 100, 0);

    cout << "Name: " << godzilla.getName() << "\nHealth: " << godzilla.getHealth();
    cout << "\nPower: " << godzilla.getPower();



    return 0;
}