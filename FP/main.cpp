#include <iostream>
#include <iomanip>
#include <fstream>
#include "Budget.h"
using namespace std;

int main() {

    Budget carlysBudget;

    ofstream myBudget ("budgetreport.txt");

    if (myBudget.fail()){
        cerr << "Error opening file.";
    }

    for(int i = 0; i < carlysBudget.transactionVectorSize(); i++){

        myBudget << "Name of transaction: ";
        myBudget << setw(15) << left << carlysBudget.getTransactionVector(i).name;

        if (carlysBudget.getTransactionVector(i).isIncome)
            myBudget << "Type: " << setw(20) << left << "Income";
        else
            myBudget << "Type: " << setw(20) << left<<carlysBudget.getCategoriesVector(carlysBudget.getTransactionVector(i).type - 1).getName();

        myBudget << "Amount:  $" << carlysBudget.getTransactionVector(i).amount << endl;
    }


    myBudget.close();


    return 0;
}