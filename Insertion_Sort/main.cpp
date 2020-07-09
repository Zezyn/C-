/*
Filename: main.cpp
Problem:
Author: Martin Hernandez
Email: 7607920511m.h@gmail.com
Date: 04/27/2016
Description: Selection Sort utility
*/

#include <iostream>
//#include "Insertion_Sort.h"

using namespace std;

template <typename T> //Uses template **DOESNT WORK

class Sort {
    public:
        Sort(); //Construct array
        void sorting(); //Sorts array
        //void swap(int&, int&); //Swaps for sorting
        void swap(T &, T &); //Swaps for sorting using Template **DOESNT WORK
        void print_array(); //Prints array
    private:
        int *dArray;
        const int aSIZE = 10;
	
        //T *dArray;
        //const T aSIZE = 10;
};


int main() {

    Sort s;
    s.sorting();
    //s.print_array(); //Alternative to not being able to use function
    return 0;

}

//Constructor builds and fills array
//template<class T>
Sort::Sort() { dArray = new int [aSIZE] {4,5,3,6,2,7,1,8,9,0}; }

//template<class T>
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

/* 
//Selection Sort
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
//template<typename T> //DOESNT WORK*********
void Sort::swap(T & a, T & b) {
    T temp = a;
    a = b;
    b = temp;
}

/* 
//swap() without template
void Sort::swap(int& a, int& b) { 
    int temp = a;
    a = b;
    b = temp;
}
*/

void Sort::print_array() { //Prints the array
    for(int i=0;i<aSIZE;i++) {
        std::cout << dArray[i] << " "; 
    }
    std::cout << endl;
}
