// Created by Martin Hernandez

#include "Selection_Sort.h"
#include <iostream>
using namespace std;

Sort::Sort() { //Constructor builds and fills array
    int temp = 100;
    dArray = new int [aSIZE] {4,5,3,6,2,7,1,8,9,0};
}

void Sort::sorting() { //Sorts the array and sends to print
    for (int i = 0 ; i < aSIZE - 1 ; i++) {
        int min = i;
        for (int j = i + 1 ; j < aSIZE ; j++) {
            if (dArray[j] < dArray[min]) {
                min = j;
            }
        }
        if (min != i) {
            swap(dArray[min], dArray[i]); 
        }
    }
    print_array(); //*****This isn't working or kicking out an error*****
}

//Sort() Takes two inputs and swaps them returning by reference
void Sort::swap(int& a, int& b) { 
    int temp = a;
    a = b;
    b = temp;
}

void Sort::print_array() { //Prints the array
    for(int i=0;i<aSIZE;i++) {
        std::cout << dArray[i] << " "; 
    }
    std::cout << endl;
}