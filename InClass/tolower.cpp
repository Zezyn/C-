/*
    Filename: tolower.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 11/10/2015
    Description: 
*/
//Add libraries here
#include <iostream>
#include<cctype>
#include<string>

using namespace std;

//Declare functions here
string string_to_lower(string s);
//Declare global variables here

int main() {

    string s = "ABCDEF";
    cout << string_to_lower(s) << endl;
    
    return 0;
}

//Insert user defined functions here
string string_to_lower(string s)
{
    string lower = s;
    for(int i=0;i<s.length();i++)
        lower[i] = tolower(s[i]);
    return lower;
} 
