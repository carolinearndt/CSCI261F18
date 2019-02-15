// Sydney Toler
// Created by sydney on 11/15/2018.
//

#include <iomanip>
#include <iostream>
#include <vector>
#include <string>
#include<sstream>
using namespace std;
#include "MagicNumberSydneyToler.h"
#include <fstream>

MagicNumber::MagicNumber() {
    computersNumber();
    _prize = "monayyyy";
    introduction();
}

void MagicNumber::introduction() {
    cout << "Welcome to my Magic Number Game!" << endl;
    cout << "Enter a number between 1 and 5" << endl;
    cout << "If your guess is the same as the computers, you win a prize!" << endl;
}

string MagicNumber::getPrize() {
    return _prize;
}

int MagicNumber::getNumber() {
    return _number;
}

int MagicNumber::computersNumber() {
    srand(time(0));
    _number = (rand() % 5) + 1;
    return _number;
}

bool MagicNumber::guessIsRight(int player) {
    won = 0;
    if (player == _number) {
        won = 1;
    }
    return won;
}
