//
// Created by Caroline Arndt on 11/13/18.
//

#include "Functions.h"
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

void rockPaperScissors(){


    char player1Choice;
    int computerChoiceNum;
    string playerObject;
    string computerChoiceString;
    string whoWon;
    string keepPlaying = "Y";
    int wins = 0;
    int tie = 0;
    int lose = 0;

    while (keepPlaying == "Y" || keepPlaying == "y")
    {
        cout << "Do you think you can beat the computer in Rock Paper Scissors Lizard Spock? ( Enter R, P, S, L, or Sp )"
             << endl;
        cin >> player1Choice;

        // stores char in player1Choice


        if (player1Choice == 'R' || player1Choice == 'r') {
            playerObject = "Rock";
        } else if (player1Choice == 'P' || player1Choice == 'p') {
            playerObject = "Paper";
        } else if (player1Choice == 'S' || player1Choice == 's') {
            playerObject = "Scissors";
        } else if (player1Choice == 'L' || player1Choice == 'l') {
            playerObject = "Lizard";
        } else {
            playerObject = "Spock";
        }


        cout << "\n" << "Player 1 chose " << playerObject << endl;

        srand(time(0)); //rand function seeded

        computerChoiceNum = (rand() % 5); //assigns random number to computerChoice


        //changes computers choice to a string

        if (computerChoiceNum == 0) {
            computerChoiceString = "Rock";
        } else if (computerChoiceNum == 1) {
            computerChoiceString = "Paper";
        } else if (computerChoiceNum == 2) {
            computerChoiceString = "Scissors";
        } else if (computerChoiceNum == 3) {
            computerChoiceString = "Lizard";
        } else if (computerChoiceNum == 4) {
            computerChoiceString = "Spock";
        }

        //prints computers choice to screen

        cout << "Computer chose " << computerChoiceString << "\n" << endl;


        //determining who wins

        if (playerObject == computerChoiceString) {
            cout << "Player 1 and Computer tied." << endl << "\n";
            whoWon = "none";
            tie += 1;

        }
        else if (playerObject != computerChoiceString) {
            if (playerObject == "Rock") {
                if (computerChoiceString == "Paper" || computerChoiceString == "Spock") {
                    whoWon = "Computer";
                } else if (computerChoiceString == "Scissors" || computerChoiceString == "Lizard") {
                    whoWon = "Player 1";
                }

            }
            else if (player1Choice == "Paper") {
                if (computerChoiceString == "Scissors" || computerChoiceString == "Lizard") {
                    whoWon = "Computer";
                } else if (computerChoiceString == "Rock" || computerChoiceString == "Spock") {
                    whoWon = "Player 1";
                }
            }
            else if (player1Choice == "Scissors") {
                if (computerChoiceString == "Rock" || computerChoiceString == "Spock") {
                    whoWon = "Computer";
                } else if (computerChoiceString == "Paper" || computerChoiceString == "Lizard") {
                    whoWon = "Player 1";
                }
            }
            else if (player1Choice == "Lizard") {
                if (computerChoiceString == "Rock" || computerChoiceString == "Scissors") {
                    whoWon = "Computer";
                } else if (computerChoiceString == "Paper" || computerChoiceString == "Spock") {
                    whoWon = "Player 1";
                }
            }
            else if (player1Choice == "Spock") {
                if (computerChoiceString == "Lizard" || computerChoiceString == "Paper") {
                    whoWon = "Computer";
                } else if (computerChoiceString == "Rock" || computerChoiceString == "Scissors") {
                    whoWon = "Player 1";
                }
            }
        }


        // Final output to determine winner

        if (whoWon == "Player 1") {

            cout << player1Choice << " beats " << computerChoiceString << ". " << whoWon << " wins!" << endl;
            cout << "\n";

            wins += 1;

        } else if (whoWon == "Computer") {

            cout << computerChoiceString << " beats " << player1Choice << ". " << whoWon << " wins!" << endl;
            cout << "\n";

            lose +=1;
        }

        cout << "Do you want to play again? (Y/N) " << endl;
        cin >> keepPlaying;



    }

    if (keepPlaying != "y" || keepPlaying != "Y")
    {
        cout << "Thanks for playing!" << endl;
        cout << "You have won " << wins << " games." << endl;
        cout << "You have lost " << lose << " games." << endl;
        cout << "You tied " << tie << " games." << endl;
    }
}