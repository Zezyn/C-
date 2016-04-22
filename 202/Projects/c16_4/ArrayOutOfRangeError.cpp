#include "ArrayOutOfRangeError.h"

std::ostream& operator<<(std::ostream& o,const ArrayOutOfRangeError& d) {
    o << d.message << std::endl;
    return o;
}

