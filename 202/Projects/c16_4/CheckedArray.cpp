
#include <iostream>
#include <stdlib.h>
#include "CheckedArray.h"

using namespace std;

CheckedArray::CheckedArray() {
    
    cout << "Enter the amount of numbers you wish to enter: ";
    cin >> size;
    
    if(! (isdigit(size))) { cout << "This is not a integer!" << endl; /*throw add errorclass here*/  }
    
    arrayPtr a;
    a = new int[size];

}


