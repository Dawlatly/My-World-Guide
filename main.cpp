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
#include "Nightlife.h"
#include <iostream>
#include "Attraction.h"
#include "LinkedList.h"
#include <fstream>
#include <string>
using namespace std;

void userMenu(LinkedList<City>& Cy,LinkedList<Culture>& Cl,LinkedList<Sport>& Sp,LinkedList<Nightlife>& Nl);
void adminMenu(LinkedList<City>& Cy,LinkedList<Culture>& Cl,LinkedList<Sport>& Sp,LinkedList<Nightlife>& Nl);
void save(LinkedList<City>& Cy,LinkedList<Culture>& Cl,LinkedList<Sport>& Sp,LinkedList<Nightlife>& Nl);



int main() {

    
    bool end = false;
    
    LinkedList<City> Cities;
    LinkedList<Culture> Cultures;
    LinkedList<Sport> Sports;
    LinkedList<Nightlife> Nightlives;
    
    //CITY DECLARATIONS
    City Rome(111,"Rome");
    City Dubai(222,"Dubai");
    City Paris(333, "Paris");
    
    //DUBAI ATTRACTIONS
    Culture DM("Dubai Museum",1,2,222);
    Culture DV("Diving Village",2,2,222);
    Culture DS("Sheikh Saeed Al-Maktoum's House",3,2,222);
    DM.setEntranceFee(1);
    DV.setEntranceFee(0);
    DS.setEntranceFee(1);
    
    Nightlife D360("360 Degrees",4,3,222);
    Nightlife DP("People by Crystal",5,3,222);
    Nightlife DT("Trilogy",6,3,222);
    D360.setTicketPrice(20);
    DP.setTicketPrice(0);
    DT.setTicketPrice(50);
    D360.setAgeLimit(21);
    DP.setAgeLimit(25);
    DT.setAgeLimit(25);
    
    Sport DDF("Dubai Duty Free Tennis Championship",7,1,222);
    Sport DSP("Ski Dubai Super Pass",8,1,222);
    Sport DQ("Extreme Quad Bike Riding",9,1,222);
    DDF.setPrice(20);
    DSP.setPrice(70);
    DQ.setPrice(120);
    DDF.setAgeLimit(0);
    DSP.setAgeLimit(12);
    DQ.setAgeLimit(13);
    
    //ROME ATTRACTIONS
    Culture RC("Colosseum",1,2,111);
    Culture RP("Pantheon",2,2,111);
    Culture RCS("Centro Storico",3,2,111);
    RC.setEntranceFee(13);
    RP.setEntranceFee(0);
    RCS.setEntranceFee(0);
    
    Nightlife RS("Shari vari Playhouse",4,3,111);
    Nightlife RV("Viscious Club",5,3,111);
    Nightlife RG("Goa Club",6,3,111);
    RS.setTicketPrice(20);
    RV.setTicketPrice(0);
    RG.setTicketPrice(50);
    RS.setAgeLimit(21);
    RV.setAgeLimit(21);
    RG.setAgeLimit(21);
    
    Sport RR("Rome segway tour",7,1,111);
    Sport RBT("Rome Bike tour",8,1,111);
    Sport RF("Football",9,1,111);
    RR.setPrice(20);
    RBT.setPrice(70);
    RF.setPrice(120);
    RR.setAgeLimit(0);
    RBT.setAgeLimit(12);
    RF.setAgeLimit(13);
    
    //PARIS ATTRACTIONS
    Culture PE("Eiffel Tower",1,2,333);
    Culture PN("Notre Dame Cathedral",2,2,333);
    Culture PM("Musee du Louvre",3,2,333);
    PE.setEntranceFee(19);
    PN.setEntranceFee(10);
    PM.setEntranceFee(16);
    
    Nightlife PL("Le Crazy Horse",4,3,333);
    Nightlife PC("Chez Raspoutine",5,3,333);
    Nightlife PB("Le Baron",6,3,333);
    PL.setTicketPrice(100);
    PC.setTicketPrice(0);
    PB.setTicketPrice(65);
    PL.setAgeLimit(21);
    PC.setAgeLimit(21);
    PB.setAgeLimit(21);
    
    Sport PF("Football",7,1,333);
    Sport PH("Hiking",8,1,333);
    Sport PR("Rugby",9,1,333);
    PF.setPrice(20);
    PH.setAgeLimit(0);
    PR.setPrice(20);
    PF.setAgeLimit(0);
    PH.setPrice(20);
    PR.setAgeLimit(0);
    
    //TO CHECK IF THE .TXT FILES ARE EMPTY OR NOT
    int lenCity,lenCulture,lenSport,lenNightlife;
    ifstream citiesData,cultureData,sportData,nightData;
    citiesData.open("cities.txt");
    cultureData.open("culture.txt");
    sportData.open("sport.txt");
    nightData.open("nightlife.txt");
    citiesData.seekg(0, citiesData.end);
    cultureData.seekg(0, cultureData.end);
    sportData.seekg(0, sportData.end);
    nightData.seekg(0, nightData.end);
    lenCity = citiesData.tellg();
    lenCulture = cultureData.tellg();
    lenSport = sportData.tellg();
    lenNightlife = nightData.tellg();
    citiesData.close();
    cultureData.close();
    sportData.close();
    nightData.close();
    
    if (lenCulture == 0 && lenSport == 0 && lenNightlife == 0 && lenCity == 0 ) {
        
        //INSERTION OF CITY DATA
        Cities.insert(1, Rome);
        Cities.insert(2, Dubai);
        Cities.insert(3, Paris);
        
        //INSERTION OF CULTURE DATA
        Cultures.insert(1, DM);
        Cultures.insert(2, DV);
        Cultures.insert(3, DS);
        Cultures.insert(4, RC);
        Cultures.insert(5, RP);
        Cultures.insert(6, RCS);
        Cultures.insert(7, PE);
        Cultures.insert(8, PN);
        Cultures.insert(9, PM);
        
        //INSERTION OF NIGHTLIFE DATA
        Nightlives.insert(1, D360);
        Nightlives.insert(2, DP);
        Nightlives.insert(3, DT);
        Nightlives.insert(4, RS);
        Nightlives.insert(5, RV);
        Nightlives.insert(6, RG);
        Nightlives.insert(7, PL);
        Nightlives.insert(8, PC);
        Nightlives.insert(9, PB);
        
        //INSERTION OF SPORT DATA
        Sports.insert(1, DDF);
        Sports.insert(2, DSP);
        Sports.insert(3, DQ);
        Sports.insert(4, RR);
        Sports.insert(5, RBT);
        Sports.insert(6, RF);
        Sports.insert(7, PF);
        Sports.insert(8, PH);
        Sports.insert(9, PR);
        
        Rome.setAttractions(Cultures, Sports, Nightlives);
        Paris.setAttractions(Cultures, Sports, Nightlives);
        Dubai.setAttractions(Cultures, Sports, Nightlives);
        save(Cities,Cultures,Sports,Nightlives);
    }else{
        //LOADING DATA FROM FILE
        ifstream sportData,citiesData,cultureData,nightData;
        string nameSport, nameCity, nameCulture, nameNightlife;
        string enterSport, enterCity,enterCulture, enterNightlife;
        int cID, ID ,ageLimit , price;
        sportData.open("sport.txt");
        for (int i = 0; !end; i++) {
            if (i == 0) {
                getline(sportData,nameSport);
                sportData >> ID;
                sportData >> cID;
                sportData >> ageLimit;
                sportData >> price;
                //cout << name << endl << ID << endl << cID << endl;
                Sport s(nameSport,ID,1,cID);
                s.setAgeLimit(ageLimit);
                s.setPrice(price);
                Sports.insert(i+1, s);
            } else {
                getline(sportData,enterSport);
                getline(sportData,nameSport);
                if (nameSport == "") {
                    end = false;
                    break;
                }
                sportData >> ID;
                sportData >> cID;
                sportData >> ageLimit;
                sportData >> price;
                //cout << name << endl << ID << endl << cID << endl;
                Sport s(nameSport,ID,1,cID);
                s.setAgeLimit(ageLimit);
                s.setPrice(price);
                Sports.insert(i+1, s);
            }
            
        }
        sportData.close();
        
        nightData.open("nightlife.txt");
        for (int i = 0; !end; i++) {
            if (i == 0) {
                getline(nightData,nameNightlife);
                nightData >> ID;
                nightData >> cID;
                nightData >> ageLimit;
                nightData >> price;
                //cout << name << endl << ID << endl << cID << endl;
                Nightlife s(nameNightlife,ID,1,cID);
                s.setAgeLimit(ageLimit);
                s.setTicketPrice(price);
                Nightlives.insert(i+1, s);
            } else {
                getline(nightData,enterNightlife);
                getline(nightData,nameNightlife);
                if (nameNightlife == "") {
                    end = false;
                    break;
                }
                nightData >> ID;
                nightData >> cID;
                nightData >> ageLimit;
                nightData >> price;
                //cout << name << endl << ID << endl << cID << endl;
                Nightlife s(nameNightlife,ID,1,cID);
                s.setAgeLimit(ageLimit);
                s.setTicketPrice(price);
                Nightlives.insert(i+1, s);
                
            }
            
        }
        nightData.close();
        
        cultureData.open("culture.txt");
        for (int i = 0; !end; i++) {
            if (i == 0) {
                getline(cultureData,nameCulture);
                cultureData >> ID;
                cultureData >> cID;
                cultureData >> price;
                //cout << name << endl << ID << endl << cID << endl;
                Culture s(nameCulture,ID,1,cID);
                s.setEntranceFee(price);
                Cultures.insert(i+1, s);
            } else {
                getline(cultureData,enterCulture);
                getline(cultureData,nameCulture);
                if (nameCulture == "") {
                    end = false;
                    break;
                }
                cultureData >> ID;
                cultureData >> cID;
                cultureData >> price;
                //cout << name << endl << ID << endl << cID << endl;
                Culture s(nameCulture,ID,1,cID);
                s.setEntranceFee(price);
                Cultures.insert(i+1, s);
            }
            
        }
        cultureData.close();
        
        
        
        citiesData.open("cities.txt");
        for (int i = 0; !end; i++) {
            if (i == 0) {
                getline(citiesData,nameCity);
                citiesData >> ID;
                //cout << name << endl << ID << endl << cID << endl;
                City s(ID,nameCity);
                Cities.insert(i+1, s);
            } else {
                getline(citiesData,enterCity);
                getline(citiesData,nameCity);
                if (nameCity == "") {
                    end = false;
                    break;
                }
                citiesData >> ID;
                //cout << name << endl << ID << endl << cID << endl;
                City s(ID,nameCity);
                Cities.insert(i+1, s);
            }
            
        }
        citiesData.close();
        
        
    
    }
    
    //MENU
    int number;
    string password;
    cout << "Welcome to My World Guide\n\nAre you a user or a administrator?\n\n";
    cout << "1.User\n" << "2.Administrator\n=>";
    cin >> number;
    cin.ignore(10000,'\n');
    switch (number) {
        case 1:
            userMenu(Cities,Cultures,Sports,Nightlives);
            break;
        case 2:
            cout<< "Enter your password please: ";
            cin >> password;
            if (password == "admin") {
                adminMenu(Cities,Cultures,Sports,Nightlives);
            }else{
                cout<<"Wrong password" << endl;
                main();
            }
            break;
        default:
            cout << "You have entered an invalid number. Please try again\n";
            if (cin.fail()) {
                break;
            } else {
                main();
            }
            
    }
    
    return 0;
}



