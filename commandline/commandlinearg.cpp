/*
    Filename: chartest.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 11/03/2015
    Description: 
*/
//Add libraries here
#include <iostream>

using namespace std;

//Declare functions here

//Declare global variables here
const unsigned char MASK = 0x80;
int main(int argc, char *argv[]) {

    unsigned char x = 0x7F;

    cout << "The number of command line args is: " << argc << endl;
    cout << "The arguments are: " << endl;
    for(int i=0; i< argc;i++) {
        cout << argv[i] << endl; }

    //cout << (((x & MASK) == MASK ) ? 1 : 0) << endl;
    return 0;
}

//Insert user defined functions here

