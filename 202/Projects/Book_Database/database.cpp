#include"database.h"
#include<iostream>
#include<string>


void Database::add() {
    
    std::cout << "Please enter the name of the book: ";
    std::cin.ignore(10000, '\n');
    getline(std::cin, title);
        
    std::cout << "Please enter name of the Author: ";
    getline(std::cin, author);
        
    std::cout << "Please enter the Publishing Date: ";
    getline(std::cin, date);


    //title = "The Shining"; author = "Stephen King"; date = "March 2nd, 1981"; //TEST LINE
}

void Database::print() {

    std::cout << "\n\nBook Author:        " << author;
    std::cout << "\nBook Title:         " << title;
    std::cout << "\nBook Date:          " << date;

}
