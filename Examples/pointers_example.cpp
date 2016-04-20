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
    int input[4];
    userinput(input);
    //for(int i=0;i<4;i++)
     //   cout << input[i];

    return 0;
    }

void userinput(int (*input)) {

    input[0] = 1;
    input[1] = 2;
    input[2] = 3;
   
    int *da; //pointer
    da = new int [3]; //dynamic array creation

    for(int i=0;i<3;i++) //fill array 1-10
        { cin >> da[i]; }
    
    for(int i=0;i<3;i++) //print dynamic array
        { cout << da[i]; }

    delete [] da;
}
