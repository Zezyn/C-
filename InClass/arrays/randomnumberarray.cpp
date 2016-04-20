/*
    Filename: arraysinfunctions2.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 10/27/2015
    Description: 
*/
//Add libraries here
#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

//Declare functions here
void print_array( const int ar[], int size);
void fill_array(int ar[], int size); 

//Declare global variables here
const int SIZE = 5;

int main() {

    srand(time(0));
    int ar[SIZE];
    fill_array(ar,SIZE);
    print_array(ar,SIZE);

    return 0;
}

//Insert user defined functions here
void fill_array(int ar[], int size)
{
    for(int i=0;i<size;i++)
        ar[i] = rand();

}


void print_array(const int ar[], int size)
{
    for(int i=0; i<size; i++)
        cout << ar[i] << endl;
}
