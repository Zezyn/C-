/*
    Filename: chararray.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 11/10/2015
    Description: 
*/
//Add libraries here
#include <iostream>
#include<cstring>

using namespace std;

//Declare functions here

//Declare global variables here

int main() {
//make sure to initialize the array
    char s[11] = {'\0'}; //< good code / char s[11]; < bad code / /0 is a null bite which is always at the end of an array.
    strncpy(s,"0123456789",10);
//strncpy is string copy / strcopy is bad to use because there are no boundries
    cout << s << endl;

    return 0;
}

//Insert user defined functions here

