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
#include <algorithm> //For Sort
#include <cstdlib>  //For Exit
#include <vector>   //For Vector
#include "database.h"   //For Book info

using namespace std;

typedef std::vector<Database> library;
void menu(Database&, library&);
void print_library(library&);

int main() {

    library books;
    Database D;
    menu(D, books);

return 0;

}

void menu(Database& B, library& books) {
    
    int choice;

    do {
        std::cout << "\n\n********** Welcome to the Book Database **********" << endl << endl;
        std::cout << "1) Add Book" << endl;
        std::cout << "2) View Books (Sorted by Author)" << endl;
        std::cout << "3) Exit" << endl << endl;
        std::cout << "Your Choice -> ";
        std::cin >> choice;
        if(choice != 1 || choice != 2 || choice !=3) { std::cout << "\n\n***Invalid entry***" << endl; exit(1); }
        switch(choice) {
            case 1:
                B.add();
                books.push_back(B);
                break;
            case 2:
                print_library(books);
                break;
        } 
    } while (choice != 3);
}

void print_library(library& books) {
    
    //vector<int>::iterator p;
    
    auto p = books.begin();
    int i = 0;

    //Sort
    std::sort(books.begin(), books.end());

    //Print
    for(p = books.begin(); p != books.end(); p++) { books[i].print(); i++; } //THIS WORKS!!!!
    //for(int i=0; i < books.size(); i++) { books[i].print(); }   //THIS WORKS
}

bool operator < (const Database &a ,const Database &b ){
    return a.author < b.author;
}
