#include <iostream>

using namespace std;


int main() {
    const int SIZE_OF_ARRAY = 15;             //size of the array to input

    int myArray[SIZE_OF_ARRAY];               // initialize array and users input for the array
    int yourValue;

    cout << "Hello! Welcome to my first array. \n" << "Please enter 15 numbers. \n";


    for(int i = 0; i <= SIZE_OF_ARRAY -1; i++ ){
        cout << "Number " << i+1 << ": ";   // loops through each array index and stores users input at the index.
        cin >> yourValue;
        myArray[i] = yourValue;
    }



    cout << "Great! \n" << "Your numbers are: ";

    for (int x = 0; x <= SIZE_OF_ARRAY - 1; x++)          // prints out each value of the array to the screen
        cout << myArray[x] << " ";

    cout << endl << "Thanks for stopping by!" << endl;

    return 0;
}