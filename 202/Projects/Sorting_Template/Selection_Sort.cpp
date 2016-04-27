// Created by Martin Hernandez
#include "Selection_Sort.h"
#include "iostream"
using namespace std;

Sort::Sort() {
    int temp = 100;
    dArray = new int [10];
    for(int i=0;i<10;i++) {
        dArray[i] = temp;
        temp = temp-10;
        std::cout << dArray[i] << " ";
    }
}

//void Sort::Sort() {}

void Sort::swap() {}
