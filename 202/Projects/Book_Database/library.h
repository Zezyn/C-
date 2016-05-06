#ifndef LIBRARY_H
#define LIBRARY_H
//Create a vector for books
#include<vector>
#include<string>
#include"database.h"

class Books {
    public:
        void add();
        void print();
    private:
        std::vector<std::string>* books;
#endif
