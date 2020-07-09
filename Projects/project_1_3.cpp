/**
File: project_1_3.cpp
Description: A program to calculate money.
Created: Fri September 4, 2015
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() 
{
    // declare the variables needed
    double q; // quarters
    double d; // dimes
    double n; // nickels
    double t; // total
    // prompt user for quarters dimes and nickels
    cout << "How many quarters do you have?" << endl;
        cin >> q;
    cout << "How many dimes do you have?" << endl;
        cin >> d;
    cout << "How many nickels do you have?" << endl;
        cin >> n;
    // calculate the cents
    t = q * .25 + d * .10 + n * .05;
    // output the cents
    cout << fixed << setprecision(2) << "You have a total of: $" << t << endl;
    return 0;
}
