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

#ifndef __TT02_M1_MahmoudAbdelazimAli__Culture__
#define __TT02_M1_MahmoudAbdelazimAli__Culture__

#include <stdio.h>
#include <string>
#include "Attraction.h"
using namespace std;

class Culture: public Attraction{
    int entranceFee;
public:
    Culture(string name = " ", int ID = 0, int typeID = 2,int cityID = 0):Attraction(name, ID, typeID,cityID){};
    void setEntranceFee(int entranceFee);
    int getEntranceFee();
    void display();
};

#endif /* defined(__TT02_M1_MahmoudAbdelazimAli__Culture__) */
