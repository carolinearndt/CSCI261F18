//
// Created by Caroline Arndt on 11/7/18.
//

#ifndef A6_WORDCOUNT_H
#define A6_WORDCOUNT_H

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
#endif //A6_WORDCOUNT_H
