// Created by Martin Hernandez

#include "Insertion_Sort.h"
#include <iostream>
using namespace std;

Sort::Sort() { //Constructor builds and fills array
    int temp = 100;
    dArray = new int [aSIZE] {4,5,3,6,2,7,1,8,9,0};
}

void Sort::sorting() { //Insertion Sort
    int j, temp;
    for (int i = 0; i < aSIZE; i++) {
        j = i;
        while (j > 0 && dArray[j] < dArray[j-1]) { 
            temp = dArray[j];
            dArray[j] = dArray[j-1];
            dArray[j-1] = temp;
            j--;
        }
    }
    print_array();
}

/* Selection Sort
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
    print_array(); 
}
*/

//swap() Takes two inputs and swaps them returning by reference
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
