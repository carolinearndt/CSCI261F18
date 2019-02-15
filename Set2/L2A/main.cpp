/*
 * Caroline Arndt
 *
 * Lab 2A
 *
 * CSCI261 E
 *
 * The purpose of this lab is to use inout and output statements and variables to solve problems.
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    //define constants and variables

    const double IDEAL_R = 8.314;
    double numOfMols = 2.0;
    double tempOfGas = 298.15;
    double volumeOfGas = 2.0;
    double pressure;

    double resistance = 5.0;
    double voltage = 9.0;
    double current;

    //input and output statements to assign values to variables


    cout << "Enter the number of moles of gas." << endl;
    cin >> numOfMols;
    cout << "Enter the temperature of the gas in Kelvin." << endl;
    cin >> tempOfGas;
    cout << "Enter the volume of the gas." << endl;
    cin >> volumeOfGas;

    //equations for pressure and current

    pressure = (numOfMols * IDEAL_R * tempOfGas ) / volumeOfGas;

    cout << "The pressure is " << pressure << endl;

    cout << "Enter the voltage" << endl;
    cin >> voltage;
    cout << "Enter the resistance" << endl;
    cin >> resistance;

    current = voltage / resistance;

    cout << "The current is " << current << endl;






    return 0;
}