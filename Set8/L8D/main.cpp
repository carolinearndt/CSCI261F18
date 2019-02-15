#include <iostream>
#include "Godzilla.h"
using namespace std;

int main() {
    srand(time(0));
    double health, power;

    cout << "Enter Godzilla's Health: ";
    cin >> health;

    cout << "Enter Godzilla's Power: ";
    cin >> power;

    Godzilla mechagodzilla("Mechagodzilla", 100, 0);
    Godzilla godzilla("Godzilla", health, power);

    // displays the name, health and power of each object
    cout << "Name: " << godzilla.getName() << "\nHealth: " << godzilla.getHealth();
    cout << "\nPower: " << godzilla.getPower() << endl;

    cout << "Name: " << mechagodzilla.getName() << "\nHealth: " << mechagodzilla.getHealth();
    cout << "\nPower: " << mechagodzilla.getPower() << endl << endl;

    //Godzilla greets Mechagodzilla before the battle.
    godzilla.greet(mechagodzilla);
    //Godzilla attacks Mechagodzilla
    godzilla.attack(mechagodzilla);
    cout << endl;

    //Mechagodzilla attacks Godzilla until he is vanquished.
    while (mechagodzilla.getHealth() > 0 && godzilla.getHealth() > 0) {
        mechagodzilla.attack(godzilla);
    }

    return 0;
}