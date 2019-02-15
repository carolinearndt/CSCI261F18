//
// Created by Caroline Arndt on 11/13/18.
//

#include "Functions.h"
#include <string>

    //function to get user input and save to a string var
    void userRPSLS(string &userInput){
        char userChar;

        cout << "Player 1: " ;
        cin >> userChar;

        userChar = toupper(userChar);

        





    //function to get computers choice and save to a string var

    void computerRPSLS(string &computerInput){
        int computerChoiceInt;
        srand(time(0))

        computerChoiceInt = rand() % 5;

        switch (computerChoiceInt){

            case 0:
                computerInput = 'R';
                break;
            case 1:
                computerInput = 'P';
                break;
            case 2:
                computerInput = 'S';
                break;
            case 3:
                computerInput = 'L';
                break;
            case 4:
                computerInput = 'O';


        }




}


    //function to compare choices and determine winner

    char userVictory(string userInput, string computerInput){
        if (userInput == computerInput){
            return 'T'
        }
        else{

        }
}


    //function to keep track of number of wins and losses

    type tabulateRPS();

    //wrapper to play the game and continue playing
    void rockPaperScissors(){

        char userInput;
        char computerInput;
        char keepPlaying

        cout << "Do you think you can beat the computer in a game of Rock Paper Scissors Lizard Spock? /n";
        cout << "(Enter R,P,S,L,Sp) "<< endl;



        //start of while loop

        do{
            //get user input
            userRPSLS(userInput);

            //computer choice
            computerRPSLS(computerInput);

            //compare


            //keep playing?


        }while (keepPlaying == 'Y' || keepPlaying == 'y')




        //exit and display total games won and lost
    }