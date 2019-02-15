/* CSCI 261 Lab 1C: GEOMETRIC CALCULATIONS
 *
 * Author: Caroline Arndt
 *
 * The purpose of this lab is to perform geometric calculations of a box and a circle.
 *
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** MODIFY OR INSERT CODE BELOW HERE ********/

    int length = 17;
    int width = 17;
    int height = 2;
    int volume;

    const double PI = 3.14159;
    double area;
    double radius;


    cout << "Please enter the length of the box."  ;
    cin  >> length ;

    cout << "Please enter the width of the box." ;
    cin >> width;

    cout << "Please enter the height of the box."  ;
    cin >> height ;

    // Volume of a box is length times width times height.
    volume = length * width * height;

    cout << "The volume of your box is " << volume << endl << "\n";


    cout << "Enter the radius of the circle." ;
    cin >> radius ;

    area = PI * radius * radius ;

    cout  << "The area of a circle with radius "<< radius <<  " is " << area << endl ;
    /******** MODIFY OR INSERT CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}