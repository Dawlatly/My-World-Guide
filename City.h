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


#ifndef __TT02_M1_MahmoudAbdelazimAli__City__
#define __TT02_M1_MahmoudAbdelazimAli__City__

#include <stdio.h>
#include <string>
#include "Attraction.h"
#include "Sport.h"
#include "Culture.h"
#include "Nightlife.h"
#include <vector>
#include "LinkedList.h"
using namespace std;

class City {
    int id;
    string name;
    LinkedList<Culture>* C;
    LinkedList<Sport>* S;
    LinkedList<Nightlife>* N;
public:
    City(int id, string name): id(id), name(name){};
    string getName();
    int getID();
    void setAttractions(LinkedList<Culture>& Cl,LinkedList<Sport>& Sp,LinkedList<Nightlife>& Nl);
    void setName(string name);
    
    
};
#endif /* defined(__TT02_M1_MahmoudAbdelazimAli__City__) */
