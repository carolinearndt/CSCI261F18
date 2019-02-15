//
// Created by Caroline Arndt on 11/7/18.
//

#include "Functions.h"
#include "WordCount.h"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

// purpose is to get user's input for the string and stop when user enters "I'm done!"

void getString(string& myString){

    string appendSentence;                              // used to store user's sentence each time.

    cout << "Enter as many sentences as you'd like then type \"I'm done!\" when finished." << endl;

    do{

    getline(cin, appendSentence);                       // get's user's input and stores in appendSentence.

    if (appendSentence == "I'm done!")
        continue;

    if (appendSentence[appendSentence.length() - 1] == ' ') // if the user enters a space at the end of their sentence,
        appendSentence.erase(appendSentence.length() - 1);  // this erases the space so it isn't counted as a word.

    myString.append(appendSentence);                    // adds appendSentence to myString (stores all sentences)

    myString.append(" ");                               // adds a space to separate words
    }
    while(appendSentence != "I'm done!");               //stops looping once user enters "I'm done!"




}

void sortString(string myString, vector<string> &words) {
    // finds characters that aren't a letter and deletes them unless they're an apostrophe or a space. Converts letters
    // to upper case
    // converts sentences from string to words in a vector
    // sorts vector alphabetically


    for (string::iterator it = myString.begin(); it != myString.end(); it++) {
        if (!isalpha(*it)) {

            if (*it == '\'' || *it == ' ')
                continue;
            myString.erase(it);
        }

        if (isalpha(*it))
            *it = toupper(*it);

    }

    string wordsFromVector = myString.substr(0, myString.find(' '));  // creates first word to store in vector

    while (myString.find(' ') != string::npos) {                      // while the find function does not return npos

        words.push_back(wordsFromVector);                             // add the word to the vector

        myString.erase(0, myString.find(' ') + 1);                    //erase the word from the string


        wordsFromVector = myString.substr(0, myString.find(' '));     // find the next word in the string

        if (myString == " ") {                                        // if a space is the only thing left, we are done
            break;
        }

    }

    carlySort(words);                                                // implemented sorting function

}

// getWordCount takes the strings from the string vector wordsInString and translates to the WordCount vector, with
// each WordCount object containing a unique word and its total count
void getWordCount(vector<string> wordsInString, vector<WordCount> &myWordCountVector){

    WordCount nextWord;                                             // WordCount object to store in Wordcount vector
    nextWord.count = 1;                                             // starts with the first word in the string vector
    nextWord.word = wordsInString.at(0);

    myWordCountVector.push_back(nextWord);                          // adds the WordCount obj nextWord to the vector.

    for ( int i = 1; i < wordsInString.size() ; i++) {              // iterates through wordsInString vector
        bool alreadyFound = false;                                  // bool that becomes true if the word is already in
                                                                    // the WordCount vector.
        for (int x = 0; x < myWordCountVector.size(); x++){         // iterates through the WordCount vector. adds 1 to
            if (wordsInString.at(i) == myWordCountVector.at(x).word){
                myWordCountVector.at(x).count++;                    // the count if the word has already been found.
                alreadyFound = true;
                break;
            }
        }

        if (alreadyFound)                                           // ensures that if the current word has already
            continue;                                               // been found that it won't be added to the vector
                                                                    // as a unique word

        nextWord.word = wordsInString.at(i);                        // stores the next word from the string vector
        nextWord.count = 1;                                         // count for the word becomes one
        myWordCountVector.push_back(nextWord);                      // adds the object to the WordCount vector



    }
    for (int index = 0; index < myWordCountVector.size(); index++){  // couts the words and their count.

        cout  << "#" << setw(3) << index + 1 <<" " <<  setw(10) << left << myWordCountVector.at(index).word;
        cout << " : " << setw(4) << right << myWordCountVector.at(index).count;
        cout << endl;
    }
    cout << endl;

};

