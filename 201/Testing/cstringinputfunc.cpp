/*
    Filename: project_9_4.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 11/17/2015
    Description: Write a function that takes a C string as an input parameter and reverses the
    string. The function should use two pointers, front and rear. The front pointer should 
    initially reference the first character in the string, and the rear pointer should initially
    reference the last character in the string. Reverse the string by swapping the characters
    referenced by front and rear, then increment front to point to the next character and
    decrement rear to point to the preceding character, and so on, until the entire string is
    reversed. Write a main program to test your function on various strings of both even and odd     length.
*/

//Add libraries here
#include <iostream>
#include <cstring>

using namespace std;
typedef char* charPtr;

//Declare functions here
void userinput(charPtr dArray);

//Declare global variables here
int const SIZE = 100;

int main() {
        
        charPtr dArray;
        userinput(dArray);
    
    return 0;
}

    //Insert user defined functions here
void userinput(charPtr dArray) { 

    dArray = new char[SIZE];
    cout << "Enter a string: ";
    cin.getline(dArray, SIZE, '\n');
    
    for(int i = 0; i < strlen(dArray);i++) 
        { cout << dArray[i]; }
    cout << endl;

}

