//
// Created by Caroline Arndt on 12/6/18.
//

#ifndef FP_BUDGET_H
#define FP_BUDGET_H

#include <iostream>
#include "Categories.h"
#include "Transaction.h"
#include <vector>

using namespace std;


class Budget {

public:

    // default constructor runs the budget program when an object is created.
    Budget();

    // prints each category and their weight to the screen
    void printBudgetCategories();

    // prints a current budget report tho the screen
    void budgetReport();

    // allows user to select choices from a menu
    void budgetMenu();

    // allows the user to enter a transaction and collects attributes of the transaction such as name, amount and type
    void addTransaction();

    // returns the element in the vector at the input index
    Transaction getTransactionVector(int i);


    // returns the number of transactions a user has entered
    int transactionVectorSize();

    Categories getCategoriesVector(int i);




private:

    // prints a friendly welcome message to the screen
    void introduction();

    // initializes budget categories and assigns them a name, percentage, and initial value of 0.
    // if you wish to add categories, do it here.
    void initializeCategories();


    Categories housing;
    Categories transportation;
    Categories foodAndGroceries;
    Categories debtPayments;
    Categories personal;
    Categories savings;
    Categories income;
    Categories clothing;
    Categories medical;

    vector <Categories> listOfCategories;
    vector <Transaction> listOfTransactions;



};


#endif //FP_BUDGET_H
