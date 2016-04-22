
#include <iostream>
#include <stdlib.h>
#include "CheckedArray.h"

using namespace std;

//Constructor
CheckedArray::CheckedArray() { 
    arrayPtr array;
    array = new int[SIZE];
} //End Constructor

//Overloading []
char & CheckedArray::operator[] (int index) {
    if (index == 1) { /*return test;*/ }
    else if (index == 2) { /*return test;*/ }
    else { 
        cout << "Illegal index value.\n"; //Throw error here
        exit(1); 
    }
} //End Overloading

int CheckedArray::get_index() {
    cout << "Enter the index number to lookup -> ";
    cin >> i;
    return i;
}
