

#include "AlienInvasionPaigeCirillo.h"

#include <iostream>
#include <string>
using namespace std;

AlienInvasion::AlienInvasion(){
    scenario = "Buildings have been shot with lasers. Should you run into the burning buildings? (Y or N) \n";
    prize = "Nice job \n";
    intro();
}

void AlienInvasion::setName(string name){
    name2= name;
}
string AlienInvasion::getName(){
    return name2;
}

void AlienInvasion::intro(){
    cout << "Aliens have invaded the planet. Your mission is to survive. " << endl;
}

string AlienInvasion::getScenario(){
    return scenario;
};

string AlienInvasion::getPrize(){
    return prize;
}