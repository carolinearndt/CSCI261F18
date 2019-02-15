

#include "CherryDatTruong.h"
#include <iostream>
#include <ctime>
using namespace std;

Magic::Magic(){
    //Class constructor
    _failCount = 0;
    _userWon = false;
    _randNum = _GenerateNum();
    _Intro();
}

void Magic::_Intro() {
    // Intro. Gives away random number for testing purposes
    cout << "Your Uncle Cletus hasn't been around for most of your birthdays, because he's been busy fighting terrorists in the"<< endl;
    cout << "Delta SEAL Recon Force. So this year he really wants to make up for it with a very special gift: a scratch off lottery" << endl;
    cout << "ticket. Now this ain't no ordinary lottery ticket. To win the jackpot all you gotta do is guess the winning number" << endl;
    cout << "between 1 and " << _randNumUpperBound  << ", and you get " << _numTries << " chances to do it. So make old Uncle Cletus proud!" << endl << endl;

    cout << "**If you are the program tester, the winning number is " << _randNum << ". If you're not, don't read this!**" << endl;

}
int Magic::_GenerateNum(){
    // Generate random number between 1 and 15.
    srand(time(0));
    return (rand() % (_randNumUpperBound - 1)) + 1;
}
bool Magic::IsGuessCorrect(int userGuess){
    if (userGuess == _randNum){ // If user wins, give user the "prize" set the win flag to true.
        GetPrize();
        _userWon = true;
        return true;
    } else {                    //If user guesses wrong, increment failCount, tell user how many guesses remain.
        if (userGuess <= _randNumUpperBound) {
            _failCount++;
            if (_failCount < _numTries) {
                cout << "You have " << _numTries - _failCount << " guesses remaining." << endl;

            }
        } else {
            cout << "That's not a valid choice!" << endl;
        }
        return false;
    }
}
bool Magic::GuessesRemain() {
    if (_failCount < _numTries){
        return true;
    } else {
        cout << "Sorry, pal. Better luck next time.";
        return false;
    }
}
bool Magic::DidUserWin() {
    return _userWon;
}

void Magic::GetPrize() {
    cout << "Yeeeee-haw, I am- I mean, WE are gonna be so rich!!!! " << endl;
}