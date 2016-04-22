#ifndef ARRAYOUTOFRANGEERROR_H
#define ARRAYOUTOFRANGEERROR_H

#include <string>

class ArrayOutOfRangeError {
    public:
        ArrayOutOfRangeError(std::string msg):message(msg){};
        std::string what();
    private:
        std::string message;
};

#endif
