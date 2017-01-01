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
#include <string>
#include "Attraction.h"
#include <iostream>
using namespace std;

 string Attraction::getName(){
    return name;
}

int Attraction::getID(){
    return id;
}
void Attraction::setName(string n){
    name = n;
}

void Attraction::setID(int ID){
    this -> id = ID;
}
int Attraction::getCityID(){
    return cityID;
}