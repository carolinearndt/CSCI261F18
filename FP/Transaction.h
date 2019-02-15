//
// Created by Caroline Arndt on 12/6/18.
//

#ifndef FP_TRANSACTION_H
#define FP_TRANSACTION_H

#include <iostream>
#include "Categories.h"
struct Transaction{
    std::string name;
    float amount;
    bool isIncome;
    int type;

};
#endif //FP_TRANSACTION_H
