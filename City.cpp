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
#include "City.h"
#include "Sport.h"
#include "Culture.h"
#include "Shopping.h"
#include <iostream>
#include "Attraction.h"
using namespace std;

string City::getName(){
    return name;
}

int City::getID(){
    return id;
}

void City::setName(string name){
    this->name = name;
}

void City::setAttractions(LinkedList<Culture>& Cl,LinkedList<Sport>& Sp,LinkedList<Nightlife>& Nl){
    C = new LinkedList<Culture>();
    S = new LinkedList<Sport>();
    N = new LinkedList<Nightlife>();
    int count = 1;
    int counter = 1;
    int reps = 1;
    for (int i = 1; i < Cl.getLength()+1; i++) {
        if (getID() == Cl.getEntry(i).getCityID()) {
            C->insert(count, Cl.getEntry(i));
            count++;
        }
    }
    
    for (int i = 1; i < Sp.getLength()+1; i++) {
        if (getID() == Sp.getEntry(i).getCityID()) {
            S->insert(counter, Sp.getEntry(i));
            counter++;
        }
    }
    
    for (int i = 1; i < Nl.getLength()+1; i++) {
        if (getID() == Nl.getEntry(i).getCityID()) {
            N->insert(reps, Nl.getEntry(i));
            reps++;
        }
    }
}