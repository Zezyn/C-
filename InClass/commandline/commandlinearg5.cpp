/*
    Filename: chartest.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 11/03/2015
    Description: 
*/
//Add libraries here
#include<iostream>
#include<cstdlib>
using namespace std;

//Declare functions here
bool is_masked(unsigned char x, usigned char mask);

//Declare global variables here
const unsigned char MASK = 0x80;

int main(int argc, char *argv[]) {

    unsigned char x = 0x7F;
    
    if(argc < 2) {
        cout << "Usage: " << argv[0] << " number" << endl;
        exit(1); }
        
    unsigned char x = strtol(argv[1], NULL, 16);

    cout << (is_masked(x,MASK) ? '1' :'0') << endl;
    return 0;
}

//Insert user defined functions here
bool is_masked(unsigned char x, usigned char mask)
{
return (x & mask) == mask;
}

