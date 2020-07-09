/*
    Filename: pointer.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 02/16/2016
    Description: 
*/
//Add libraries here
#include <iostream>

using namespace std;

//Declare functions here

//Declare global variables here

int main() {

    int x = 10;
    int *intPtr = &x;
    int *intPtr2 = intPtr;

    *intPtr2 = 20;

    cout << intPtr << endl;
    cout << intPtr2 << endl;
    cout << *intPtr << endl;

    return 0;
}

//Insert user defined functions here

