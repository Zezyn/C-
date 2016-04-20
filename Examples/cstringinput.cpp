/*
    Filename: project_9_4.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 11/17/2015
    Description: This is input from a user into a cstring
*/

//Add libraries here
#include <iostream>
#include <cstring>

using namespace std;

//Declare functions here

//Declare global variables here
int const size = 100;

int main() {
    
    char *dArray;
    dArray = new char[size];
    cout << "Enter a string: ";
        cin.getline(dArray, size, '\n');
    for(int i = 0; i < strlen(dArray);i++) 
        { cout << dArray[i]; }
    cout << endl;
        
    return 0;
}

    //Insert user defined functions here
    
