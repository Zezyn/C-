// Created by Martin Hernandez
#include "Selection_Sort.h"
#include "iostream"
using namespace std;

Sort::Sort() { //Constructor builds and fills array
    int temp = 100;
    dArray = new int [aSIZE];
    for(int i=0;i<aSIZE;i++) {
        dArray[i] = temp;
        temp = temp-10;
    }
}

void Sort::sorting() {
    swap(dArray[0], dArray[9]);
    print_array();
}

//Sort() Takes two inputs and swaps them returning by reference
void Sort::swap(int& a, int& b) { 
    int temp = a;
    a = b;
    b = temp;
}

void Sort::print_array() { //Prints the array
    for(int i;i<aSIZE;i++) {
        std::cout << dArray[i] << " "; 
    }
}
