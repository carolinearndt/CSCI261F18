#include <iostream>

using namespace std;


int main() {
    const int SIZE_OF_ARRAY = 15;             //size of the array to input

    int myArray[SIZE_OF_ARRAY];               // initialize array and users input for the array
    int yourValue;
    int maxVal, minVal;

    cout << "Hello! Welcome to my first array. \n" << "Please enter 15 numbers. \n";


    for(int i = 0; i <= SIZE_OF_ARRAY -1; i++ ){
        cout << "Number " << i+1 << ": ";   // loops through each array index and stores users input at the index.
        cin >> yourValue;
        myArray[i] = yourValue;
    }
    minVal = maxVal = myArray[0];                    //initialize min value to first value in array to be compared later


    cout << "Great! \n" << "Your numbers are: ";

    for (int x = 0; x <= SIZE_OF_ARRAY - 1; x++)          // prints out each value of the array to the screen
        cout << myArray[x] << " ";

    cout << endl << "Thanks for stopping by!" << endl;

    for (int y = 0; y <= SIZE_OF_ARRAY - 2; y++){
        if (minVal > myArray[y+1]){             //tests for min val, comparing next value in array and stored min val.
            minVal = myArray[y+1];
        }
        if (maxVal < myArray[y+1]){             //tests for max val, comparing next value in array and stored max val.
            maxVal = myArray [y+1];
        }
    }

    cout << "The largest value input was: " << maxVal << endl;
    cout << "The smallest value input was: " << minVal << endl;


    return 0;
}