/*************************************
 Program: My_World_Guide.cpp
 Course:  OOPDS
 Year:    2015/16 Trimester 2
 Name:    Mahmoud Abdelazim Ali Eldewaletly
 ID:      1132702480
 Lecture: TC01
 Lab:     TT02
 Email:   7oda95@gmail.com
 Phone:   013-2184233
 *************************************/

#include "Sport.h"
#include <iostream>
using namespace std;

void Sport::setAgeLimit(int ageLimit){
    this->ageLimit = ageLimit;
}

int Sport::getAgeLimit(){
    return ageLimit;
}

void Sport::setPrice(int price){
    this->price = price;
}
int Sport::getPrice(){
    return price;
}

void Sport::display(){
    cout << "This is " << getName() << ".\nAge Limit: " << getAgeLimit() << endl << "Price :" << getPrice() << endl;
}
