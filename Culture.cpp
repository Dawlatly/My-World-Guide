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

#include "Culture.h"
#include <iostream>
using namespace std;


void Culture::setEntranceFee(int entranceFee){
    this->entranceFee = entranceFee;
}
int Culture::getEntranceFee(){
    return entranceFee;
}

void Culture::display(){
    cout << "This is " << getName() << ".\nEntrance Fee: " << getEntranceFee() << "(USD)";
}

