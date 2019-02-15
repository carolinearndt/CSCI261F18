//
// Created by Caroline Arndt on 12/2/18.
//

#ifndef L8A_GODZILLA_H
#define L8A_GODZILLA_H

#include <string>
#include <iostream>


class Godzilla {

public:
    Godzilla();
    Godzilla(std::string n, double h, double p);


    double getHealth();
    double getPower();
    std::string getName();

private:
    double health;
    double power;
    std::string gName;

};


#endif //L8A_GODZILLA_H
