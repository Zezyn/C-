/*
    Filename: stacks.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 03/31/2016
    Description: 
*/
//Add libraries here
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    string buffer;

    while(buffer != "END") {
        getline(cin,buffer);
        if(buffer != "+" && buffer != "-") {
            int number = atoi(buffer.c_str());
            cout << "number is" << number;
        }
    }
    return 0;
}

//Insert user defined functions here

