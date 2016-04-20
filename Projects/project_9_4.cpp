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

#include <iostream>
#include <cstring>

using namespace std;
typedef char* charPtr;

void userinput(charPtr &Array, int &size);
void reversed(charPtr &Array, int size);
void printarray(charPtr Array);


int main() {
        int size = 100;
        charPtr Array;
        userinput(Array, size);
        reversed(Array, size);
        printarray(Array);      
    return 0;
}

void userinput(charPtr &Array, int &size) { 

    Array = new char[size];
    cout << "Enter a string: ";
    cin.getline(Array, size, '\n');
    size = strlen(Array);

}

void reversed(charPtr &Array, int size) {

    charPtr front, rear;
    char temp;
    front = Array;
    rear = Array + (size - 1);
    int j = 0;
    for(int i=0; i<size/2; i++) {
        temp = front[i];
        front[i] = rear[j];
        rear[j] = temp;
        temp = '\0';
        j--;
    }
}

void printarray(charPtr Array) {

    for(int i=0; i<strlen(Array); i++)
        { cout << Array[i]; }
    cout << endl;
} 
