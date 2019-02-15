#include <iostream>

using namespace std;

int main() {

    const int LOW = 0, HIGH = 100, TOO_CLOSE_DIFFERENCE = 5, TOO_HIGH_DIFFERENCE = 25;

    int myGuess = -1;
    int theMagicNumber;
    int numberOfGuesses = 0;



    //OPENING STATEMENT

    cout << "Let's play Guess the Number!" << endl;

    //SEED RAND FUNCTION, GENERATE COMPUTER'S GUESS

    srand(time(0));

    theMagicNumber = rand() % 101;

    while (myGuess != theMagicNumber){

        cout << "Pick a number between 0 and 100." << endl;

        cin >> myGuess;

        if (myGuess > HIGH || myGuess < LOW){
            cout << "Sorry, invalid input. please try again." << endl;
            continue;
        }

        else {

            if (myGuess == theMagicNumber) {

                cout << "That's right! ";

            } else if (myGuess > theMagicNumber) {

                cout << "Too high! ";
                if ((myGuess - theMagicNumber) <= TOO_CLOSE_DIFFERENCE){
                    cout << "Oooh you're close! ";
                }

                else if((myGuess - theMagicNumber) >= TOO_HIGH_DIFFERENCE){
                    cout << "Not even close! ";
                }

                cout << endl;

            }
            else if (myGuess < theMagicNumber) {
                cout << "Too low! ";

                if ((theMagicNumber - myGuess) <= TOO_CLOSE_DIFFERENCE){
                    cout << "Oooh you're close! ";
                }
                else if((theMagicNumber - myGuess) >= TOO_HIGH_DIFFERENCE){
                    cout << "Not even close! ";
                }

                cout << endl;

            }


        }







        numberOfGuesses++;

    }

    cout << "You won the game in " << numberOfGuesses << " tries. " << endl;




    return 0;
}