//prints out the most and least frequently used words and their counts.
void mostAndLeast(vector<WordCount> myWordCountVector){

    //initializes counts to the first word's counts
    int mostFrequent = myWordCountVector.at(0).count, leastFrequent = myWordCountVector.at(0).count;
    int currentWordCount;                                       // for readability of code
    int indexForMost = 0, indexForLeast = 0;                    // so we can get the word associated with the highest count

    for (int i = 1; i < myWordCountVector.size(); i ++){        // iterates through WordCount Vector

        currentWordCount = myWordCountVector.at(i).count;

        if (currentWordCount < leastFrequent) {                 // if currentWordCount is smaller than what we have stored,
            leastFrequent = currentWordCount;                   // then currentWordCount is new low
            indexForLeast = i;                                  // takes the index of the new low
        }
        if (currentWordCount > mostFrequent) {                  // if currentWordCount is higher than what we have stored,
            mostFrequent = currentWordCount;                    // then current word count is new high
            indexForMost = i;                                   // takes the index of the new high
        }
    }

    //prints the lowest and highest word counts to the screen.
    cout << endl << setw(16) << left << "Most Frequent: " << setw(12) << myWordCountVector.at(indexForMost).word;
    cout << "(" << mostFrequent << ")" << endl;
    cout << setw(16) << left << "Least Frequent: " << setw(12) << myWordCountVector.at(indexForLeast).word;
    cout << "(" << leastFrequent << ")\n" << endl;


}

void letterCount(vector<string> wordVector) {
    string myNextWord;
    LetterCount letterCountArray[26];                           // creates a lettercount array
    double totalNumberOfLetters = 0;                            // stored as a double instead of int so we can use it
    char letterIterator = 'A';                                  // to find a percent later.
    int mostFrequent = 0, leastFrequent = 10000;
    int mostFrequentIndex = 0, leastFrequentIndex = 0;

    cout << "Letter Counts" << endl << "------------" << endl;

    for (int i = 0; i < 26; i++) {                              // stores each letter in the array, initializes count
        // to 0.
        letterCountArray[i].letter = letterIterator;
        letterCountArray[i].count = 0;
        letterIterator++;

    }


    for (int vectorWordIndex = 0; vectorWordIndex < wordVector.size(); vectorWordIndex++) {
        myNextWord = wordVector.at(vectorWordIndex);            // takes the word from the string vector

        int wordLength = myNextWord.length();                   // variable that stores length of the word

        for (int wordIndex = 0; wordIndex < wordLength; wordIndex++) {    // iterates through letters of word
            for (int indexOfArray = 0; indexOfArray < 26; indexOfArray++) {     // iterates through array of letters
                if (myNextWord[wordIndex] == letterCountArray[indexOfArray].letter) {
                    letterCountArray[indexOfArray].count++;     // adds to the count of the correct letter.

                }
            }
        }
    }


    for (int i = 0; i < 26; i++)                                // adds the total number of letters together
        totalNumberOfLetters = totalNumberOfLetters + letterCountArray[i].count;

    for (int i = 0; i < 26; i++) {                              // finds the percent used of each letter
        letterCountArray[i].percentUsed = (letterCountArray[i].count / totalNumberOfLetters) * 100;

        cout << letterCountArray[i].letter << setw(8) << fixed << right << setprecision(3)
             << letterCountArray[i].percentUsed << "%\n";

    }


    for (int i = 0; i < 26; i++) {                               // finds the most and least frequent counts of letters.
        if (letterCountArray[i].count > mostFrequent) {
            mostFrequent = letterCountArray[i].count;
            mostFrequentIndex = i;
        }
        if (letterCountArray[i].count < leastFrequent) {
            leastFrequent = letterCountArray[i].count;
            leastFrequentIndex = i;
        }

    }


    // prints the most and least used letters to the screen
    cout << endl << setw(16) << left << "Most Frequent: " << setw(12) << letterCountArray[mostFrequentIndex].letter;
    cout << "(" << mostFrequent << ")" << endl;
    cout << setw(16) << left << "Least Frequent: " << setw(12) << letterCountArray[leastFrequentIndex].letter;
    cout << "(" << leastFrequent << ")\n" << endl;


}

//finds min in given range
int findMin(vector <string> myWordString, int startIndex, int endIndex){

    int myMin;

    myMin = startIndex;

    for (int z = startIndex; z <= endIndex; z++){
        if (myWordString.at(z) < myWordString.at(myMin) ){
            myMin = z;
        }
    }

    return myMin;
}

// finds next min and swaps it with current value
void carlySort(vector <string> &myWordString){

    int minIndex;
    string swap1;
    string swap2;

    for (int i = 0; i < myWordString.size(); i++){
       minIndex = findMin(myWordString, i, myWordString.size()-1);      // finds the next min
       if (i == minIndex)                                               // skips if the next min is
           continue;
       swap1 = myWordString.at(i);                                      //stores values to be swapped
       swap2 = myWordString.at(minIndex);

       myWordString.at(i) = swap2;                                      //swapping the min val with current index value
       myWordString.at(minIndex) = swap1;


    }
}
