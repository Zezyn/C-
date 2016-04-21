
#include <iostream>
#include <stdlib.h>
#include "CheckedArray.h"

using namespace std;

CheckedArray::CheckedArray() { }

char & CheckedArray::operator[] (int index)
{
    if (index == 1) { return first; }
    else if (index == 2) { return second; }
    else {
        cout << "Illegal index value.\n";
        exit(1);
        }
    
}
