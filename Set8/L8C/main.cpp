#include <iostream>
#include "Godzilla.h"
using namespace std;

int main() {
    //for using the rand() function
    srand(time(0));
    double health, power;

    cout << "Enter Godzilla's Health: ";
    cin >> health;

    cout << "Enter Godzilla's Power: ";
    cin >> power;

    //both objects use the parameterized constructor.
    Godzilla mechagodzilla("Mechagodzilla",100,0);
    Godzilla godzilla("Godzilla", health, power);


    cout << "Name: " << godzilla.getName() << "\nHealth: " << godzilla.getHealth();
    cout << "\nPower: " << godzilla.getPower() << endl;

    cout << "Name: " << mechagodzilla.getName() << "\nHealth: " << mechagodzilla.getHealth();
    cout << "\nPower: " << mechagodzilla.getPower() << endl <<endl;

    // Godzilla attacks Mechagodzilla.
    godzilla.attack(mechagodzilla);

    // Mechagodzilla attacks Godzilla until he is vanquished.
    while (mechagodzilla.getHealth() > 0 && godzilla.getHealth() > 0){
        mechagodzilla.attack(godzilla);
    }




    return 0;
}