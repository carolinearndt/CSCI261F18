//
// Created by Caroline Arndt on 12/3/18.
//


#include <iostream>
#include <string>
#include "Godzilla.h"

Godzilla::Godzilla() {                      //default constructor that assigns random values to health and power

    _gName = "Godzilla";
    _health = rand() % 51 + 50;
    _power = rand() % 16 + 10;

}

Godzilla::Godzilla(std::string n, double h, double p) {
    initializeAttributes(n, h, p);          // constructor that assigns input values to name, health and power
}

std::string Godzilla::getName() {           // returns the name of the callee
    return _gName;
}
double Godzilla::getHealth() {              // returns the health of the callee
    return _health;
}
double Godzilla::getPower() {               // returns the power of the callee
    return _power;
}

void Godzilla::setName(std::string n) {     // sets the name of the callee to the input value.
    _gName = n;
}

void Godzilla::setHealth(double h) {        // sets the health of the callee to the input value
    _health = h;
}

void Godzilla::setPower(double p) {         // sets the power of the callee to the input value
    if (p > 0){
        _power = p;
    }
    else {
        _power = rand() % 16 + 10;
    }
}
void Godzilla::initializeAttributes(std::string name, double health, double power) {
    setName(name);                          // sets name, health , and power to input values
    setHealth(health);
    setPower(power);
}

void Godzilla:: attack(Godzilla &target){
 //subtracts the callee's power from the targets health
    std::cout << _gName << " attacks " << target.getName() << std::endl;

    double attackHealth = target.getHealth() - _power;

    target.setHealth(attackHealth);

    if (target.getHealth() < 0)
        std:: cout << target.getName() << " has been vanquished. " << std::endl;
}