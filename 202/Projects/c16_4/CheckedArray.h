// Created by Martin Hernandez on 4/20/16

#ifndef CHECKEDARRAY_H
#define CHECKEDARRAY_H

class CheckedArray {
    public:
        CheckedArray(); //Constructor
        char& operator[] (int index); //Overloading []
    private:
        typedef int* arrayPtr; //pointer to dynamic array
        const int SIZE = 2; //Size of array
};

#endif
