/*
Filename: 
Problem:
Author: Martin Hernandez 
Email: 7607920511m.h@gmail.com
Date: 11/25/2015
Description: 
*/
//Add libraries here
#include <iostream>

using namespace std;

void userinput(int (*input));

int main() {
    int input[3];
    userinput(input);
    for(int i=0;i<3;i++)
        cout << input[i];

    return 0;
    }

void userinput(int (*input)) {

    input[0] = 1;
    input[1] = 2;
    input[2] = 3;

}
