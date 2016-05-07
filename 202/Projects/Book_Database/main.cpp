/*
Filename: main.cpp
Problem:
Author: Martin Hernandez
Email: 7607920511m.h@gmail.com
Date: 05/05/2016
Description:In this project you are to create a database of books that are stored using a vector. Keep track of the author, title, and publication date of each book. You program should have a main menu that allows the user to select from the following: (1) Add a book’s author, title, and date; (2) Print an alphabetical list of the books sorted by author; and (3) Quit.

You must use a class to hold the data for each book. This class must hold three string fields: one to hold the author’s name, one for the publication date, and another to hold the book’s title. Store the entire database of books in a vector in which each vector element is a book class object.

To sort the data, use the generic sort function from the <algorithm> library. Note that this requires you to define the < operator to compare two objects of type Book so that the author field from the two books are compared. 
*/

#include <iostream>
#include <cstdlib>
#include"database.h"

using namespace std;

void menu(Database&);
void library(Database&);
void print_library(std::vector<Database>&);

int main() {

    Database D;
    menu(D);

return 0;

}

void menu(Database& a) {
/*    int choice;

    std::cout << "\n********** Welcome to the Book Database **********" << endl << endl;
    std::cout << "1) Add Book" << endl;
    std::cout << "2) View Books (Sorted by Author)" << endl;
    std::cout << "3) Exit" << endl << endl;
    std::cout << "Your Choice -> ";
    std::cin >> choice;

    switch(choice) {
        case 1:
            a.add();
            library(a);
            menu(a);
            break;
        case 2:
            break;
            a.print();
            menu(a);
        case 3:
            exit(1);
            break;
    }*/ a.add(); library(a);  //a.print();
}

void library(Database& B) {
    
    std::vector<Database> books;
    books.push_back(B);
    print_library(books);
}

void print_library(std::vector<Database>& books) {
    for(int i=0;i<1;i++) { 
    std::cout << "\nBook Title:           " << books[i].title;
    std::cout << "\nBook Author:          " << books[i].author;
    std::cout << "\nBook Publishing Date: " << books[i].date;
    }
}
    

