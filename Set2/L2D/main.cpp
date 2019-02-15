/*
 * Caroline Arndt
 *
 * CSCI 261D
 *
 * Lab 2D
 *
 * The purpose of this lab is to create a program that plays rock paper scissors using the rand() function
 */


#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;


int main () {


    string player1Choice;
    int computerChoiceNum;
    string computerChoiceString;

    cout << "Do you think you can beat the computer in Rock Paper Scissors? ( Enter R, P, or S)"<< endl;
    cin >> player1Choice;

    // changes players choice to a string


    if ( player1Choice == "R" || player1Choice == "r")
    {
        player1Choice = "Rock";
    }

    else if ( player1Choice == "P" || player1Choice == "p")
    {
        player1Choice = "Paper";
    }

    else if ( player1Choice == "S" || player1Choice == "s")
    {
        player1Choice = "Scissors";
    }




    cout << "\n" <<  "Player 1 chose " << player1Choice << endl ;

    srand(time(0)); //rand function seeded

    computerChoiceNum = ( rand() % 3); //assigns random number to computerChoice


    //changes computers choice to a string

    if ( computerChoiceNum == 0)
    {
        computerChoiceString = "Rock";
    }

    else if (computerChoiceNum == 1 )
    {
        computerChoiceString = "Paper";
    }

    else if ( computerChoiceNum == 2 )
    {
        computerChoiceString = "Scissors";
    }

    //prints computers choice to screen

    cout << "Computer chose " << computerChoiceString << endl;
    return 0 ;
}