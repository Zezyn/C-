/*
Filename: project_9_5.cpp
Problem:
Author: Martin Hernandez 
Email: 7607920511m.h@gmail.com
Date: 11/20/2015
Description: Each user has a unique five-digit ID number. Whenever a user logs on, the user’s ID, lab  number, and the computer station number are transmitted to your system. For example, if user 49193 logs onto station 2 in lab 3, then your system receives (49193, 2, 3) as input data. Similarly, when a user logs off a station, then your system receives the lab number and the computer station number.

Write a computer program that could be used to track, by lab, which user is logged onto which computer. For example, if user 49193 is logged into station 2 in lab 3 and user 99577 is logged into station 1 of lab 4, then your system might display the following:

                Lab# Computer Stations
                 1   1: empty 2: empty 3: empty 4: empty 5: empty
                 1   1: empty 2: empty 3: empty 4: empty 5: empty 6:empty
                 3   1: empty 2: 49193 3: empty 4: empty
                 4   1: 99577 2: empty 3: empty

Create a menu that allows the administrator to stimulate the transmission of information by manually typing in the login of logoff data. Whenever someone logs in or out, the display should be updated. Also write a search option so that the administrator can type in a user ID and the system will output what lab and station number that user is logged into, or “None” if the user ID is not logged into any computer station.

You should use a fixed array of length 4 for the labs. Each array entry points to a dynamic array that stores the user login information for each respective computer station.
*/


//Add libraries here
#include <iostream>
#include <fstream>

using namespace std;

//Declare functions here
typedef char* charPtr;
typedef int* charInt;

void menu(int &id, int &cstation, int &lab);
void labcheck(int id, int cstation, int lab);
void search(int id);
void login(int &id, int &cstation, int &lab);

//Declare global variables here

int main() {
    int id;
    int cstation;
    int lab;

    menu(id, cstation, lab);
    cout << endl << "ID: " << id << " CSTAT: " << cstation << " LAB: " << lab << endl;

    return 0;
}

//Insert user defined functions here
void menu(int &id, int &cstation, int &lab) {
    int decision = 0;
    do {
    cout << "What would you like to do?" << endl;
    cout << "1. Login" << endl;
    cout << "2. Search" << endl;
    cout << "3. Lab Check" << endl;
    cout << "4. Exit Program" << endl << endl;
    cout << "Enter a number: ";
    cin >> decision;
    
        if(decision > 5 || decision <= 0)
            cout << endl << endl << "Invalid entry." << endl << endl;
        else if(decision == 3) 
            labcheck(id, cstation, lab);
        else if(decision == 2) 
            search(id);
        else if(decision == 1)
            login(id, cstation, lab);
        else 
            cout << endl << "Exiting Program" << endl;
            return;
    } while(decision == 0);
}

void labcheck(int id, int cstation, int lab) {
    cout << "Lab Check" << endl;
}

void search(int id) {
    cout << "Search" << endl;
}

void login(int &id, int &cstation, int &lab) {
   
    id = 00000;
    cstation = 0;
    lab = 0;
    
    do {
        cout << endl << "Please enter your 5 digit I.D. Number: ";
        cin >> id;
        if(cin.fail()) { 
            cout << "Invalid Entry" << endl; 
            break; 
        }
    } while(id >= 99999 || id < 10000); 
        
    do {
        cout << endl << "Please enter the Lab Number: ";
        cin >> lab;
        if(cin.fail()) { 
            cout << "Invalid Entry" << endl; 
            break; 
        }
    } while(lab < 1 || lab > 4);
        
    do {
        cout << endl << "Please enter the Computer Station Number: ";
        cin >> cstation;
        if(cin.fail()) { 
            cout << "Invalid Entry" << endl; 
            break; 
        }
    } while(cstation < 1 || cstation > 4);

    //cout << " ID: " << id << " Lab: " << lab << " CStation: " << cstation << endl;
    ofstream users;    
    users.open("users.txt", ios::app);
        if(users.is_open()) {
            users << id << '\t' << lab << '\t' << cstation << '\n';
            users.close();
        }
        else cout << "Can't find file";
}

