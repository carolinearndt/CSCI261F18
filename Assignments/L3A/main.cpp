/*
 * Caroline Arndt
 *
 * CSCI 261E
 *
 * Lab 2E
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

        // changes players choice to a string


        if (player1Choice == "R" || player1Choice == "r") {
            player1Choice = "Rock";
        } else if (player1Choice == "P" || player1Choice == "p") {
            player1Choice = "Paper";
        } else if (player1Choice == "S" || player1Choice == "s") {
            player1Choice = "Scissors";
        } else if (player1Choice == "L" || player1Choice == "l") {
            player1Choice = "Lizard";
        } else {
            player1Choice = "Spock";
        }


        cout << "\n" << "Player 1 chose " << player1Choice << endl;

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

        if (player1Choice == computerChoiceString) {
            cout << "Player 1 and Computer tied." << endl << "\n";
            whoWon = "none";
            tie += 1;

        }
        else if (player1Choice != computerChoiceString) {
            if (player1Choice == "Rock") {
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
    return 0;
}