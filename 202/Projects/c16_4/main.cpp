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

void use_array() throw(ArrayOutOfRangeError) {
    //CheckedArray A(SIZE);//<-pass it the size
    //A[100] = 4; //this should throw an exception in your code after you comment it out.
    //std::cout << i << std::endl; 
}

int main() {
    try { use_array(); }
    catch(const ArrayOutOfRangeError e) 
        { std::cout << "Error in program, check the log file" ;
            //<< std::endl; log << e; }
        }
    return 0;
}

