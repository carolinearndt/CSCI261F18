/* CSCI 261: Fix Loop Errors
 *
 * Author: Caroline Arndt
 *
 *    This program illustrates a variety of common loop errors.
 *    Fix the errors in each section.

Copyright 2017 Dr. Jeffrey Paone

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

#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to Loop World" << endl;

// SECTION I: update comment below on how you fixed this section's code, and tests run
// that show loop is working properly
// FIX = The looping parameters need to change to i <= 5, instead of i < 5.
// TESTS:

    cout << endl;
    cout << "******************" << endl;
    cout << "Section I" << endl;
    cout << "******************" << endl;

    short sum;  // Accumulates the total
    short i;    // Used as loop control variable
    for (i = 1; i <= 5; ++i) {
        sum += i;
    }
    cout << "The sum of the numbers from 1 to 5 (inclusive) is: " << sum << endl;

// SECTION II: update comment below on how you fixed this section's code, and tests run
// that show loop is working properly
// FIX = Deleting the 'total = 0' statement, the loop causes variable 'total' to return to 0 every iteration
// TESTS: input items 3, price 1 = 1; price 2 = 2; price 3 = 3; total price will be 6.

    cout << endl;
    cout << "******************" << endl;
    cout << "Section II" << endl;
    cout << "******************" << endl;

    double total;     // Accumulates total
    double price;    // Gets next price from user
    short num_items;     // Number of items
    short counter = 1;  // Loop control counter

    cout << "How many items do you have? ";
    cin >> num_items;
    cout << endl;

    while (counter <= num_items) {
        cout << "Enter the price of item " << counter << ": ";
        cin >> price;
        cout << endl;
        total += price;
        counter++;
    }
    cout << "The total price is: " << total << endl;

// SECTION III: update comment below on how you fixed this section's code, and tests run
// that show loop is working properly
// FIX: needed variable types, counter should be less than or equal to 4 and not sum, counter needed a modifying expression
// TESTS: output of numbers 1-4 added should be 10.

    cout << endl;
    cout << "******************" << endl;
    cout << "Section III" << endl;
    cout << "******************" << endl;

    cout << "I will now calculate ";
    cout << "the sum of numbers from 1 to 4 (inclusive)" << endl;

    sum=0;
    counter = 1;

    do {
        sum += counter;
        counter++;
        cout << "Sum so far: " << sum << endl;
    } while (counter <= 4);

    cout << endl << "Section III Recap" << endl;

    cout << "I calculated the sum of numbers from 1 to 4 (inclusive) as " << sum << endl;


// SECTION IV: update comment below on how you fixed this section's code, and tests run
// that show loop is working properly
// FIX = i is always greater than 0!infinite loop. should be i=1, i <=4
// TESTS: 1^2 + 2^2 + 3^2 + 4^2 = 30

    cout << endl;
    cout << "******************" << endl;
    cout << "Section IV" << endl;
    cout << "******************" << endl;

    cout << "I will now calculate ";
    cout << "the sum of squares from 1 to 4 (inclusive)" << endl;

    sum = 0;
    for (i =  1; i <= 4; i++) {
        sum += i*i;
    }

    cout << "The sum of squares from 1 to 4 is: " << sum << endl;

// SECTION V: update comment below on how you fixed this section's code, and tests run
// that show loop is working properly
// FIX = counter iterator needs to be in the loop.
// TESTS: 1^3 + 2^3 + 3^3 + 4^3 = 2025

    cout << endl;
    cout << "******************" << endl;
    cout << "Section V" << endl;
    cout << "******************" << endl;

    cout << "I will now calculate ";
    cout << "the sum of cubes from 1 to 4 (inclusive)" << endl;

    sum = 0;
    counter = 1;

    while (counter < 10) {
        sum += (counter * counter * counter);


        counter++;
    }
    cout << "The sum of cubes from 1 to 4 is: " << sum << endl;

    cout << endl;
    cout << "******************" << endl;
    cout << "Section Done" << endl;
    cout << "******************" << endl;

    cout << endl << "Congrats!  You fixed them all (hopefully correctly!)" << endl << endl << "Goodbye" << endl << endl;

    return 0;
}
