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

#ifndef TT02_M1_MahmoudAbdelazimAli_Nightlife_h
#define TT02_M1_MahmoudAbdelazimAli_Nightlife_h
#include <stdio.h>
#include <string>
#include "Attraction.h"
using namespace std;

class Nightlife : public Attraction {
    int ageLimit;
    int ticketPrice;
public:
    Nightlife(string name = " ", int ID = 0, int typeID = 3,int cityID = 0):Attraction(name, ID, typeID,cityID){};
    void setAgeLimit(int ageLimit);
    int getAgeLimit();
    void setTicketPrice(int ticketPrice);
    int getTicketPrice();
    void display();
};

#endif