void userMenu(LinkedList<City>& Cy,LinkedList<Culture>& Cl,LinkedList<Sport>& Sp,LinkedList<Nightlife>& Nl){
    cout << "Welcome User " <<  endl << endl;
    cout << "Please choose a city to explore.\n";
    LinkedList<Culture> tempC;
    LinkedList<Sport> tempS;
    LinkedList<Nightlife> tempN;

     for (int i = 0; i < Cy.getLength(); i++) {
         cout << Cy.getEntry(i+1).getID() <<". " << Cy.getEntry(i+1).getName() << endl;
     }
    cout << "=>";
    int input1,input2,input3,temPos = 1,number = 1;
    cin >> input1;
    cout << "Please choose an attraction type to explore more.\n1.Culture\n2.Sport\n3.Nightlife\n=>";
    cin >> input2;
    switch (input2) {
        //CASE CULTURE
        case 1:
            for (int i = 0; i < Cl.getLength(); i++) {
                if (Cl.getEntry(i+1).getCityID() == input1) {
                    cout << number << "." << Cl.getEntry(i+1).getName() << endl;
                    tempC.insert(temPos, Cl.getEntry(i+1));
                    number++;
                    temPos++;
                }
            }
            cout << "Please pick one attraction to explore even more.\n=>";
            cin >> input3;
            tempC.getEntry(input3).display();
            break;
        //CASE SPORT
        case 2:
            for (int i = 0; i < Sp.getLength(); i++) {
                if (Sp.getEntry(i+1).getCityID() == input1) {
                    cout << number << "." <<Sp.getEntry(i+1).getName() << endl;
                    tempS.insert(temPos, Sp.getEntry(i+1));
                    number++;
                    temPos++;
                }
            }
            cout << "Please pick one attraction to explore even more.\n=>";
            cin >> input3;
            tempS.getEntry(input3).display();
            break;
        //CASE NIGHTLIFE
        case 3:
            for (int i = 0; i < Nl.getLength(); i++) {
                if (Nl.getEntry(i+1).getCityID() == input1) {
                    cout << number << "." << Nl.getEntry(i+1).getName() << endl;
                    tempN.insert(temPos, Nl.getEntry(i+1));
                    number++;
                    temPos++;
                }
            }
            cout << "Please pick one attraction to explore even more.\n=>";
            cin >> input3;
            tempN.getEntry(input3).display();
            break;
        default:
            break;
    }
    
    
}

