/*
    Filename: test2.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 10/22/2015
    Description: 
*/
//Add libraries here
#include <iostream>

using namespace std;

//Declare functions here

//Declare global variables here

int main() {
    char resp = 'y';
    do {
        cout << "Do you want to continue? (y for yes n for no)";
        cin >> resp;
    }
    while( resp == 'y');
    cout << "done" << endl;
    return 0;
}

//Insert user defined functions here

