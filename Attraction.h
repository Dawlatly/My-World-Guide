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

#ifndef __TT02_M1_MahmoudAbdelazimAli__Attraction__
#define __TT02_M1_MahmoudAbdelazimAli__Attraction__

#include <stdio.h>
#include<string>
using namespace std;

class Attraction{
    int id;
    string name;
    int typeID;
    int cityID;
public:
    Attraction(string name = " ", int ID = 0, int typeID = 0, int cityID = 0):name(name), id(ID), typeID(typeID),cityID(cityID){};
    string getName();
    int getID();
    void setID(int ID);
    void setName(string n);
    virtual void display() = 0;
    int getCityID();

    
};

#endif /* defined(__TT02_M1_MahmoudAbdelazimAli__Attraction__) */
