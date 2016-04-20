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
bool is_masked(unsigned char x, unsigned char mask);
void set_bit(unsigned char &x, unsigned char bit);

//Declare global variables here
const unsigned char MASK = 0x80;

int main(int argc, char *argv[]) {

   //unsigned char x = 0x7F;
    
    if(argc < 2) {
        cout << "Usage: " << argv[0] << " number" << endl;
        exit(1); }
        
    unsigned char x = strtol(argv[1], NULL, 16);
    cout << (is_masked(x,MASK) ? '1' :'0') << endl;
    set_bit(x,0x88);
    cout << hex << static_cast<unsigned char > (x) << endl;

    return 0;
}

//Insert user defined functions here
bool is_masked(unsigned char x, unsigned char mask)
{
    return (x & mask) == mask;
}

void set_bit(unsigned char &x, unsigned char bit)
{
    x = x | bit;
}
