//
// Created by Caroline Arndt on 12/3/18.
//

#ifndef L8D_GODZILLA_H
#define L8D_GODZILLA_H

#include <iostream>

class Godzilla {

public:
    Godzilla();
    Godzilla(std::string n, double h, double p);


    double getHealth() const;
    double getPower() const;
    std::string getName() const;

    void setName(std::string n);
    void setPower(double p);
    void setHealth(double h);

    void attack(Godzilla &target) ;
    void greet(const Godzilla &target) const;


private:
    double _health;
    double _power;
    std::string _gName;
    void initializeAttributes(std::string name, double health, double power);

};

#endif //L8D_GODZILLA_H
