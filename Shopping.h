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

#ifndef __TT02_M1_MahmoudAbdelazimAli__Shopping__
#define __TT02_M1_MahmoudAbdelazimAli__Shopping__

#include <stdio.h>
#include <string>
#include "Attraction.h"
using namespace std;

class Shopping : public Attraction{
public:
    Shopping(string name = " ", int ID = 0, int typeID = 3):Attraction(name, ID, typeID){};
    ~Shopping();
};

#endif /* defined(__TT02_M1_MahmoudAbdelazimAli__Shopping__) */
