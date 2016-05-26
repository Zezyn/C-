/*
    Filename: arraysinfunctions.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 10/27/2015
    Description: 
*/
//Add libraries here
#include <iostream>

using namespace std;

//Declare functions here
int add_one(int&);
void swap(int&, int&);
//Declare global variables here
const int SIZE = 5;

int main() {

    int ar[SIZE];
    ar[0] = 10;
    ar[1] = 11;
    //cout << add_one(ar[0]) << endl;
    //cout << ar[0] << endl;
    swap(ar[0],ar[1]);
    cout << ar[0] << endl;
    return 0;
}

//Insert user defined functions here
void swap(int& a, int&b)
{
    int tmp = b;
    b = a;
    a = tmp;
}
    
int add_one(int& v)
{   
    v = v+1;
    return v;
}
