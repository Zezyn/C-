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
int search(const int ar[], int size, int key);
void bubble_sort(int ar[], int size);
void swap(int& a, int& b);

//Declare global variables here
const int SIZE = 25;

int main() {

    srand(time(0));
    int ar[SIZE];
    fill_array(ar,SIZE);
    
    //int index = search(ar,SIZE,5);
   // if(index != -1)
   //     cout << "5 is first found at position " << index << endl;
    print_array(ar,SIZE);
    bubble_sort(ar,SIZE);
    print_array(ar,SIZE);
    
    return 0;
}

//Insert user defined functions here
void bubble_sort(int ar[], int size)
{
    bool swapped;

    do {
        swapped = false;
        for(int i=1; i<size; i++)
        {
            if(ar[i-1] > ar[i]){
                swap(ar[i-1],ar[i]);
                swapped=true;
            }
        }
    } while(swapped);
}

void swap(int& a, int& b)
{
    int tmp = b;
    a = b;
    b = tmp;
}

int search(const int ar[], int size, int key)
{
    for (int i =0; i<size;i++)
{
        if(key ==ar[i])
            return i;
    }
    return -1;   
}

void fill_array(int ar[], int size)
{
    for(int i=0;i<size;i++)
        ar[i] = rand() % 25 +1;

}


void print_array(const int ar[], int size)
{
    for(int i=0; i<size; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
}
