//
// Created by Caroline Arndt on 11/25/18.
//

#include "Functons.h"
#include <iostream>

// prints the size of the vector as well as the values in the vector.
void numbersYouEntered(std::vector<int> myVector){

    int sizeOfVector = myVector.size();

    std::cout << "Awesome! You entered " << sizeOfVector << " numbers. " << std::endl;
    std::cout << "The numbers you entered are: ";

    for( int i = 0; i < sizeOfVector; i++ ){        // loop used to print values of vector to the screen.
        std::cout << myVector.at(i) << " ";
    }

    std::cout << std::endl;
};

// prints the lowest and highest values that the user entered.
void lowestHighestValue(std::vector<int> myVector){
    int minVal, maxVal;

    minVal = maxVal = myVector.at(0);               // initializes min and max values to the first value in the vector.

    for (int i = 1; i < myVector.size(); i++){
        if (myVector.at(i) < minVal)                // check for min value, comparing next element in vector to current min.
            minVal = myVector.at(i);

        else if (myVector.at(i) > maxVal)           // check for max value, comparing next element in vector to current max.
            maxVal = myVector.at(i);

    }
    std::cout << "The smallest number entered was: " << minVal << std::endl;
    std::cout << "The largest number entered was: " << maxVal << std::endl;


};

// prints the first and last values the user entered.
void firstLastValue(std::vector<int> myVector){

    std::cout << "The first value entered was: " << myVector.at(0) << std::endl;
    std::cout << "The last value entered was: " << myVector.at(myVector.size()-1) << std::endl;

};