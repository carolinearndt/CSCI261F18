//
// Created by Caroline Arndt on 12/10/18.
//

#ifndef A8_CHERRYDATTRUONG_H
#define A8_CHERRYDATTRUONG_H

class Magic{
public:
    void GetPrize();
    bool GuessesRemain();
    bool IsGuessCorrect(int);
    bool DidUserWin();
    Magic();

private:
    void _Intro();
    int _GenerateNum();
    bool _userWon;
    const int _numTries = 3;            //Can be changed to give different number of tries
    const int _randNumUpperBound = 15;  // can be changed to increase the upper bound of random number
    int _randNum;
    int _failCount;
};


#endif //A8_CHERRYDATTRUONG_H
