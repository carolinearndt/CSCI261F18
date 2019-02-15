//
// Created by Caroline Arndt on 11/7/18.
//

#ifndef A6_FUNCTIONS_H
#define A6_FUNCTIONS_H

#include <string>
#include <vector>
#include "WordCount.h"

void getString(std::string& myString);

void sortString(std::string myString, std::vector < std::string > &words);

void getWordCount(std::vector<std::string> wordsInString, std::vector<WordCount> &myWordCountVector);

void mostAndLeast(std::vector<WordCount> myWordCountVector);

void letterCount(std::vector<std::string> wordStorage);

int findMin(std::vector <std::string> myWordString, int startIndex, int endIndex);

void carlySort(std::vector <std::string> &myWordString);

#endif //A6_FUNCTIONS_H
