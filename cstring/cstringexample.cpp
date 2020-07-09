/*
    Filename: cstringexample.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 11/19/2015
    Description: Cstrings with int and char 
*/
//Add libraries here
#include <iostream>

using namespace std;

typedef int* intPtr;
typedef char* charPtr;

int main() {

    int x;
    intPtr ip = &x;
    
    charPtr *ar;
    charPtr *cPtr;
    
    ar = new charPtr[5];
    ar[0] = new char[10];
    ar[1] = new char[15];
    ar[2] = new char[10];
    ar[3] = new char[20];
    ar[4] = new char[20];

    cPtr = ar;

    strncpy(*cPtr, "012345", 9);
    strncpy(*cPtr, "abcdefg", 10);

    cout << ar[0] << endl;
    cout << ar[1] << endl;
    cout << ar[0][0] << endl;

    strncpy(&(ar[0][0]), "hello",9);

//    cout << ar[0] << " : " << &ar[0][0] << endl;

    cout << static_cast<void*>(ar[0]) << " : " << &ar[0][0] << endl;

//    intPtr *arPtr = ar; <<-- Integers

//    ar[0][0]=10;
//    **arPtr=20;

//    cout << *arPtr << " : " << &ar[0][0] << endl;

//    cout << ar[0][0] << endl;

    return 0;
}
