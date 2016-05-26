/*
    Filename: test.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 10/21/2015
    Description: A test file.
*/

//Add libraries here
#include <iostream>

using namespace std;

//Declare functions here
void userinput(string&);

//Declare global variables here

int main() {
    string input;
    userinput(input);
    cout << input << endl;
    return 0;
}

//Insert user defined functions here
void userinput(string& input) {
    cout << "Input? ";
    cin >> input;
    return;
}
