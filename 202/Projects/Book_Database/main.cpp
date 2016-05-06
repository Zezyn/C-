/*
Filename: main.cpp
Problem:
Author: Martin Hernandez
Email: 7607920511m.h@gmail.com
Date: 05/05/2016
Description:
*/

#include <iostream>
#include <cstdlib>
#include "library.h"
#include "database.h"

using namespace std;

void menu(Books&);

int main() {

    Books D;
    menu(D);

return 0;

}

void menu(Books& a) {
    int choice;

    std::cout << "********** Welcome to the Book Database **********" << endl << endl;
    std::cout << "1) Add Book" << endl;
    std::cout << "2) View Books (Sorted by Author)" << endl;
    std::cout << "3) Exit" << endl << endl;
    std::cout << "Your Choice -> ";
    std::cin >> choice;

    switch(choice) {
        case 1:
            //a.add();
            break;
        case 2:
            //a.print();
            break;
        case 3:
            exit(1);
            break;
    }
}
