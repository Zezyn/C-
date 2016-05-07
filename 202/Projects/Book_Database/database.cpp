#include"database.h"
#include<iostream>
#include<vector>
#include<string>


void Database::add() {
/*    
    std::cout << "Please enter the name of the book: ";
    std::cin.ignore(10000, '\n');
    getline(std::cin, title);
        
    std::cout << "Please enter name of the Author: ";
    getline(std::cin, author);
        
    std::cout << "Please enter the Publishing Date: ";
    getline(std::cin, date);
*/

    title = "The Shining"; author = "Stephen King"; date = "March 2nd, 1981";
}

void Database::print() {
    
    std::cout << "\nBook Title:           " << title;
    std::cout << "\nBook Author:          " << author;
    std::cout << "\nBood Publishing Date: " << date;

}
