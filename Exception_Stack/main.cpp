/*
    Filename: main.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 04/23/2016
    Description: 
    */
#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
    char ans;
    char next;

    Stack s;
     
    do{
        std::cout << "Enter a name -> ";
        cin.get(next);
        while(next != '\n') {
            s.push(next);
            cin.get(next);
        }
        while(! s.empty()) { std::cout << s.pop(); }

        std::cout << "\n\nAnother?(Y/n): ";
        cin.get(ans);
        cin.ignore(10000, '\n');
    } while (ans != 'n' && ans != 'N');

    return 0;
}
