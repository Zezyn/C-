// Created by Martin Hernandez on 4/20/16

#ifndef CHECKEDARRAY_H
#define CHECKEDARRAY_H

class CheckedArray {
    public:
        CheckedArray(); //Constructor
        int get_index(); //Gets index from user
        int& operator[] (int index); //Overloading []
        friend std::ostream& operator<<(std::ostream& o, const CheckedArray& r);
    private:
        typedef int* arrayPtr; //pointer to dynamic array
        const int SIZE = 4; //Size of array
        int i; //Index of array
        int array[];
};

#endif
