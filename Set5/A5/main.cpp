/*
 * Caroline Arndt
 * CSCI 261 E
 * A5
 *
 * The purpose of this lab is to create a game of hangman using arrays and functions.
 */
#include <iostream>
#include "Functions.h"

int main() {
    int lengthOfWord = 0;                                   // length of word will be calculated later
    char  SECRET_WORD[] = { 'H', 'I', 'P', 'P', 'O', 'P', 'O', 'T', 'A', 'M', 'U', 'S' }; // the secret word!
    const int NUM_TRIES_TOTAL = 7;                          // total tries a user is allowed
    int numTries = 0;                                       // adds to numTries when user enters wrong guess
    char foundSoFar[lengthOfWord];                          // array to store values user has guessed correctly
    char lettersBeenGuessed[26] = {'_'};                    // stores all letter's user has guessed
    int indexForGuessed = 0;                                // used to store values for lettersBeenGuessed
    char yourGuess;                                         // the users guess


    lengthOfWord = sizeof(SECRET_WORD)/ sizeof(SECRET_WORD [0]);            // total bytes in array / size of element
                                                                            // = the length of the array
    std::cout << "Welcome to Hangman! " << std:: endl;

    for(int i = 0; i <= lengthOfWord - 1; i ++)                             // sets all values in array foundSoFar to
        foundSoFar[i] = '_';                                                // '_'


    while (numTries != NUM_TRIES_TOTAL){                                    // exits the loop if user has 7 wrong tries

        takeAGuess(foundSoFar, yourGuess, lengthOfWord);                    // takes users guess.

        if (hasBeenGuessed(lettersBeenGuessed, lengthOfWord, yourGuess)){   // continues to next iteration of loop if guessed already.
            std::cout << "You already guessed " << yourGuess << " . Please guess again. " << std::endl;
            continue;
        }

        lettersBeenGuessed[indexForGuessed] = yourGuess;                    // adds user's guess to an array to keep track
        indexForGuessed++;                                                  // of what has been guessed. index for array increased each time.

        if (isInWord(SECRET_WORD, lengthOfWord, yourGuess)) {               // if the user's guess is in the word...
            std::cout << "There's a(n) " << yourGuess << "! " << std::endl;

            for (int i = 0; i <= lengthOfWord; i++){                        // then changes the value in the holding array at the correct
                if (SECRET_WORD[i] == yourGuess){                           // index to the user's guess.
                    foundSoFar[i] = yourGuess;
                }
            }

        }

        if (! isInWord(SECRET_WORD, lengthOfWord, yourGuess)){              // if the guess is not in the word...
            std::cout << "Sorry, no " << yourGuess << "'s. ";
             numTries++;                                                    // increases numTries by one.
            std::cout << "You have " << NUM_TRIES_TOTAL - numTries << " wrong guesses left." << std::endl;
        }


           if (puzzleSolved(SECRET_WORD, foundSoFar, lengthOfWord)){        // tests if the puzzle is solved after the user's guess.

               std:: cout << "You've won! You guessed the word " ;
               printCurrentSolvedPuzzle(foundSoFar, lengthOfWord);          // congratulates user, prints out the full word
               return 0;
           }

       }




    if (numTries >= NUM_TRIES_TOTAL){                                       // if the user is out of tries, displays the loss.
        std::cout << "You lose. Try again! " << std::endl;
    }



    return 0;
}