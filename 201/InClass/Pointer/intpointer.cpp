/*
    Filename: stringpointer
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 11/17/2015
    Description: 
*/
//Add libraries here
#include <iostream>

using namespace std;

//Declare functions here

//Declare global variables here



int main() {


    int x=[6] = {1,2,3,4,5,6};

    while(*x != 6) {
        cout << *x << endl;
        x++;
    }

    return 0;
}

//Insert user defined functions here

