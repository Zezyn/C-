#include <iostream>
#include "CheckedArray.h"
#include "SomeStrangeError.h"

//Constructor
CheckedArray::CheckedArray() { 
    arrayPtr array;
    array = new int[SIZE];
    for(int i=0;i<SIZE;i++) { array[i] = i; }
} //End Constructor

//Overloading []
int & CheckedArray::operator[] (int index) {

    if (index > 0 && index <= SIZE) { return array[index]; }
    else { throw SomeStrangeError(); }
                     
} //End Overloading

int CheckedArray::get_index() {
    std::cout << "Enter the index number to lookup -> ";
    std::cin >> i;
    return i;
}

std::ostream& operator<<(std::ostream& o,const CheckedArray& r) {
    o << "Index of: " << r.SIZE << "Value of Index: " << r.array[r.SIZE];
    return o;
}
