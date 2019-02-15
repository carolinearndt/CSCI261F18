//
// Created by Caroline Arndt on 12/3/18.
//

#ifndef L8B_GODZILLA_H
#define L8B_GODZILLA_H

#include <iostream>

class Godzilla {

public:
    Godzilla();
    Godzilla(std::string n, double h, double p);


    double getHealth();
    double getPower();
    std::string getName();

    void setName(std::string n);
    void setPower(double p);
    void setHealth(double h);


private:
    double health;
    double power;
    std::string gName;
    void initializeAttributes(std::string name, double health, double power);

};


#endif //L8B_GODZILLA_H
