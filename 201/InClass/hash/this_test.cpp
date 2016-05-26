/*
    Filename: test.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 12/01/2015
    Description: 
*/
//Add libraries here
#include <iostream>

using namespace std;

class A
{
    public:
        void print_this() {
            cout << this << endl;
    }
};

int main() {
    A *aptr = new A;
    
    cout<< aptr<< endl;
    aptr->print_this();
    
    return 0;
}

//Insert user defined functions here

