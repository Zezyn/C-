/*
Filename: main.cpp
Problem:
Author: Martin Hernandez
Email: 7607920511m.h@gmail.com
Date: 05/05/2016
Description:
*/

#include <iostream>
//#include "library.h"
#include "database.h"

using namespace std;

void menu(Database&);

int main() {

    Database D;
    menu(D);

return 0;

}

void menu(Database& a) {
    int choice;

    std::cout << "********** Welcome to the Book Database **********" << endl << endl;
    std::cout << "1) Add Book" << endl;
    std::cout << "2) View Books (Sorted by Author)" << endl;
    std::cout << "3) Exit" << endl << endl;
    std::cin >> choice;

    switch(choice) {
        case '1' :
            a.add();
            break;
    }
}
