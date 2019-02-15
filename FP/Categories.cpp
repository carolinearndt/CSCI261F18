//
// Created by Caroline Arndt on 12/6/18.
//

#include "Categories.h"

Categories::Categories() {

}
void Categories::setName(std::string name){
    _name = name;
}
void Categories::setPercent(float percent){
    _percent = percent;
}
void Categories::setTotalMoney(float totalMoney){
    _totalMoney = totalMoney;
}
std::string Categories::getName(){
    return _name;
}
float Categories::getPercent(){
    return _percent;
}
float Categories::getTotalMoney(){
    return _totalMoney;
}
