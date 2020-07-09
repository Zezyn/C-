#ifndef SOMESTRANGEERROR_H
#define SOMESTRANGEERROR_H

#include "ArrayOutOfRangeError.h"

class SomeStrangeError : public ArrayOutOfRangeError {
public:
    SomeStrangeError() : ArrayOutOfRangeError(
    "Invalid index! Check if set to negative or larger than the declared size."){   }
};

#endif