void adminMenu(LinkedList<City>& Cy,LinkedList<Culture>& Cl,LinkedList<Sport>& Sp,LinkedList<Nightlife>& Nl){
    int input;
    string newName;
    string newType;
    cout <<"Hello admin. What changes would you like to make?\n1.Add City\n2.Add Attraction\n3.Remove City\n4.Remove Attraction\n5.Edit City\n6.Edit Attraction\n=>";
    cin >> input;
    switch (input) {
        //CASE ADD CITY
        case 1:{
            cout << "Enter the name of the city\n=>";
            cin >> newName;
            City newCity(Cy.getEntry(Cy.getLength()).getID() + 111 ,newName);
            Cy.insert(Cy.getLength()+1, newCity);
            for (int i = 0; i < Cy.getLength(); i++) {
                cout<<Cy.getEntry(i+1).getName()<<endl;
                cout<<Cy.getEntry(i+1).getID()<<endl;
            }
            char choice;
            cout << "Would you like to save your changes?(y or n)\n=>";
            cin >> choice;
            if (choice == 'y' || choice == 'Y') {
                ofstream citiesData;
                citiesData.open("cities.txt");
                for (int i = 0; i < Cy.getLength(); i++) {
                    citiesData << Cy.getEntry(i+1).getName() << "\n";
                    citiesData << Cy.getEntry(i+1).getID() << "\n";
                }
                citiesData.close();
            }
            main();
            break;
        }
        //CASE ADD ATTRACTION
        case 2:{
            string newCity;
            int newCityID = 0;
            bool checkCity = false;
            cout << "Enter the name of the attraction\n=>";
            cin >> newName;
            cout << "Enter the type of the attraction\n=>";
            cin >> newType;
            bool checkType = (newType != "Culture"&&newType != "Sport"&&newType != "Nightlife"&&newType != "culture"&&newType != "sport"&&newType != "nightlife");
            if (checkType) {
                cout << "Incorrect type. Please try again\n";
                adminMenu(Cy, Cl, Sp, Nl);
                break;
            }
            cout << "Enter the city that includes the attraction\n=>";
            cin >> newCity;
            //TO LOOP THROUGH ALL CITIES TO VERIFY THAT CITY EXISTS
            for (int i = 0; i < Cy.getLength(); i++) {
                if (Cy.getEntry(i+1).getName() == newCity) {
                    checkCity = true;
                    newCityID = Cy.getEntry(i+1).getID();
                }
            }
            
            if (checkCity) {
                //TO CHECK THROUGH CULTURE ,SPORT, NIGHTLIFE LISTS, AND WRITE TO FILE
                if (newType == "Culture") {
                    Culture newCulture(newName,0,2,newCityID);
                    Cl.insert(Cl.getLength()+1, newCulture);
                    char choice;
                    cout << "Would you like to save your changes?(y or n)\n=>";
                    cin >> choice;
                    if (choice == 'y' || choice == 'Y') {
                        ofstream cultureData;
                        cultureData.open("culture.txt");
                        for (int i = 0; i < Cl.getLength(); i++) {
                            cultureData << Cl.getEntry(i+1).getName() << "\n";
                            cultureData << Cl.getEntry(i+1).getID() << "\n";
                            cultureData << Cl.getEntry(i+1).getCityID() << "\n";
                            cultureData << Cl.getEntry(i+1).getEntranceFee() << "\n";
                        }
                        cultureData.close();
                    }
                } else if (newType == "Sport") {
                    Sport newSport(newName,0,1,newCityID);
                    Sp.insert(Sp.getLength()+1, newSport);
                    char choice;
                    cout << "Would you like to save your changes?(y or n)\n=>";
                    cin >> choice;
                    if (choice == 'y' || choice == 'Y') {
                        ofstream sportData;
                        sportData.open("sport.txt");
                        for (int i = 0; i < Sp.getLength(); i++) {
                            sportData << Sp.getEntry(i+1).getName() << "\n";
                            sportData << Sp.getEntry(i+1).getID() << "\n";
                            sportData << Sp.getEntry(i+1).getCityID() << "\n";
                            sportData << Sp.getEntry(i+1).getAgeLimit() << "\n";
                            sportData << Sp.getEntry(i+1).getPrice() << "\n";
                        }
                        sportData.close();
                    }
                }else {
                    Nightlife newNightlife(newName,0,3,newCityID);
                    Nl.insert(Nl.getLength()+1, newNightlife);
                    char choice;
                    cout << "Would you like to save your changes?(y or n)\n=>";
                    cin >> choice;
                    if (choice == 'y' || choice == 'Y') {
                        ofstream nightData;
                        nightData.open("nightlife.txt");
                        for (int i = 0; i < Nl.getLength(); i++) {
                            nightData << Nl.getEntry(i+1).getName() << "\n";
                            nightData << Nl.getEntry(i+1).getID() << "\n";
                            nightData << Nl.getEntry(i+1).getCityID() << "\n";
                            nightData << Nl.getEntry(i+1).getAgeLimit() << "\n";
                            nightData << Nl.getEntry(i+1).getTicketPrice() << "\n";
                        }
                        nightData.close();
                    }
             }
            }else{
                cout << "The city you have entered doesn't exist.\n";
                adminMenu(Cy, Cl, Sp, Nl);
            }
            main();
            break;
        }
        //CASE REMOVE CITY
        case 3:{
            string input;
            bool checkCity = false;
            cout << "Enter the name of city you want to remove\n=>";
            cin >> input;
            for (int i = 0; i < Cy.getLength(); i++) {
                if (Cy.getEntry(i+1).getName() == input) {
                    checkCity = true;
                    Cy.remove(i+1);
                    cout << "Remove Successful\n";
                    break;
                }
            }
            if (!checkCity) {
                cout << "The city you've entered doesn't exist.\n";
                adminMenu(Cy, Cl, Sp, Nl);
            }
            char choice;
            cout << "Would you like to save your changes?(y or n)\n=>";
            cin >> choice;
            if (choice == 'y' || choice == 'Y') {
                ofstream citiesData;
                citiesData.open("cities.txt");
                for (int i = 0; i < Cy.getLength(); i++) {
                    citiesData << Cy.getEntry(i+1).getName() << "\n";
                    citiesData << Cy.getEntry(i+1).getID() << "\n";
                }
                citiesData.close();
            }
            main();
            break;
        }
        //CASE REMOVE ATTRACTION
        case 4:{
            cin.ignore();
            cin.clear();
            string input;
            bool checkAttraction = false;
            cout << "Enter the name of Attraction you want to remove=> ";
            getline(cin,input);
            //SEARCH MECHANISM THROUGH ALL ATTRACTIONS
            for (int i = 0; i < Cl.getLength(); i++) {
                //cout << Cl.getEntry(i+1).getName() << endl;
                if (Cl.getEntry(i+1).getName() == input) {
                    checkAttraction = true;
                    Cl.remove(i+1);
                    cout << "Remove Successful\n";
                    char choice;
                    cout << "Would you like to save your changes?(y or n)\n=>";
                    cin >> choice;
                    if (choice == 'y' || choice == 'Y') {
                        ofstream cultureData;
                        cultureData.open("culture.txt");
                        for (int i = 0; i < Cl.getLength(); i++) {
                            cultureData << Cl.getEntry(i+1).getName() << "\n";
                            cultureData << Cl.getEntry(i+1).getID() << "\n";
                            cultureData << Cl.getEntry(i+1).getCityID() << "\n";
                            cultureData << Cl.getEntry(i+1).getEntranceFee() << "\n";
                        }
                        cultureData.close();
                    }
                    break;
                }
            }
            for (int i = 0; i < Sp.getLength(); i++) {
                //cout << Sp.getEntry(i+1).getName() << endl;
                if (Sp.getEntry(i+1).getName() == input) {
                    checkAttraction = true;
                    Sp.remove(i+1);
                    cout << "Remove Successful\n";
                    char choice;
                    cout << "Would you like to save your changes?(y or n)\n=>";
                    cin >> choice;
                    if (choice == 'y' || choice == 'Y') {
                        ofstream sportData;
                        sportData.open("sport.txt");
                        for (int i = 0; i < Sp.getLength(); i++) {
                            sportData << Sp.getEntry(i+1).getName() << "\n";
                            sportData << Sp.getEntry(i+1).getID() << "\n";
                            sportData << Sp.getEntry(i+1).getCityID() << "\n";
                            sportData << Sp.getEntry(i+1).getAgeLimit() << "\n";
                            sportData << Sp.getEntry(i+1).getPrice() << "\n";
                        }
                        sportData.close();
                    }
                    break;
                }
            }
            for (int i = 0; i < Nl.getLength(); i++) {
                //cout << Nl.getEntry(i+1).getName() << endl;
                if (Nl.getEntry(i+1).getName() == input) {
                    checkAttraction = true;
                    Nl.remove(i+1);
                    cout << "Remove Successful\n";
                    char choice;
                    cout << "Would you like to save your changes?(y or n)\n=>";
                    cin >> choice;
                    if (choice == 'y' || choice == 'Y') {
                        ofstream nightData;
                        nightData.open("nightlife.txt");
                        for (int i = 0; i < Nl.getLength(); i++) {
                            nightData << Nl.getEntry(i+1).getName() << "\n";
                            nightData << Nl.getEntry(i+1).getID() << "\n";
                            nightData << Nl.getEntry(i+1).getCityID() << "\n";
                            nightData << Nl.getEntry(i+1).getAgeLimit() << "\n";
                            nightData << Nl.getEntry(i+1).getTicketPrice() << "\n";
                        }
                        nightData.close();
                    }
                    break;
                }
            }
            //UNTIL HERE
            if (!checkAttraction) {
                cout << "The attraction you've entered doesn't exist.\n";
                adminMenu(Cy, Cl, Sp, Nl);
                break;
            }
            main();
            break;
        }
        //CASE EDIT CITY
        case 5:{
            string OrigCity,newCity;
            bool checkCity = false;
            cin.ignore();
            cin.clear();
            cout << "Please enter the initial name of the city you'd like to edit\n=>";
            cin >> OrigCity;
            cout << OrigCity;
            cout << "Please enter the name of the new city.\n=>";
            cin >> newCity;
            cout << newCity << endl;
            for (int i = 0; i < Cy.getLength(); i++) {
                if (Cy.getEntry(i+1).getName() == OrigCity) {
                    checkCity = true;
                    Cy.getEntry(i+1).setName(newCity);
                    cout << "Edit Successful\n";
                    break;
                }
            }
            if (!checkCity) {
                cout << "The City you've entered doesn't exist.\n";
                adminMenu(Cy, Cl, Sp, Nl);
                break;
            }
            char choice;
            cout << "Would you like to save your changes?(y or n)\n=>";
            cin >> choice;
            if (choice == 'y' || choice == 'Y') {
                ofstream citiesData;
                citiesData.open("cities.txt");
                for (int i = 0; i < Cy.getLength(); i++) {
                    citiesData << Cy.getEntry(i+1).getName() << "\n";
                    citiesData << Cy.getEntry(i+1).getID() << "\n";
                }
                citiesData.close();
            }
            main();
            break;
        }
        //CASE EDIT ATTRACTION
        case 6:{
            string OrigAtt,newAtt;
            bool checkAtt = false;
            cin.ignore();
            cin.clear();
            cout << "Please enter the initial name of the attraction you'd like to edit\n=>";
            getline(cin,OrigAtt);
            cout << "Please enter the name of the new attraction.\n=>";
            getline(cin,newAtt);
            cout << newAtt << endl;
            // SAME SEARCH MECHANISM AS REMOVE ATTRACTION
            for (int i = 0; i < Cl.getLength(); i++) {
                //cout << Cl.getEntry(i+1).getName() << endl;
                if (Cl.getEntry(i+1).getName() == OrigAtt) {
                    checkAtt = true;
                    Cl.getEntry(i+1).setName(newAtt);
                    cout << Cl.getEntry(i+1).getName();
                    cout << "Edit Successful\n";
                    char choice;
                    cout << "Would you like to save your changes?(y or n)\n=>";
                    cin >> choice;
                    if (choice == 'y' || choice == 'Y') {
                        ofstream cultureData;
                        cultureData.open("culture.txt");
                        for (int i = 0; i < Cl.getLength(); i++) {
                            cultureData << Cl.getEntry(i+1).getName() << "\n";
                            cultureData << Cl.getEntry(i+1).getID() << "\n";
                            cultureData << Cl.getEntry(i+1).getCityID() << "\n";
                            cultureData << Cl.getEntry(i+1).getEntranceFee() << "\n";
                        }
                        cultureData.close();
                    }
                    cout << Cl.getEntry(5).getName();
                    break;
                }
            }
            for (int i = 0; i < Sp.getLength(); i++) {
                //cout << Sp.getEntry(i+1).getName() << endl;
                if (Sp.getEntry(i+1).getName() == OrigAtt) {
                    checkAtt = true;
                    Sp.getEntry(i+1).setName(newAtt);
                    cout << Sp.getEntry(i+1).getName();
                    cout << "Edit Successful\n";
                    char choice;
                    cout << "Would you like to save your changes?(y or n)\n=>";
                    cin >> choice;
                    if (choice == 'y' || choice == 'Y') {
                        ofstream sportData;
                        sportData.open("sport.txt");
                        for (int i = 0; i < Sp.getLength(); i++) {
                            sportData << Sp.getEntry(i+1).getName() << "\n";
                            sportData << Sp.getEntry(i+1).getID() << "\n";
                            sportData << Sp.getEntry(i+1).getCityID() << "\n";
                            sportData << Sp.getEntry(i+1).getAgeLimit() << "\n";
                            sportData << Sp.getEntry(i+1).getPrice() << "\n";
                        }
                        sportData.close();
                    }
                    break;
                }
            }
            for (int i = 0; i < Nl.getLength(); i++) {
                //cout << Nl.getEntry(i+1).getName() << endl;
                if (Nl.getEntry(i+1).getName() == OrigAtt) {
                    checkAtt = true;
                    Nl.getEntry(i+1).setName(newAtt);
                    cout << Nl.getEntry(i+1).getName();
                    cout << "Edit Successful\n";
                    char choice;
                    cout << "Would you like to save your changes?(y or n)\n=>";
                    cin >> choice;
                    if (choice == 'y' || choice == 'Y') {
                        ofstream nightData;
                        nightData.open("nightlife.txt");
                        for (int i = 0; i < Nl.getLength(); i++) {
                            nightData << Nl.getEntry(i+1).getName() << "\n";
                            nightData << Nl.getEntry(i+1).getID() << "\n";
                            nightData << Nl.getEntry(i+1).getCityID() << "\n";
                            nightData << Nl.getEntry(i+1).getAgeLimit() << "\n";
                            nightData << Nl.getEntry(i+1).getTicketPrice() << "\n";
                        }
                        nightData.close();
                    }
                    break;
                }
            }
            if (!checkAtt) {
                cout << "The attraction you've entered doesn't exist.\n";
                adminMenu(Cy, Cl, Sp, Nl);
                break;
            }
            
        }
        default:{
            break;
        }
    }

}

