//
// Created by Caroline Arndt on 11/29/18.
//

#ifndef A7_FUNCTIONS_H
#define A7_FUNCTIONS_H

#include <string>
#include <vector>
#include "WordCount.h"


void getString(std::vector <std::string> &vectorOfWords);

void sortString(std::string myString, std::vector < std::string > &words);

void getWordCount(std::vector<std::string> wordsInString, std::vector<WordCount> &myWordCountVector);

void mostAndLeast(std::vector<WordCount> myWordCountVector);

void letterCount(std::vector<std::string> wordVector, LetterCount letterCountArray[26], LetterCount &mostFreq, LetterCount &leastFreq);

int findMin(std::vector <std::string> myWordString, int startIndex, int endIndex);

void carlySort(std::vector <std::string> &myWordString);


#endif //A7_FUNCTIONS_H

