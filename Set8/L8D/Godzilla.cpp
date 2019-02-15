//
// Created by Caroline Arndt on 12/3/18.
//


#include <iostream>
#include <string>
#include "Godzilla.h"

Godzilla::Godzilla() {                          // default constructor
                                                // sets health and power to random values.
    _gName = "Godzilla";
    _health = rand() % 51 + 50;
    _power = rand() % 16 + 10;

}

Godzilla::Godzilla(std::string n, double h, double p) {
    initializeAttributes(n, h, p);              // constructor that takes input values for name, power, and health
}

std::string Godzilla::getName() const {         // returns the callee's name
    return _gName;
}
double Godzilla::getHealth() const {            // returns the callee's Health
    return _health;
}
double Godzilla::getPower() const {             // returns the callee's power
    return _power;
}

void Godzilla::setName(std::string n) {         // sets the callee's name to input value
    _gName = n;
}

void Godzilla::setHealth(double h) {            // sets the callee's health to input value
    _health = h;
}

void Godzilla::setPower(double p){              // sets the callee's power to input value unless it's lower than 0.
    if (p > 0){
        _power = p;
    }
    else {
        _power = rand() % 16 + 10;
    }
}
void Godzilla::initializeAttributes(std::string name, double health, double power) {
    setName(name);                              // initializes the object's attributes of name, health, and power
    setHealth(health);
    setPower(power);
}

void Godzilla:: attack(Godzilla &target){
    //subtracts the callee's power from the targets health
    std::cout << _gName << " attacks " << target.getName() << std::endl;

    double attackHealth = target.getHealth() - _power;

    target.setHealth(attackHealth);

    if (target.getHealth() <= 0)
        std:: cout << target.getName() << " has been vanquished. " << std::endl;
}

void Godzilla:: greet(const Godzilla &target) const {           //function that allows the callee to greet the target
    std::cout << _gName << " bows to " << target.getName() << std::endl << std::endl;
}