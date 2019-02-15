//
// Created by Caroline Arndt on 12/3/18.
//


#include <iostream>
#include <string>
#include "Godzilla.h"

Godzilla::Godzilla() {              // default constructor that assigns random values to health and power

    gName = "Godzilla";
    health = rand() % 51 + 50;
    power = rand() % 16 + 10;

}

Godzilla::Godzilla(std::string n, double h, double p) {
    initializeAttributes(n, h, p);  // sets input values to health, power and name.
}

std::string Godzilla::getName() {   // returns the callee's name
    return gName;
}
double Godzilla::getHealth() {      // returns the callee's health
    return health;
}
double Godzilla::getPower() {       // returns the callee's power
    return power;
}

void Godzilla::setName(std::string n) {
    gName = n;                      // sets the input value to name.
}

void Godzilla::setHealth(double h) {
    health = h;                     // sets health to be input value
}

void Godzilla::setPower(double p) {
    if (p > 0){                     // sets power to input value if greater than 0.
        power = p;
    }
    else {
        power = rand() % 16 + 10;
    }
}
void Godzilla::initializeAttributes(std::string name, double health, double power) {
    setName(name);                  // sets name, health, and power to input values
    setHealth(health);
    setPower(power);
}