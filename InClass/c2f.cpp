/*
    Filename: c2f.cpp
    Description: convert celsius to fahrenheit
    Author: Martin Hernandezw
    Email: 7607920511m.h@gmail.com
*/

#include<iostream>

using namespace std;

int main()
{
    double c;
    double f; 
    
    // 1 prompt user for c
    cout << "Enter the value for Celsius:";
    cin >> c;
    
    // 2 calculate f using given formula
    f = 9.0 / 5.0 * c + 32.0;    
    
    // 3 output the degrees in fahrenheit
    cout << "The degrees Fahrenheit is " << f << endl;
    return 0;
}
