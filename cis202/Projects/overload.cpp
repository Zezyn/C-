/*
    Filename: overload.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 03/01/2016
    Description: 
*/
//Add libraries here
#include <iostream>
    
class Rational {
    private: 
        int _num, _denom;
    public:
        Rational();
        Rational(int num, int _denom);
};

Rational::Rational() {

}

Rational::Rational(int num, int denom) {

    _num = num;
    _denom = denom;
}

using namespace std;

//Declare functions here

//Declare global variables here

int main() {

    Rational a(1,2), b(1,2);
    if(a==b){
        cout << "a equal to b" << endl;
    }
    return 0;
}

//Insert user defined functions here

