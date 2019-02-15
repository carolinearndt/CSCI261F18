//
// Created by Caroline Arndt on 11/7/18.
//

#ifndef A4_FUNCTIONS_H
#define A4_FUNCTIONS_H

//Contains logic to display menu, prompt for selection, validate and call corresponding a
void startATM();

//Prints menu to user
void printMenu();

//Prompts user to input a value corresponding to menu selections
int getUserSelection();

//Prints balance to the screen with dollar sign and two decimals
void printBalance(double balance);

//prompts user to input positive amount to deposit. Modifies balance and prints new balance.
double deposit(double &currentBalance);

//prompts user a positive value to withdraw. modifies balance and then displays new balance
double withdraw(double &currentBalance);



#endif //A4_FUNCTIONS_H
