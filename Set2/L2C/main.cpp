/*
 * Caroline Arndt
 *
 * CSCI 261E
 *
 * Lab 2C
 *
 * The purpose of this lab is to create a program that plays rock paper scissors using the rand() function
 */


#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main () {


    char player1Choice;
    int computerChoice;

    cout << "Do you think you can beat the computer in Rock Paper Scissors? ( Enter R, P, or S)"<< endl;
    cin >> player1Choice;
    cout << "\n" <<  "Player 1 chose " << player1Choice << endl ;

    srand(time(0)); //rand function seeded

    computerChoice = ( rand() % 3); //assigns random number to computerChoice

    cout << "Computer chose " << computerChoice << endl;
    return 0 ;
}