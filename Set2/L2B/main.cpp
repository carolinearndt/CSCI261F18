/*
 * Caroline Arndt
 *
 * Lab 2B
 *
 * CSCI261E
 *
 * The purpose of this lab is to use output formatting to modify lab 2A
 */
#include <iostream>
#include <ios>
#include <cstdlib>
#include <iomanip>

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

    //input statements for each variable


    cout << "Enter the number of moles of gas. ";
    cin >> numOfMols;
    cout << "Enter the temperature of the gas in Kelvin. " ;
    cin >> tempOfGas;
    cout << "Enter the volume of the gas. " ;
    cin >> volumeOfGas;
    cout << "\n" << endl;


    cout << "Enter the voltage. ";
    cin >> voltage;
    cout << "Enter the resistance. ";
    cin >> resistance;
    cout << "\n";

    // pressure equation and current equation using fixed, precision, and alignment

    pressure = (numOfMols * IDEAL_R * tempOfGas) / volumeOfGas;

    cout << "Equation #01 . . . Ideal Gas Law (Chemistry): ";
    cout << fixed <<setprecision(3) << right << setw(10) << pressure << endl;

    current = voltage / resistance;

    cout << "Equation #02 . . . . . Ohm's Law (Physics)  : ";
    cout << fixed << setprecision(3) << right << setw(10) << current << endl;


    return 0;
}