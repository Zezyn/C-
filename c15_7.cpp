/*
    Filename: c15_7.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 03/08/2016
    Description: Main Program  
*/
//Add libraries here
#include <iostream>
#include "figure.h"
#include "rectangle.h"
#include "triangle.h"

using std::cout;
using namespace std;

//Declare functions here

//Declare global variables here

int main() {
    Triangle tri;
    tri.draw(); 
    Rectangle rect;
    cout << "\nDerived class Triangle object calling center().\n";
    tri.center(); //Calls Draw center
    cout << "\nDerived class Rectangle object calling center().\n";
    rect.center(); //Calls Draw center
    return 0;
}

//Insert user defined functions here

