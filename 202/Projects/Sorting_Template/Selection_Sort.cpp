// Created by Martin Hernandez
#include "Selection_Sort.h"
#include "iostream"
using namespace std;

Sort::Sort() { //Constructor builds and fills array
    int temp = 100;
    dArray = new int [10];
    for(int i=0;i<10;i++) {
        dArray[i] = temp;
        temp = temp-10;
        std::cout << "Test Line of Array: " << dArray[i] << " "; 
        //Test line for array
    }
}

//void Sort::Sort() {}

//Sort() Takes two inputs and swaps them returning by reference
void Sort::swap(int& a, int& b) { 

}
