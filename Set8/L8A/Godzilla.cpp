//
// Created by Caroline Arndt on 12/2/18.
//
#include <iostream>
#include <string>
#include "Godzilla.h"

Godzilla::Godzilla() {                      // default constructor that sets health and power to random values.

    gName = "Godzilla";
    health = rand() % 51 + 50;
    power = rand() % 16 + 10;

}

Godzilla::Godzilla(std::string n, double h, double p) {
                                            // constructor that sets health and power to input values
    gName = n;


    if (h > 0 && p > 0){
        health = h;
        power = p;
    }

    else{
        health = rand() % 51 + 50;
        power = rand() % 16 + 10;
    }
}

std::string Godzilla::getName() {           // returns callee's name
    return gName;
}
double Godzilla::getHealth() {              // returns callee's health
    return health;
}
double Godzilla::getPower() {               // returns callee's power
    return power;
}
