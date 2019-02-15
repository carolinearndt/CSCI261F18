//
// Created by Caroline Arndt on 11/29/18.
//

#ifndef A7_WORDCOUNT_H
#define A7_WORDCOUNT_H
#include<string>

struct WordCount {
    std :: string word;
    int count = 0;

};
struct LetterCount {
    char letter;
    double count = 0;
    double percentUsed;
};
#endif //A7_WORDCOUNT_H
