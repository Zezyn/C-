#include <iostream>
#include "CheckedArray.h"
#include "ArrayOutOfRangeError.h"

using namespace std;

std::ostream& operator<<(std::ostream& o,const ArrayOutOfRangeError& d) {
    o << d.message << std::endl;
    return o;
}

