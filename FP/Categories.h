//
// Created by Caroline Arndt on 12/6/18.
//

#ifndef FP_CATEGORIES_H
#define FP_CATEGORIES_H

#include <iostream>


class Categories {

private:

    std::string _name;
    float _percent;
    float _totalMoney;


public:
    Categories();
    void setName(std::string);
    void setPercent(float);
    void setTotalMoney(float);
    std::string getName();
    float getPercent();
    float getTotalMoney();



};


#endif //FP_CATEGORIES_H
