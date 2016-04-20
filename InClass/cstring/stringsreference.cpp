/*
    Filename: stringsreference.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 11/19/2015
    Description: Dynamic arrays
*/

//Add libraries here
#include <iostream>
#include <string>

using namespace std;

string* addEntry(string* dArray, int &size, string entry);
string* deleteEntry(string* dArray, int &size, string entry);

//Declare functions here
void printArray(string* dArray, int size);

//Declare global variables here

int main() {

    int size = 2;
    string* buffer = new string[2];
    buffer[0] = "Fred";
    buffer[1] = "Barney";
    buffer = addEntry(buffer, size, "Wilma");
    printArray(buffer, size);

    return 0;
}

//Insert user defined functions here
string* addEntry(string* dArray, int &size, string entry) {
    string *tmpArray = new string[size+1];

    for(int i=0;i< size; i++) 
        tmpArray[i] = dArray[i];
    
    delete [] dArray;
    tmpArray[size] = entry;
    size++;

    return tmpArray;
}


string* deleteEntray(string* dArray, int &size, string entry) {
    string *tmpArray = new string[size-1];
    int count = 0;
    for(int i=0;i<size; i++) {
        if(dArray[i] != entry) {
            tmpArray[count] = dArray[i];
            count++;
        }
    }
    size = count;
    delete [] dArray;
    return tmpArray;
}

void printArray(string* dArray, int size) {
    cout << "********************************************" << endl;
    for(int i=0; i<size;i++)
        cout << dArray[i] << endl;
    cout << "********************************************" << endl;
}