void save(LinkedList<City>& Cy,LinkedList<Culture>& Cl,LinkedList<Sport>& Sp,LinkedList<Nightlife>& Nl){
    ofstream citiesData;
    citiesData.open("cities.txt");
    for (int i = 0; i < Cy.getLength(); i++) {
        citiesData << Cy.getEntry(i+1).getName() << "\n";
        citiesData << Cy.getEntry(i+1).getID() << "\n";
    }
    citiesData.close();
    
    ofstream nightData;
    nightData.open("nightlife.txt");
    for (int i = 0; i < Nl.getLength(); i++) {
        nightData << Nl.getEntry(i+1).getName() << "\n";
        nightData << Nl.getEntry(i+1).getID() << "\n";
        nightData << Nl.getEntry(i+1).getCityID() << "\n";
        nightData << Nl.getEntry(i+1).getAgeLimit() << "\n";
        nightData << Nl.getEntry(i+1).getTicketPrice() << "\n";
    }
    nightData.close();
    
    ofstream cultureData;
    cultureData.open("culture.txt");
    for (int i = 0; i < Cl.getLength(); i++) {
        cultureData << Cl.getEntry(i+1).getName() << "\n";
        cultureData << Cl.getEntry(i+1).getID() << "\n";
        cultureData << Cl.getEntry(i+1).getCityID() << "\n";
        cultureData << Cl.getEntry(i+1).getEntranceFee() << "\n";
    }
    cultureData.close();
    
    ofstream sportData;
    sportData.open("sport.txt");
    for (int i = 0; i < Sp.getLength(); i++) {
        sportData << Sp.getEntry(i+1).getName() << "\n";
        sportData << Sp.getEntry(i+1).getID() << "\n";
        sportData << Sp.getEntry(i+1).getCityID() << "\n";
        sportData << Sp.getEntry(i+1).getAgeLimit() << "\n";
        sportData << Sp.getEntry(i+1).getPrice() << "\n";
    }
    sportData.close();
}



