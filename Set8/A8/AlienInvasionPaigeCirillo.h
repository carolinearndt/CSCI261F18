//
// Created by Caroline Arndt on 12/10/18.
//

#ifndef A8_ALIENINVASIONPAIGECIRILLO_H
#define A8_ALIENINVASIONPAIGECIRILLO_H


#include <string>
using namespace std;
class AlienInvasion{
public:
    AlienInvasion();
    void setName(string name);
    string getName();
    string getScenario();
    string getPrize();


private:
    string name2;           //i need to include this to use in .cpp
    void intro();
    string prize;
    string scenario;

};


#endif //A8_ALIENINVASIONPAIGECIRILLO_H
