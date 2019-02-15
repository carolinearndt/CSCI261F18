#include <iostream>
#include "MagicDundieCarolineArndt.h"
#include "AlienInvasionPaigeCirillo.h"
#include "CherryDatTruong.h"
#include "MagicNumberSydneyToler.h"

int main() {
    char userChoice;
    int userGuess;
    int carlysGuess;

    MagicDundie CarlysTurn;
    CarlysTurn.playOfficeTrivia();
    cout <<endl;

    AlienInvasion CarlysInvasion;
    cout << CarlysInvasion.getScenario();
    cin >> userChoice;
    cout << CarlysInvasion.getPrize();
    cout << endl;

    Magic Carly;

    while(!Carly.DidUserWin() && Carly.GuessesRemain()){
        cin >> userGuess;
        Carly.IsGuessCorrect(userGuess);
    }
    cout << endl;


    MagicNumber CarlysNumber;
    cin >> carlysGuess;
    if(CarlysNumber.guessIsRight(carlysGuess))
        CarlysNumber.getPrize();
    else
        cout << "Better luck next time." <<endl;




    return 0;
}