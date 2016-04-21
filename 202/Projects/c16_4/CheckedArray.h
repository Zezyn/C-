// Created by Martin Hernandez on 4/20/16

#ifndef CHECKEDARRAY_H
#define CHECKEDARRAY_H

class CheckedArray {
    public:
        CheckedArray();
        //CheckedArray(char first_value, char second_value);
        char & operator[](int index);
    private:
        char first;
        char second;
};

#endif
