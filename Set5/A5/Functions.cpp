//
// Created by Caroline Arndt on 11/20/18.
//
#include <iostream>
#include <iomanip>
#include "Functions.h"

//prints the array input.
void printCurrentSolvedPuzzle(char myArray[], int sizeArray){
    for (int i = 0; i <= sizeArray - 1; i++ ){
        std::cout << myArray[i] << " ";
    }
}

//takes the user's guess, displays current solved puzzle, converts user's guess to uppercase.
void takeAGuess(char foundSoFar[], char &yourGuess, int lengthOfWord){
    std::cout << "Take a guess: ";
    printCurrentSolvedPuzzle(foundSoFar,lengthOfWord);                  //prints foundSoFar to screen

    std::cin >> yourGuess;                                                   //user inputs the letter they guess

    yourGuess = toupper(yourGuess);
}


//a bool val that returns true if the user has already guessed a character, and false if they have not
bool hasBeenGuessed(char currentGuesses[], int sizeArray, char myGuess){

    for(int i = 0; i <= sizeArray; i++){
        if (myGuess == currentGuesses[i]){
            return true;
        }
    }

    return false;
};
//a bool val that tests whether ot not the user's guess is in the word
bool isInWord(char secretWord[], int sizeArray, char myGuess){
    for (int i = 0; i <= sizeArray; i++ ){
        if ( myGuess == secretWord[i])
            return true;
    }
    return false;
};

// a bool val that returns true if the compared arrays are the same, and false if they are not.
bool puzzleSolved(char secretWord[], char foundSecretWord[], int lengthOfWord ){
    int numberGuessed = 0;

    for (int i = 0; i <= lengthOfWord; i++){
        if (secretWord[i] == foundSecretWord[i])
            numberGuessed ++;

        if (numberGuessed >= lengthOfWord)
            return true;
    }


    return false;
};



