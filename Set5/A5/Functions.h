//
// Created by Caroline Arndt on 11/20/18.
//

#ifndef A5_FUNCTIONS_H
#define A5_FUNCTIONS_H
void printArray(char myArray[], int sizeArray);

void printCurrentSolvedPuzzle(char myArray[], int sizeArray);

void takeAGuess(char foundArray[], char &myGuess, int lengthOfWord);

bool hasBeenGuessed(char currentGuesses[], int sizeArray, char myGuess);

bool isInWord(char secretWord[], int sizeArray, char myGuess);

bool puzzleSolved(char secretWord[], char foundSecretWord[], int lengthOfWord);



#endif //A5_FUNCTIONS_H
