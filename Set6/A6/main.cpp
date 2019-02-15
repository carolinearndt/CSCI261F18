/*
 * Caroline Arndt
 *
 * CSCI 261-E
 *
 * A6
 *
 * The purpose of this lab is to create a program that allows the user to enter as many sentences as they want, then
 * count the words, display the most and least used words, and then count letters and display the most and least used
 * letters.
 *
 */

#include "WordCount.h"
#include "Functions.h"
#include <iostream>

using namespace std;

/* Here's how it works:
 * 1) user inputs string, uses "I'm done!" to signify they're done.
 * 2) use a sort function to make a vector that stores each word alphabetically.
 *    uses the WordCount struct to store words and number of times it was used
 * 3) print out each word and the number of times it was used
 * 4) print out most frequently used word and least
 * 5) prints out percentage of each letter used, then the most and least frequently used.
 */


int main() {
    string theBestString;
    vector <string> wordsInString;
    vector <WordCount> myWordCountVector;


    getString(theBestString);

    sortString(theBestString, wordsInString);

    getWordCount(wordsInString, myWordCountVector);

    mostAndLeast(myWordCountVector);

    letterCount(wordsInString);

    return 0;
}
