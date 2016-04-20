/*
    Filename: 
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 11/12/2015
    Description: 
*/
//Add libraries here
#include <iostream>
#include <cstring>

using namespace std;

//Declare functions here
void trimRight(char c[]);

//Declare global variables here

int main() {

    char s[] = "This is a sentence          ";
    cout << s << "abcd" << endl;
    trimRight(s);
    cout << s << "abcd" << endl;
    return 0;
}

//Insert user defined functions here
void trimRight(char c[]) {
    for(int i=0;i<strlen(c);i++) {
        if(c[i] == ' ' && c[i+1] == ' ') {
            c[i] = '\0';
        
         }
    }
}


