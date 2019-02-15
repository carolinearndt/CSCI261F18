/* CSCI 261 Assignment 1: Hello World and ASCII Art
 *
 * Author:Caroline Arndt
 *
 * The purpose of this assignment is to create input and output statements and learn correct syntax.
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** INSERT YOUR CODE BELOW HERE ********/

    //PART 1

    cout << "                  $   $   $   $   $   $" << endl ;
    cout << "             $                                  $" << endl;
    cout << "         $                                           $" << endl;
    cout << "      $                   _         _                  $" << endl;
    cout << "   $                    ( * )     ( * )                   $" << endl;
    cout << " $                                                            $" << endl;
    cout << " $                              &                             $   " << endl;
    cout << " $            *                                *              $" << endl;
    cout << "  $              *                          *               $" << endl;
    cout << "     $                 *    *    *    *                  $   " << endl;
    cout << "         $                                             $" << endl;
    cout << "               $                                  $" << endl;
    cout << "                    $   $   $   $    $   $" << endl;

    cout << "\n" << "\n" ;

    //PART 2

    int age = 20;
    int yearSchool = 3;
    int daysBoarded = 26;

    cout << "Hello fellow human!" << endl << "I am " << age << " years old." << endl ;
    cout << "This is my "  << yearSchool << "rd year of undergrad." << endl ;
    cout << "I went snowboarding " << daysBoarded << " times last season." << endl ;


    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}