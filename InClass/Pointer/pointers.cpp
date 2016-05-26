/*
    Filename: pointers.cpp
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
    
    int x=10;
    
    //int *xPtr = (actual ram address is what he used)
    //the previous is like the following:
    int *xPtr = &x; //Address of x which contains value 10

    //int **xXPointer = &*xPtr //DOUBLE POINTER used for arrays

    cout << &x << endl; //address of x
    cout << xPtr << endl; //address of x
    cout << *xPtr << endl; //value of x (10)
    cout << &(*xPtr) << endl; //dereference address of xptr
    cout << &xPtr << endl;  

    return 0;
}

//Insert user defined functions here

