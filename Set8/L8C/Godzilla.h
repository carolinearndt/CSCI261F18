//
// Created by Caroline Arndt on 12/3/18.
//

#ifndef L8C_GODZILLA_H
#define L8C_GODZILLA_H
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

    void attack(Godzilla &MyObj);


private:
    double _health;
    double _power;
    std::string _gName;
    void initializeAttributes(std::string name, double health, double power);

};
#endif //L8C_GODZILLA_H
