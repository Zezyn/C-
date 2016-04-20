/*
    Filename: getline.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 11/10/2015
    Description: Get input from user
*/
//Add libraries here
#include <iostream>
#include<fstream>

using namespace std;

//Declare functions here

//Declare global variables here

int main() {
    string s;
    
    getline(cin, s);

    cout << "the string is\n" << s << endl;
    return 0;
}

//Insert user defined functions here

