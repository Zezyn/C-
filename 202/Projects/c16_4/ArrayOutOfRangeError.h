#ifndef ARRAYOUTOFRANGEERROR_H
#define ARRAYOUTOFRANGEERROR_H

#include <string>

class ArrayOutOfRangeError {
    public:
        ArrayOutOfRangeError(string msg):message(msg){};
    private:
        string message;
};

#endif
