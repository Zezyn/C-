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
using namespace std;

int main() {
    Triangle tri;
    Rectangle rect;
    cout << "\nDerived class Triangle object calling draw().\n";
    tri.draw();     //Calls Draw
    cout << "\nDerived class Triangle object calling center().\n";
    tri.center();   //Calls Draw center
    cout << "\nDerived class Triangle object calling erase().\n";
    tri.erase();    //Calls Erase
    cout << "\nDerived class Rectangle object calling draw().\n";
    rect.draw();    //Calls Draw
    cout << "\nDerived class Rectangle object calling center().\n";
    rect.center();  //Calls Draw center
    cout << "\nDerived class Rectangle object calling erase().\n";
    rect.erase();   //Calls Erase
    return 0;
}
