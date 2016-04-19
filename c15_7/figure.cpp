/*
    Filename: figure.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 03/09/2016
    Description: Figure class
*/

#include <iostream>
#include "figure.h"

using namespace std;

void Figure::center() {
    cout << "\nCenter called\n";
    erase();
    draw();
}

void Figure::draw() {
    cout << "\nDraw called\n";
}

void Figure::erase() {
    cout << "\nErase called\n";
}
