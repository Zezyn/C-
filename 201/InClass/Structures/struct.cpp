/*
    Filename: struct.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 11/24/2015
    Description: 
*/
//Add libraries here
#include <iostream>

using namespace std;

struct Book
{

    char title[80];    
    char author[80];    
    char isbn[20];
    int year;
};
//Declare functions here

//Declare global variables here

int main() {

    Book book1;
    strcpy(book1.title, "War and Peace");
    strcpy(book1.author, "Leo Tolstoey");
    strcpy(book1.isbn, "0808098098098");
    book1.year = 1870;

    cout << "Name: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "ISBN: " << book1.isbn << endl;
    cout << "Year: " << book1.year << endl;
    return 0;
}

//Insert user defined functions here

