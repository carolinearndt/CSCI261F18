//
// Created by Caroline Arndt on 11/7/18.
//

#include "Functions.h"
#include <iostream>
#include <iomanip>

using namespace std;

void startATM()
{
   /*
    *Contains the logic to display the menu to the user, prompts user for selection,
    * validate user's selection, calls the corresponding action, and confirms the
    * result of that action (either success or failure).
    */

   //initial welcome

   cout << "Hello! Welcome to the ATM!" << endl << endl;

   int menuSelect;
   double currentBalance = 0;


   do {

       //Prints out options, gets users input for menu selection
       printMenu();
       menuSelect = getUserSelection();

       //switch statement to get menu choice
       switch(menuSelect){
           case 1 :
               printBalance(currentBalance);

               break;

           case 2 :
               //deposit
               deposit(currentBalance);

               break;
           case 3 :
               //withdraw
               withdraw(currentBalance);

               break;
           case 4 :
               // goodbye statement

               cout << "Thank you for using the ATM!";

               break;

           default :
               cout << "Sorry, invalid option. please input a choice from the menu selection." << endl;
               break;
       }


   } while(menuSelect != 4);



}

void printMenu()
{
    /*
     * Prints the menu to the user. The menu should contain four options. (1) Print
     * balance. (2) Deposit. (3) Withdraw. (4) Quit.
     */

    cout << "Please make a selection: " << endl << endl << "(1) Print Current Balance" << endl;

    cout << "(2) Deposit Money" << endl << "(3) Withdraw Money" << endl;

    cout << "(4) Quit" << endl << endl;
}

int getUserSelection()
{
    /*
     * prompts user to input a value corresponding to the menu selection
     */
    int choice;
    cout << "Choice: ";
    cin >> choice;

    cout << endl;

    return choice;


}

void printBalance(double currentBalance)
{
    /*
     * Pretty prints the current balance to the screen with a dollar sign and two
     * decimal places along with a friendly message.
     */

    cout << "You currently have: $" << fixed << setprecision(2) << currentBalance << endl << endl;


}

double deposit(double &currentBalance)
{
    /*
     * Prompts the user to enter a positive amount to deposit. Validates the amount
     * positive. if there is enough balance, then modifies the users balance
     * and returns the amount withdrawn. Otherwise signals an error
     */

    double depositMoney;

    cout << "How much money would you like to deposit?" << endl;

    cin >> depositMoney;

    if (depositMoney > 0 ) {

        currentBalance += depositMoney;

        cout << "Thank you for depositing $" << fixed << setprecision(2) << depositMoney << endl << endl;

        return depositMoney;
    }

    else {
        cout << "Invalid deposit amount." << endl;

        return 0;
    }
}




double withdraw(double &currentBalance)
{
    /* Prompts the user to enter a positive amount to withdraw. Validates there is enough
     * money in the account to withdraw.if there is eniugh, modifies the account balance
     * and returns the amount withdrawn. Otherwise returns the value signifying there was an error
     */

    double withdrawAmount;

    cout << "Enter the amount you wish to withdraw: " << endl;

    cin >> withdrawAmount;

    if (withdrawAmount > currentBalance)
    {
       cout << "Sorry, you have insufficient funds to complete this transaction." << endl << endl ;
       return 0;
    }

    else if( withdrawAmount <= 0)
    {
        cout << "Sorry, that is not a valid option. Please enter a positive number." << endl << endl;

        return 0;

    }

    else
    {
        currentBalance -= withdrawAmount;

        cout << "Here is your $" << fixed << setprecision(2) << withdrawAmount << "!" << endl << endl;

        return withdrawAmount;

    }

}
