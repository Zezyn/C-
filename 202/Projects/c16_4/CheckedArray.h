// Created by Martin Hernandez on 4/20/16

#ifndef CHECKEDARRAY_H
#define CHECKEDARRAY_H

class CheckedArray {
    public:
        CheckedArray(); //Constructor
        int get_index(); //Gets index from user
        char& operator[] (int index); //Overloading []
    private:
        typedef int* arrayPtr; //pointer to dynamic array
        const int SIZE = 4; //Size of array
        int index; //Index of array
};

#endif
