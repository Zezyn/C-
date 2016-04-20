/*
Filename: test2.cpp
Problem:
Author: Martin Hernandez 
Email: 7607920511m.h@gmail.com
Date: 11/25/2015
Description: 
*/
//Add libraries here
#include <iostream>

using namespace std;

int main() {
    
    int *da; //pointer
    da = new int [10]; //dynamic array creation
    
    for(int i=0;i<10;i++) //fill array 1-10
        { da[i] = i; }

    for(int i=0;i<10;i++) 
        { cout << da[i]; }

    delete [] da;
    return 0;
    }
