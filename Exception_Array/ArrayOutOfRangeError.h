#ifndef ARRAYOUTOFRANGEERROR_H
#define ARRAYOUTOFRANGEERROR_H

#include <string>

class ArrayOutOfRangeError {
    public:
        ArrayOutOfRangeError(std::string m):message(m){};
        friend std::ostream& operator<<(std::ostream&,const ArrayOutOfRangeError&);
    private:
        std::string message;
};

#endif
