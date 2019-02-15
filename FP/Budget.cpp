//
// Created by Caroline Arndt on 12/6/18.
//

#include "Budget.h"
#include <iostream>
#include <iomanip>
#include <fstream>

using  namespace std;

 void Budget::initializeCategories(){

    housing.setName("Housing");         // sets name, percent, and total amount to default values for each category
    housing.setPercent(0.35);
    housing.setTotalMoney(0);
    listOfCategories.push_back(housing);

    transportation.setName("Transportation");
    transportation.setPercent(0.15);
    transportation.setTotalMoney(0);
     listOfCategories.push_back(transportation);

    foodAndGroceries.setName("Food and Groceries");
    foodAndGroceries.setPercent(0.15);
    foodAndGroceries.setTotalMoney(0);
     listOfCategories.push_back(foodAndGroceries);

    debtPayments.setName("Debt Payments");
    debtPayments.setPercent(0.08);
    debtPayments.setTotalMoney(0);
     listOfCategories.push_back(debtPayments);

    personal.setName("Personal Spending");
    personal.setPercent(0.07);
    personal.setTotalMoney(0);
     listOfCategories.push_back(personal);

    savings.setName("Savings");
    savings.setPercent(0.10);
    savings.setTotalMoney(0);
     listOfCategories.push_back(savings);

    income.setName("Income");
    income.setTotalMoney(0);

    clothing.setName("Clothing");
    clothing.setPercent(0.05);
    clothing.setTotalMoney(0);
     listOfCategories.push_back(clothing);


    medical.setName("Medical");
    medical.setPercent(0.05);
    medical.setTotalMoney(0);
     listOfCategories.push_back(medical);





}

Budget::Budget() {
    introduction();                 // prints out friendly message
    initializeCategories();         // initializes budget categories
    printBudgetCategories();        // prints categories to a screen
    budgetMenu();                   // menu that prompts user to enter transactions or view a budget report

}

void Budget::introduction() {
    cout << "Hello! Welcome to the ultimate budgeting tool. Trust me, you need this. " << endl;
    cout << "Here is a breakdown of your categories and their percentages: " << endl;
}
// prints each category and their weight to the screen
void Budget::printBudgetCategories(){

     for( int i = 0; i < listOfCategories.size(); i++){
        cout << "#" << i + 1 << " " << setw(20) << left << listOfCategories.at(i).getName();
        cout << "Percent of Budget : %"<< setw(5) << right << listOfCategories.at(i).getPercent() * 100;

        cout <<endl;

     }
 }
// allows user to select choices from a menu
// encapsulates functionality for each choice
 void Budget::budgetMenu() {

     int menuChoice = 1;

     while (menuChoice >= 1 && menuChoice <= 2){
     cout << endl << endl << "Here are your options: " << endl;
     cout << "1) Add a transaction" << endl;
     cout << "2) Budget report" << endl;
     cout << "Enter any other number to quit.";
     cin >> menuChoice;
     cout << endl;

     switch (menuChoice){
         case 1:{
             addTransaction();
             break;
         }
         case 2: {
             budgetReport();
             break;
         }
         default:{
             cout << "Thanks for stopping by! "<< endl;
         }
     }


     }



 }
