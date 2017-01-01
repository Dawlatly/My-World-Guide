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

#include "Nightlife.h"
#include<iostream>
using namespace std;

void Nightlife::setAgeLimit(int ageLimit){
    this-> ageLimit = ageLimit;
}
int Nightlife::getAgeLimit(){
    return ageLimit;

}
void Nightlife::setTicketPrice(int ticketPrice){
    this->ticketPrice = ticketPrice;
}
int Nightlife::getTicketPrice(){
    
    return ticketPrice;
}

void Nightlife::display(){
    cout << "This is " << getName() << ".\nAge Limit: " << getAgeLimit() << endl << "Price :" << getTicketPrice() << endl;
}