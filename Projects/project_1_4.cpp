/**
File: project_1_4.cpp
Description: A program that determines how far an object would drop according to time put in by a user
Created: Fri September 4, 2015
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
*/

#include<iostream>

using namespace std;

int main() 
{
    // Declare Variables
    int t; // t is for time
     
    // prompt user for time in seconds
    cout << "How many seconds during the fall?" << endl;
    cin >> t; // t is for time 
    // calculate the distance
    int d = (32 * (t * t)) / 2; // d is for distance
    // output the distance
    cout << "The total distance fallen is " << d << " feet." << endl;
    return 0;
}
