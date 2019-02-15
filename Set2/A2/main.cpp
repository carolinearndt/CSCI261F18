/*
 * Caroline Arndt
 *
 * CSCI261E
 *
 * Assignment 2
 *
 * The purpose of this assignment is to use operators, for loops, and inout statements
 * to create a program that determines whether or not 3 input values make a triangle,
 * as well as what kind of triangle they make.
 */


#include <iostream>

#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

const double TOLERANCE = 0.0001;

int main() {

    double side1;
    double side2;
    double side3;
    double a;
    double b;
    double c;
    double perimeter;
    double area;
    double s;
    int maxValue;


    //reads input to user

    cout << "Enter a value for side 1." << endl;
    cin >> side1;
    cout << "Enter a value for side 2." << endl;
    cin >> side2;

    //seeding rand function for random side 3
    srand(time(0));
    maxValue = (side1 + side2);
    side3 = rand() % maxValue;


    // These nested statements assign the inputs to a,b,c in ascending order.

    if (side1 > side2 && side1 > side3)
    {
        c = side1;

        if ( side2 >= side3)
        {
            b = side2;
            a = side3;
        }
        else
        {
            b = side3;
            a = side2;
        }
    }

    else if (side2 > side1 && side2 > side3)
    {
        c = side2;

        if ( side1 >= side3)
        {
            b = side1;
            a = side3;
        }
        else
        {
            b = side3;
            a = side1;
        }

    }

    else
    {
        if (side3 > side1 && side3 > side2)
        {
            c = side3;

            if ( side2 >= side1)
            {
                b = side2;
                a = side1;
            }
            else
            {
                b = side1;
                a = side2;
            }
        }

        //if all the values are equal, then a,b,c will all be equal.

        else
        {
            a = side1;
            b = side2;
            c = side3;

        }

    }







    //triangle tests

    if (a + b > c)

    // it's a triangle! What type of triangle.
    {
        if (pow(a,2) + pow(b,2) - pow(c,2) <= TOLERANCE && pow(a,2) + pow(b,2) - pow(c,2) >=0 )
        {
            cout << "This is a right triangle." << endl;


        }

        else if (pow(a,2) + pow(b,2) > pow(c,2))
        {
            cout <<"This is an acute triangle." << endl;
        }

        else
        {
            cout << "This is an obtuse triangle." << endl;
        }

        //Stats about the triangle

        cout << a << endl << b << endl << c << endl << "\n";


        perimeter = a + b + c;
        cout << "The perimeter of the triangle is " << perimeter << endl;

        s = perimeter /2;
        area = sqrt( s * (s - a) * (s - b) * (s - c));
        cout << "The area of the triangle is " << area << endl;


    }
    else
    {
        cout << a << endl << b << endl << c << endl;
        cout << "This is not a triangle." << endl;
    }








    return 0;
}