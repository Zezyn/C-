/*
    Filename: cstring1.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 11/10/2015
    Description: atoi string to numbers  
*/
//Add libraries here
#include <iostream>
#include<cstdlib>

using namespace std;

//Declare functions here

//Declare global variables here

int main() {
   
    char i_str[] = "12345";
    int i;

    i = atoi(i_str);
    cout << (i + 1) << endl;
    return 0;
}

//Insert user defined functions here

