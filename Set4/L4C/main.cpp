/* CSCI 261: Fix Function Errors
 *
 * Author: Caroline Arndt
 *
 *    This program illustrates a variety of common loop errors.
 *    Fix the errors in each section.

Copyright 2018 Dr. Jeffrey Paone

Permission is hereby granted, free of charge, to any person
obtaining a copy of this software and associated documentation
files (the "Software"), to deal in the Software without
restriction, including without limitation the rights to use,
copy, modify, merge, publish, distribute, sublicense, and/or
sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following
conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

 */

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

// input: integer
// output: none
// adds five to the given parameter
void addFive( int &x ) {
    x += 5;
}

// input: none
// output: a random number
int generateRandomNumber() {
    return rand() % 100;
}

// input: three integers
// output: the sum of all three parameters
int sum( int x, int y, int z ) {
    return x + y + z;
}

// input: two doubles
// output: the product of the two doubles
double multiply( double a, double b ){
    return a * b;
}

void printSmileyFace(){
    cout << ":)" << endl;
}


int main() {
    cout << "Welcome to Function World" << endl;

// SECTION I: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = function needs to pass sby reference, not by value.
// TESTS:

    cout << endl;
    cout << "******************" << endl;
    cout << "Section I" << endl;
    cout << "******************" << endl;

    int numTrees = 4;
    cout << "There are initially " << numTrees << " trees." << endl;
    addFive( numTrees );
    cout << "We planted five trees, there are now " << numTrees << " trees." << endl;

// SECTION II: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = There was no function defined before for printSmileyFace. There is now a function that prints a face.
// TESTS: function should print ":)" when called.

    cout << endl;
    cout << "******************" << endl;
    cout << "Section II" << endl;
    cout << "******************" << endl;

    printSmileyFace();

// SECTION III: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = srand needs to be outside the loop.
// TESTS: instead of printing 5 of the same numbers, they should now all be different.

    cout << endl;
    cout << "******************" << endl;
    cout << "Section III" << endl;
    cout << "******************" << endl;

    cout << "Five different random numbers are: " << endl;
    srand(time(0));
    for( int i = 0; i < 5; i++ ) {
        cout << "\t" << generateRandomNumber() << endl;
    }


// SECTION IV: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = changed return value from "x+x+x" to "x+y+z". also needs to be  changed to sum(num1, num2, num3).
// TESTS:

    cout << endl;
    cout << "******************" << endl;
    cout << "Section IV" << endl;
    cout << "******************" << endl;

    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "The sum of all three is " << sum( num1, num2, num3 ) << endl;

// SECTION V: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = forgot the (). changed to generateRandomNumber().
// TESTS:

    cout << endl;
    cout << "******************" << endl;
    cout << "Section V" << endl;
    cout << "******************" << endl;

    cout << "Another random number is " << generateRandomNumber() << endl;

// SECTION VI: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = function had no return value. now returns the product of the two numbers passed in by value.
// TESTS:

    cout << endl;
    cout << "******************" << endl;
    cout << "Section VI" << endl;
    cout << "******************" << endl;

    double doub1, doub2;
    cout << "Enter two doubles: ";
    cin >> doub1 >> doub2;
    cout << "Their product is: " << multiply( doub1, doub2 ) << endl;

    cout << endl;
    cout << "******************" << endl;
    cout << "Section Done" << endl;
    cout << "******************" << endl;

    cout << endl << "Congrats!  You fixed them all (hopefully correctly!)" << endl << endl << "Goodbye" << endl << endl;

    return 0;
}

