#include <iostream>
#include <vector>
#include "Functons.h"

using namespace std;

int main(){

    vector< int > myVector;                         // where the user's numbers will be stored
    int myVectorValue = 0;                          // value user enters to be pushed back into vector


    cout << "Hey! Welcome to my first vector. " << endl << "Enter as many non-negative numbers as you would like.";
    cout << " Enter -1 when you are finished. " << endl;


    while ( myVectorValue != -1 ){                  // loop stops once user enters -1.
        cout << "Your number is: ";

        cin >> myVectorValue;                       //user enters number they want to be stored in vector.

        if(myVectorValue == -1)                     // continues to the end of the loop to avoid being stored in vector.
            continue;

        if (myVectorValue < -1){                    // error checking to make sure user enters a positive number.
            cout << "Enter only positive numbers. Enter -1 when finished. ";
            continue;
        }

        myVector.push_back(myVectorValue);          // adds value to the end of the vector.

    }

    numbersYouEntered(myVector);

    lowestHighestValue(myVector);

    firstLastValue(myVector);

    cout << "Thanks for stopping by! " << endl;



    return 0;
}