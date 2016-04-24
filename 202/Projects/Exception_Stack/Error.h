#ifndef ERROR_H
#define ERROR_H

#include <string>

class Error {
    public:
    Error(string m):message(m){};
    private:
        string message;
};
#endif
