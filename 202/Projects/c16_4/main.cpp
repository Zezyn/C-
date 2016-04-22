/*
    Filename: main.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 04/21/2016
    Description: 
*/
#include <iostream>
#include "CheckedArray.h"
#include "ArrayOutOfRangeError.h"

using namespace std;

int main() {
try { CheckedArray A; }
catch(const ArrayOutOfRangeError e) 
    { /*e.what();*/ } //e.what doesn't compile

    return 0;
}
