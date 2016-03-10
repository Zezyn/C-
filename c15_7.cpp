/*
    Filename: c15_7.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 03/08/2016
    Description: Main Program  
*/
#include <iostream>
#include "figure.h"
#include "rectangle.h"
#include "triangle.h"

using std::cout;

int main() {

    Triangle tri;
    cout << "\nDerived class Triangle object calling draw().\n";
    tri.draw();     //Calls Draw
    cout << "\nDerived class Triangle object calling center().\n";
    tri.center();   //Calls Draw center

    Rectangle rect;
    cout << "\nDerived Rectangle class object calling draw().\n";
    rect.draw();    //Calls Draw
    cout << "\nDerived class Rectangle object calling center().\n";
    rect.center();  //Calls Draw center

    return 0;
}
