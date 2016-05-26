/*
    Filename: main.cpp
    Problem:The Array gives me the address instead of the value
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 04/21/2016
    Description: Throw an exception if out of range
*/

#include <iostream>
#include "CheckedArray.h"
#include "ArrayOutOfRangeError.h"

using namespace std;

void use_array() throw(ArrayOutOfRangeError) {
    CheckedArray A;
    int i = A.get_index(); //Get index from user
    //A[100] = 4; //Should throw exception TEST LINE
    std::cout << "Value of index: " << i << " is " 
    << A[i] << std::endl; //Output index from user 
}

int main() {

    try { use_array(); }
    catch(const ArrayOutOfRangeError e) 
        { std::cout << "\nIndex out of Range! Error in program!" ; }
        
    return 0;
}