// allows user to input a transaction and give it a name, value, and type.
 void Budget::addTransaction(){

     Transaction myTransaction;
     int myChoice;
     int transactionType = 0;


     cout << "Spending or Adding?" << endl;
     cout << "1) Spending Money" << endl;
     cout << "2) Adding income " << endl;
     cin >> myChoice;


     if (myChoice == 1){

         myTransaction.isIncome = false;

         cout << "What is the name of this transaction?" << endl;
         cout << "Name: ";
         cin >> myTransaction.name;


         cout << "Enter the amount spent: ";
         cin >> myTransaction.amount;

         cout << "What type of Transaction? " << endl;

         for (int j = 0; j < listOfCategories.size(); j++)
             cout << j+1 << ") " << listOfCategories.at(j).getName() << endl;
         cout << "( Enter a number 1-" << listOfCategories.size() << " )" << endl;
         cin >> transactionType;

         switch (transactionType){
             case 1:{
                 myTransaction.type = 1;
                 housing.setTotalMoney(housing.getTotalMoney() + myTransaction.amount) ;
                 listOfTransactions.push_back(myTransaction);
                 cout << "Your transaction has been added. " << endl << endl;
                 break;
             }
             case 2:{
                 myTransaction.type = 2;
                 transportation.setTotalMoney(transportation.getTotalMoney() + myTransaction.amount) ;
                 listOfTransactions.push_back(myTransaction);
                 cout << "Your transaction has been added. " << endl << endl;
                 break;
             }
             case 3:{
                 myTransaction.type = 3;
                 foodAndGroceries.setTotalMoney(foodAndGroceries.getTotalMoney() + myTransaction.amount) ;
                 listOfTransactions.push_back(myTransaction);
                 cout << "Your transaction has been added. " << endl << endl;
                 break;
             }
             case 4:{
                 myTransaction.type = 4;
                 debtPayments.setTotalMoney(debtPayments.getTotalMoney() + myTransaction.amount) ;
                 listOfTransactions.push_back(myTransaction);
                 cout << "Your transaction has been added. " << endl << endl;
                 break;
             }
             case 5:{
                 myTransaction.type = 5;
                 personal.setTotalMoney(personal.getTotalMoney() + myTransaction.amount) ;
                 listOfTransactions.push_back(myTransaction);
                 cout << "Your transaction has been added. " << endl << endl;
                 break;
             }
             case 6:{
                 myTransaction.type = 6;
                 savings.setTotalMoney(savings.getTotalMoney() + myTransaction.amount) ;
                 listOfTransactions.push_back(myTransaction);
                 cout << "Your transaction has been added. " << endl << endl;
                 break;
             }
             case 7:{
                 myTransaction.type = 7;
                 clothing.setTotalMoney(clothing.getTotalMoney() + myTransaction.amount) ;
                 listOfTransactions.push_back(myTransaction);
                 cout << "Your transaction has been added. " << endl << endl;
                 break;
             }
             case 8: {
                 myTransaction.type = 8;
                 medical.setTotalMoney(medical.getTotalMoney() + myTransaction.amount) ;
                 listOfTransactions.push_back(myTransaction);
                 cout << "Your transaction has been added. " << endl << endl;
                 break;
             }
             default:{
                 cout << "Not a valid choice. ";

                 break;
             }

         }



     }
     else if (myChoice == 2){

         myTransaction.isIncome = true;

         cout << "What is the name of this transaction?" << endl;
         cout << "Name: ";
         cin >> myTransaction.name;

         cout << "Enter the amount of income: ";
         cin >> myTransaction.amount;

         listOfTransactions.push_back(myTransaction);
         income.setTotalMoney(income.getTotalMoney() + myTransaction.amount);

         cout << "Your transaction has been added. " << endl << endl;

     }

     else if (myChoice!= 1 && myChoice!= 2)
         cout << "Not an Option. Try again later." << endl;

 }

 void Budget::budgetReport() {
     printBudgetCategories();

     cout << endl;

     Categories categoryArray [8] = {housing, transportation, foodAndGroceries, debtPayments, personal,
                                     savings, clothing, medical};
     float totalSpent = 0, totalRemaining = 0;


     cout << "Total Income: $" << income.getTotalMoney() << endl << endl;

     for (int i = 0; i < 8; i++){
         float budget = income.getTotalMoney() * categoryArray[i].getPercent();
         cout << setw(20) << left <<categoryArray[i].getName() << " budget: $" << setw(8) << left << budget;
         cout << "spent: $" << setw(8) << left << categoryArray[i].getTotalMoney();
         cout << "remaining: $" << setw(8) << left << budget - categoryArray[i].getTotalMoney();
         cout << endl;

         totalSpent += categoryArray[i].getTotalMoney();
         totalRemaining += (budget - categoryArray[i].getTotalMoney());
     }

     cout << "Total Spent: $" << totalSpent << endl;
     cout << "Total Remaining: $" << totalRemaining << endl;

 }

 Transaction Budget::getTransactionVector(int i) {
     return listOfTransactions.at(i);
 }
int Budget::transactionVectorSize() {
     return listOfTransactions.size();
 }

Categories Budget::getCategoriesVector(int i) {
     return listOfCategories.at(i);
 }
