//
// Created by Caroline Arndt
//

#ifndef A8_MAGICNUMBERSYDNEYTOLER_H
#define A8_MAGICNUMBERSYDNEYTOLER_H

#include <iomanip>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include <fstream>

class MagicNumber {
private:
    string _prize;
    void introduction();
    int _number;
    bool won;
public:
    MagicNumber();
    bool guessIsRight(int player);
    int computersNumber();
    string getPrize();
    int getNumber();
};


#endif //A8_MAGICNUMBERSYDNEYTOLER_H
